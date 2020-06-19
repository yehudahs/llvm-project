//===-- AAPSimTest.cpp - AAP Simulator Test  --------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Test program for using AAP Simulation Library
//
//===----------------------------------------------------------------------===//

#include <chrono>
#include "llvm/Object/ObjectFile.h"
#include "llvm/Support/Casting.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/PrettyStackTrace.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Target/AAPSimulator.h"
#include "llvm/Target/AAPSimState.h"
#include "sim.h"

using namespace llvm;
using namespace object;
using namespace AAPSim;

static cl::opt<std::string>
InputFilename(cl::Positional, cl::Required, cl::desc("<input object>"));

static std::string ToolName;

static void report_error(StringRef File, std::error_code EC) {
  assert(EC);
  errs() << ToolName << ": '" << File << "': " << EC.message() << ".\n";
  exit(1);
}

static void LoadObject(AAPSimulator &Sim, ObjectFile *o) {
  unsigned i = 0;
  for (const SectionRef &Section : o->sections()) {
    StringRef Name;
    if (auto NameOrErr = Section.getName())
      Name = *NameOrErr;
    uint64_t Address = Section.getAddress();
    uint64_t Size = Section.getSize();
    bool Text = Section.isText();
    bool Data = Section.isData();
    bool BSS = Section.isBSS();
    bool TextFlag = Address & 0x8000000;
    StringRef BytesStr;
    if (auto BytesOrErr = Section.getContents())
      BytesStr = *BytesOrErr;
    std::string Type = (std::string(Text ? "TEXT " : "") +
                        (Data ? "DATA " : "") + (BSS ? "BSS" : ""));
    // FIXME: We should really load based on LOAD segment flag
    if (Text || Data) {
      outs() << format("%3d %-13s %08" PRIx64 " %016" PRIx64 " %s\n", i,
                       Name.str().c_str(), Size, Address, Type.c_str());
      if (Text) {
        // Address = Address & 0xffffff;
        outs() << format("Writing %s to 0x%" PRIx64 "\n", Name.str().c_str(), Address);
        Sim.WriteCodeSection(BytesStr, Address);
      } else {
        // Address = Address & 0xffff;
        outs() << format("Writing %s to 0x%" PRIx64 "\n", Name.str().c_str(), Address);
        Sim.WriteDataSection(BytesStr, Address);
      }
    }
    ++i;
  }
  // Set PC
  uint64_t StartAddr;
  if (auto StartAddrOrErr = o->getStartAddress())
    StartAddr = *StartAddrOrErr;
  Sim.setPC(StartAddr);
}

// Load an object
static void LoadBinary(AAPSimulator &Sim, std::string filename) {
  // Attempt to open the binary.
  Expected<OwningBinary<Binary>> BinaryOrErr = createBinary(filename);
  if (auto Err = BinaryOrErr.takeError())
    report_error(filename, errorToErrorCode(std::move(Err)));
  Binary &Binary = *BinaryOrErr.get().getBinary();
  if (ObjectFile *o = dyn_cast<ObjectFile>(&Binary))
    LoadObject(Sim, o);
  else
    report_error(filename, object_error::invalid_file_type);
}

static cl::opt<bool>
DebugTrace("debug-trace", cl::desc("Enable debug tracing"));

static cl::opt<bool>
DebugTrace2("d", cl::desc("Enable debug tracing"), cl::Hidden);

static cl::opt<double>
Timeout("timeout", cl::desc("Timeout in seconds"), cl::value_desc("duration"), cl::init(0.0));
using namespace llvm;

cl::opt<std::string> TripleName(
    "triple",
    cl::desc(
        "Target triple to disassemble for, see -version for available targets"));

static const Target *getTarget(const ObjectFile *Obj, std::string TripleName) {
  // Figure out the target triple.
  Triple TheTriple("unknown-unknown-unknown");
  if (TripleName.empty()) {
    TheTriple = Obj->makeTriple();
  } else {
    TheTriple.setTriple(Triple::normalize(TripleName));
    auto Arch = Obj->getArch();
    if (Arch == Triple::arm || Arch == Triple::armeb)
      Obj->setARMSubArch(TheTriple);
  }

  // Get the target specific parser.
  std::string Error;
  const Target *TheTarget = TargetRegistry::lookupTarget("", TheTriple,
                                                         Error);
  if (!TheTarget)
    errs() <<  "can't find target: " + Error;

  // Update the triple name and return the found target.
  TripleName = TheTriple.getTriple();
  return TheTarget;
}

