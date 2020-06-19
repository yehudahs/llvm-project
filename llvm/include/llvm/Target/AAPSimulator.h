//===-- AAPSimulator.h - AAP Simulator  -------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides a definition of a simulated AAP
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_AAPSIMULATOR_AAPSIMULATOR_H
#define LLVM_LIB_TARGET_AAPSIMULATOR_AAPSIMULATOR_H

#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ADT/SetOperations.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/ADT/StringSet.h"
#include "llvm/ADT/Triple.h"
#include "llvm/CodeGen/FaultMaps.h"
#include "llvm/DebugInfo/DWARF/DWARFContext.h"
#include "llvm/DebugInfo/Symbolize/Symbolize.h"
#include "llvm/Demangle/Demangle.h"
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCDisassembler/MCRelocationInfo.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/MCInstrAnalysis.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCObjectFileInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/MCTargetOptions.h"
#include "llvm/Object/Archive.h"
#include "llvm/Object/COFF.h"
#include "llvm/Object/COFFImportFile.h"
#include "llvm/Object/ELFObjectFile.h"
#include "llvm/Object/MachO.h"
#include "llvm/Object/MachOUniversal.h"
#include "llvm/Object/ObjectFile.h"
#include "llvm/Object/Wasm.h"
#include "llvm/Support/Casting.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Errc.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/FormatVariadic.h"
#include "llvm/Support/GraphWriter.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/SourceMgr.h"
#include "llvm/Support/StringSaver.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/WithColor.h"
#include "llvm/Support/raw_ostream.h"
#include <algorithm>
#include <cctype>
#include <cstring>
#include <system_error>
#include <unordered_map>
#include <utility>
#include "llvm/Object/ObjectFile.h"
#include "AAPSimState.h"

namespace AAPSim {
using namespace llvm;
using namespace llvm::object;

/// AAPSimulator - AAP Simulator
class AAPSimulator {
  AAPSimState State;

  // Target/MCInfo
  const llvm::Target *TheTarget;
  const llvm::MCRegisterInfo *MRI;
  const llvm::MCAsmInfo *AsmInfo;
  const llvm::MCSubtargetInfo *STI;
  const llvm::MCSubtargetInfo *STISec;
  const llvm::MCInstrInfo *MII;
  const llvm::MCInstrAnalysis* MIA;
  const ObjectFile *Obj;
  llvm::MCDisassembler *DisAsm;
  llvm::MCDisassembler *DisAsmSec;
  llvm::MCInstPrinter *IP;
  MCContext &Ctx;

public:
  AAPSimulator(const Target *TheTarget, const ObjectFile *Obj,
                              MCContext &Ctx, MCDisassembler *PrimaryDisAsm,
                              MCDisassembler *SecondaryDisAsm,
                              const MCInstrAnalysis *MIA, MCInstPrinter *IP,
                              const MCSubtargetInfo *PrimarySTI,
                              const MCSubtargetInfo *SecondarySTI);

  AAPSimState &getState() { return State; }

  /// Functions for writing bulk to the code/data memories
  void WriteCodeSection(llvm::StringRef Bytes, uint32_t address);
  void WriteDataSection(llvm::StringRef Bytes, uint32_t address);

  /// Set Program Counter
  void setPC(uint32_t pc_w) { State.setPC(pc_w); }

  /// Execute an instruction
  SimStatus exec(llvm::MCInst &Inst, uint32_t pc_w, uint32_t &newpc_w);

  /// Step the processor
  SimStatus step();

  /// Trace control
  bool getTracing() const { return State.getTracing(); }
  void setTracing(bool enabled) { State.setTracing(enabled); }
};

} // End AAPSim namespace

#endif