int main(int argc, char **argv) {
  // Init LLVM, call llvm_shutdown() on exit, parse args, etc.
  PrettyStackTraceProgram X(argc, argv);
  llvm_shutdown_obj Y;

  // Initialize targets and assembly printers/parsers.
  // (FIXME: Move this into AAPSimulator?)
  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllDisassemblers();

  cl::AddExtraVersionPrinter(TargetRegistry::printRegisteredTargetsForVersion);
  cl::ParseCommandLineOptions(argc, argv, "AAP Simulator Test\n");

  // Set up Simulator
  OwningBinary<Binary> OBinary = unwrapOrError(createBinary(InputFilename), InputFilename);
  Binary &Binary = *OBinary.getBinary();
  if (ObjectFile *Obj = dyn_cast<ObjectFile>(&Binary)){
    const Target *TheTarget = getTarget(Obj, TripleName);

    // Package up features to be passed to target/subtarget
    SubtargetFeatures Features = Obj->getFeatures();
    // if (!MAttrs.empty())
    //   for (unsigned I = 0; I != MAttrs.size(); ++I)
    //     Features.AddFeature(MAttrs[I]);

    std::unique_ptr<const MCRegisterInfo> MRI(
        TheTarget->createMCRegInfo(TripleName));
    if (!MRI)
      outs() << "no register info for target " + TripleName;

    // Set up disassembler.
    MCTargetOptions MCOptions;
    std::unique_ptr<const MCAsmInfo> AsmInfo(
        TheTarget->createMCAsmInfo(*MRI, TripleName, MCOptions));
    if (!AsmInfo)
      outs() << "no assembly info for target " + TripleName;
    std::unique_ptr<const MCSubtargetInfo> STI(
        TheTarget->createMCSubtargetInfo(TripleName, "", Features.getString()));
    if (!STI)
      outs() << "no subtarget info for target " + TripleName;
    std::unique_ptr<const MCInstrInfo> MII(TheTarget->createMCInstrInfo());
    if (!MII)
      outs() << "no instruction info for target " + TripleName;
    MCObjectFileInfo MOFI;
    MCContext Ctx(AsmInfo.get(), MRI.get(), &MOFI);
    // FIXME: for now initialize MCObjectFileInfo with default values
    MOFI.InitMCObjectFileInfo(Triple(TripleName), false, Ctx);

    std::unique_ptr<MCDisassembler> DisAsm(
        TheTarget->createMCDisassembler(*STI, Ctx));
    if (!DisAsm)
      outs() << "no disassembler for target " + TripleName;

    // If we have an ARM object file, we need a second disassembler, because
    // ARM CPUs have two different instruction sets: ARM mode, and Thumb mode.
    // We use mapping symbols to switch between the two assemblers, where
    // appropriate.
    std::unique_ptr<MCDisassembler> SecondaryDisAsm;
    std::unique_ptr<const MCSubtargetInfo> SecondarySTI;
    // if (isArmElf(Obj) && !STI->checkFeatures("+mclass")) {
    //   if (STI->checkFeatures("+thumb-mode"))
    //     Features.AddFeature("-thumb-mode");
    //   else
    //     Features.AddFeature("+thumb-mode");
    //   SecondarySTI.reset(TheTarget->createMCSubtargetInfo(TripleName, MCPU,
    //                                                       Features.getString()));
    //   SecondaryDisAsm.reset(TheTarget->createMCDisassembler(*SecondarySTI, Ctx));
    // }

    std::unique_ptr<const MCInstrAnalysis> MIA(
        TheTarget->createMCInstrAnalysis(MII.get()));

    int AsmPrinterVariant = AsmInfo->getAssemblerDialect();
    std::unique_ptr<MCInstPrinter> IP(TheTarget->createMCInstPrinter(
        Triple(TripleName), AsmPrinterVariant, *AsmInfo, *MII, *MRI));
    if (!IP)
      outs() << "no instruction printer for target " + TripleName;
    IP->setPrintImmHex(false);
    IP->setPrintBranchImmAsAddress(true);

    // PrettyPrinter &PIP = selectPrettyPrinter(Triple(TripleName));
    // SourcePrinter SP(Obj, TheTarget->getName());

    // for (StringRef Opt : DisassemblerOptions)
    //   if (!IP->applyTargetSpecificCLOption(Opt))
    //     outs() << "Unrecognized disassembler option: " + Opt);
    AAPSimulator Sim(TheTarget, Obj, Ctx, DisAsm.get(), SecondaryDisAsm.get(),
                    MIA.get(), IP.get(), STI.get(), SecondarySTI.get());

    Sim.setTracing(DebugTrace || DebugTrace2);

    // Set up timeout if specified
    std::chrono::time_point <std::chrono::system_clock, std::chrono::duration<double> > timeoutEnd =
        std::chrono::system_clock::now() + std::chrono::duration<double>(Timeout);
    bool timeoutActive = Timeout > 0.0;

    ToolName = argv[0];

    // Load Binary
    LoadBinary(Sim, InputFilename);
    unsigned stepCount = 0;
    SimStatus status = SimStatus::SIM_OK;
    while (status == SimStatus::SIM_OK) {
      status = Sim.step();
      if (timeoutActive && stepCount++ == 10000) {
        stepCount = 0;
        if (std::chrono::system_clock::now() > timeoutEnd) {
          status = SimStatus::SIM_TIMEOUT;
          break;
        }
      }
    }

    // Deal with the final simulator status
    switch (status) {
      case SimStatus::SIM_OK:
        llvm_unreachable("Not a valid final status");
      case SimStatus::SIM_INVALID_INSN:
        outs() << " *** Attempted to decode invalid instruction ***\n";
        break;
      case SimStatus::SIM_BREAKPOINT:
        outs() << " *** Breakpoint hit ***\n";
        break;
      case SimStatus::SIM_TRAP:
        outs() << " *** Simulator trap ***\n";
        break;
      case SimStatus::SIM_EXCEPT_MEM:
        outs() << " *** Invalid memory trap ***\n";
        break;
      case SimStatus::SIM_EXCEPT_REG:
        outs() << " *** Invalid register trap ***\n";
        break;
      case SimStatus::SIM_TIMEOUT:
        outs() << " *** Simulator timeout ***\n";
        break;
      case SimStatus::SIM_QUIT:
        outs() << " *** EXIT CODE " << Sim.getState().getExitCode() << " ***\n";
        return Sim.getState().getExitCode();
    }

    return 1;
  }
  else{
    outs() << " not an object file\n";
  }
}
