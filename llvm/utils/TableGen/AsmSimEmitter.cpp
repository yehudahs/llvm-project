//===- DAGISelEmitter.cpp - Generate an instruction selector --------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This tablegen backend emits a DAG instruction selector.
//
//===----------------------------------------------------------------------===//

#include <map>
#include "CodeGenDAGPatterns.h"
#include "DAGISelMatcher.h"
#include "llvm/Support/Debug.h"
#include "llvm/TableGen/Record.h"
#include "llvm/TableGen/TableGenBackend.h"

using namespace llvm;

#define DEBUG_TYPE "asm-sim-emitter"

namespace {

class IDAGSelEmitter {
  CodeGenDAGPatterns CGP;
  RecordKeeper &Records;
  CodeGenTarget Target;
  std::map<StringRef, Record*> OprndMap;
  void EmitSimRegisters(raw_ostream &OS);
  std::map<StringRef, std::vector<MVT::SimpleValueType>*> CollectRegisterTypes();
  void CollectPhysicalRegisters();
public:
  explicit IDAGSelEmitter(RecordKeeper &R);
  void run(raw_ostream &OS);
  // void emit_pattern(TreePatternNode *PatternTree, raw_ostream &OS);
};

IDAGSelEmitter::IDAGSelEmitter(RecordKeeper & R) 
  : CGP(R), Records(R), Target(R) {
    std::vector<Record*> Regs = Records.getAllDerivedDefinitions("DAGOperand");
    for (Record *Reg : Regs) {
      // errs() << "inserting " << Reg->getName() << "\n";
      StringRef OprndName = Reg->getName();
      OprndMap[OprndName] = Reg;
    }
}

} // End anonymous namespace


// void TreePattern::print(raw_ostream &OS) const {
//   OS << getRecord()->getName();
//   if (!Args.empty()) {
//     OS << "(" << Args[0];
//     for (unsigned i = 1, e = Args.size(); i != e; ++i)
//       OS << ", " << Args[i];
//     OS << ")";
//   }
//   OS << ": ";

//   if (Trees.size() > 1)
//     OS << "[\n";
//   for (const TreePatternNodePtr &Tree : Trees) {
//     OS << "\t";
//     Tree->print(OS);
//     OS << "\n";
//   }

//   if (Trees.size() > 1)
//     OS << "]\n";
// }

// void IDAGSelEmitter::emit_pattern(TreePatternNode *PatternTree, 
//                               raw_ostream &OS) {
//   if (PatternTree->isLeaf())
//     OS << *PatternTree->getLeafValue();
//   else
//     OS << '(' << PatternTree->getOperator()->getName();

//   for (unsigned i = 0, e = PatternTree->getNumTypes(); i != e; ++i) {
//     OS << ':';
//     PatternTree->getExtType(i).writeToStream(OS);
//   }

//   if (!PatternTree->isLeaf()) {
//     if (PatternTree->getNumChildren() != 0) {
//       OS << " ";
//       PatternTree->getChild(0)->print(OS);
//       for (unsigned i = 1, e = PatternTree->getNumChildren(); i != e; ++i) {
//         OS << ", ";
//         PatternTree->getChild(i)->print(OS);
//       }
//     }
//     OS << ")";
//   }

//   for (const TreePredicateCall &Pred : PatternTree->getPredicateCalls()) {
//     OS << "<<P:";
//     if (Pred.Scope)
//       OS << Pred.Scope << ":";
//     OS << Pred.Fn.getFnName() << ">>";
//   }
//   if (PatternTree->getTransformFn())
//     OS << "<<X:" << PatternTree->getTransformFn()->getName() << ">>";
//   if (!PatternTree->getName().empty())
//     OS << ":$" << PatternTree->getName();

//   for (const ScopedName &Name : PatternTree->getNamesAsPredicateArg())
//     OS << ":$pred:" << Name.getScope() << ":" << Name.getIdentifier();
// }

std::map<StringRef, std::vector<MVT::SimpleValueType>*> IDAGSelEmitter::CollectRegisterTypes(){
  std::vector<Record*> Regs = Records.getAllDerivedDefinitions("DAGOperand");
  std::map<StringRef, std::vector<MVT::SimpleValueType>*> RegisterTypes;

  for (Record *OrigReg : Regs) {
    std::vector<MVT::SimpleValueType>* RegisterTypesVec = new std::vector<MVT::SimpleValueType>();
    Record * CurrReg = OrigReg;
    // CurrReg->dump();
    // errs() << "//typedef ";
    // errs() << OrigReg->getName() << " = ";
    RecordVal * Val = CurrReg->getValue("RegTypes");
    while (!Val) {
      // RecordVal * RegClassVal = CurrReg->getValue("RegClass");
      // Init * RegClassValInit = RegClassVal->getValue();
      // StringRef RegClass = CurrReg->getValue("RegClass")->getValue()->getAsString();
      // errs() << *CurrReg->getValue("RegClass")->getValue();
      std::map<StringRef, Record*>::iterator It;
      if (CurrReg->getValue("RegClass")) {
        It = OprndMap.find(CurrReg->getValue("RegClass")->getValue()->getAsString());
        if (It == OprndMap.end()) {
          std::string OperndName = CurrReg->getValue("RegClass")->getValue()->getAsString();
          llvm_unreachable(("error: " + OperndName + " is not in the list of DAGOperand\n").c_str());
        } else{
          CurrReg = It->second;
          Val = CurrReg->getValue("RegTypes");
        }
      }else if (CurrReg->getValue("Type")){
        // errs() << CurrReg->getValue("Type")->getValue()->getAsString() << "\n";
        Val = CurrReg->getValue("Type");
      }else{
        std::string RegNameStr = CurrReg->getName().str();
        llvm_unreachable(("error: can't find" + RegNameStr + " type\n").c_str());
      }
    }
    
    // errs() << "Val: " << Val->getName() << "\n";
    // errs() << "Res: " << *CurrReg->getValue(Val->getName())->getValue() << ";\n";
    if (CurrReg->getValue(Val->getName())){
      auto InitVal = CurrReg->getValue(Val->getName())->getValue();
      if (ListInit::classof(InitVal)){
        ListInit *VTs = dyn_cast<ListInit>(InitVal);
        for (unsigned i = 0, e = VTs->size(); i != e; ++i) {
          Record *VT = VTs->getElementAsRecord(i);
          RegisterTypesVec->push_back(getValueType(VT));
          // StringRef ElmtName = getEnumName(getValueType(VT));
          // RegisterTypesVec->push_back(ElmtName);
        } 
        // std::string ElmtName;
        // for (Init * Element : dyn_cast<ListInit>(InitVal)->getValues()) {
        //   Record *VT = Element->getElementAsRecord(i);
        //   ElmtName = Element->getAsString().c_str();
        //   RegisterTypesVec->push_back(ElmtName);
        //   errs() << ElmtName << "\n";
        // }
        // errs() << ElmtName << "\n";
      }else{
        errs() << "unknown type" << "\n";
        // llvm_unreachable("unknown Init type");
      }
      // errs() << OrigReg->getName() << " = " << *RegisterTypesVec <<";\n";
      RegisterTypes[OrigReg->getName()] = RegisterTypesVec;
    }else{
      std::string OprndName = CurrReg->getName().str();
      llvm_unreachable(("known " + OprndName + " type").c_str());
    }
  }

  return RegisterTypes;

}

void IDAGSelEmitter::CollectPhysicalRegisters(){
  CodeGenRegBank &RegBank = Target.getRegBank();
  const auto &RegisterClasses = RegBank.getRegClasses();
  for (const auto &RC : RegisterClasses) {
    ArrayRef<Record*> Order = RC.getOrder();

    // Give the register class a legal C name if it's anonymous.
    const std::string &Name = RC.getName();
    errs() << Name << " : ";

    // RegClassStrings.add(Name);

    // Emit the register list now.
    // OS << "  // " << Name << " Register Class...\n"
    //    << "  const MCPhysReg " << Name
    //    << "[] = {\n    ";
    for (Record *Reg : Order) {
      errs() << getQualifiedName(Reg) << ", ";
    }
    errs() << "\n";

    // OS << "  // " << Name << " Bit set.\n"
    //    << "  const uint8_t " << Name
    //    << "Bits[] = {\n    ";
    // BitVectorEmitter BVE;
    // for (Record *Reg : Order) {
    //   BVE.add(Target.getRegBank().getReg(Reg)->EnumValue);
    // }
    // BVE.print(OS);
    // OS << "\n  };\n\n";

  }

  // StringRef TargetName = Target.getName();
  // const CodeGenRegBank &RegisterClassHierarchy = Target.getRegBank();

  // std::vector<RegisterBank> Banks;
  // for (const auto &V : Records.getAllDerivedDefinitions("Register")) {
  //   errs() << V->getName() << "\n";
  //   ArrayRef<RecordVal> RecordValVec = V->getValues();
  //   for (RecordVal RecordVal: RecordValVec) {
  //     errs() << RecordVal.getName() << " = " << RecordVal.getValue()->getAsString() << "\n";
  //   }
  // }
  // for (const auto &V : Records.getAllDerivedDefinitions("RegisterClass")) {
  //   errs() << V->getName() << "\n";
  //   ArrayRef<RecordVal> RecordValVec = V->getValues();
  //   for (RecordVal RecordVal: RecordValVec) {
  //     errs() << RecordVal.getName() << " = " << RecordVal.getValue()->getAsString() << "\n";
  //   }
    // SmallPtrSet<const CodeGenRegisterClass *, 8> VisitedRCs;
    // RegisterBank Bank(*V);

    // for (const CodeGenRegisterClass *RC :
    //      Bank.getExplicitlySpecifiedRegisterClasses(RegisterClassHierarchy)) {
    //   visitRegisterBankClasses(
    //       RegisterClassHierarchy, RC, "explicit",
    //       [&Bank](const CodeGenRegisterClass *RC, StringRef Kind) {
    //         LLVM_DEBUG(dbgs()
    //                    << "Added " << RC->getName() << "(" << Kind << ")\n");
    //         Bank.addRegisterClass(RC);
    //       },
    //       VisitedRCs);
    // }

    // Banks.push_back(Bank);
  // }
}

void IDAGSelEmitter::EmitSimRegisters(raw_ostream &OS){
  std::map<StringRef, std::vector<MVT::SimpleValueType>*> RegisterTypes = CollectRegisterTypes();
  CollectPhysicalRegisters();
  for ( const auto &OprndTypePair : RegisterTypes) {
    errs() << OprndTypePair.first << " = ";
    std::vector<MVT::SimpleValueType> * OprndTypesVec = OprndTypePair.second;
    for (MVT::SimpleValueType OprndType: *OprndTypesVec){
      errs() << getEnumName(OprndType) << ",";
    }
    errs() << "\n";
  }
  return;
}

//taken from CodeEmitterGen::run
void IDAGSelEmitter::run(raw_ostream &OS) {
  StringRef TargetName = CGP.getTargetInfo().getName();
  emitSourceFileHeader(("Instruction DAG Selector for the " +
                       TargetName + " target").str(), OS);

  OS << "// *** NOTE: This file is #included into the middle of the target\n"
     << "// *** instruction selector class.  These functions are really "
     << "methods.\n\n";

  OS << "// If GET_DAGISEL_DECL is #defined with any value, only function\n"
        "// declarations will be included when this file is included.\n"
        "// If GET_DAGISEL_BODY is #defined, its value should be the name of\n"
        "// the instruction selector class. Function bodies will be emitted\n"
        "// and each function's name will be qualified with the name of the\n"
        "// class.\n"
        "//\n"
        "// When neither of the GET_DAGISEL* macros is defined, the functions\n"
        "// are emitted inline.\n\n";


  // std::vector<Record*> Regs = Records.getAllDerivedDefinitions("Register");
  EmitSimRegisters(OS);
  std::vector<Record*> Instrs = Records.getAllDerivedDefinitions("Instruction");
  int index = 0;
  for (Record *Instr : Instrs) {
    ListInit *LI = nullptr;

    if (isa<ListInit>(Instr->getValueInit("Pattern")))
      LI = Instr->getValueAsListInit("Pattern");
    errs() << "index " << index << " : ";
    Instr->dump();
    OS << "case " << TargetName << "::" << Instr->getNameInitAsString() << ":\n";
    if (LI) {
      OS << "\tdbgs() << \"";
      LI->print(OS);
      OS << "\\n\";";
    }
    OS << "\n";
    OS << "\tbreak;\n";
    // parseInstructionPattern(CGI, LI, Instructions);
  }

//   errs() << "\n\nALL PATTERNS TO MATCH:\n\n";
//              for (CodeGenDAGPatterns::ptm_iterator I = CGP.ptm_begin(),
//                   E = CGP.ptm_end();
//                   I != E; ++I) {
//             //    errs() << I->dump();
//                errs() << "PATTERN: ";
//                I->getSrcPattern()->dump();
//                errs() << "\nRESULT:  ";
//                I->getDstPattern()->dump();
//                errs() << "\n";
//              };

  // //collect all the opcode targets
  // std::map<StringRef, std::vector<std::pair<TreePatternNode *, TreePatternNode *>>*> OpcodeMatcher;
  // for (CodeGenDAGPatterns::ptm_iterator I = CGP.ptm_begin(),
  //     E = CGP.ptm_end();
  //     I != E; ++I) {
  //       auto Opcode = I->getDstPattern()->getOperator()->getName();
  //       auto TreeIter = OpcodeMatcher.find(Opcode);
  //       if (TreeIter == OpcodeMatcher.end()){
  //        auto Tree = new std::vector<std::pair<TreePatternNode *, TreePatternNode *>>();
  //        Tree->push_back(std::make_pair(I->getDstPattern(), I->getSrcPattern()));
  //        OpcodeMatcher[Opcode] = Tree;
  //       }else{
  //         auto Tree = TreeIter->second;
  //         Tree->push_back(std::make_pair(I->getDstPattern(), I->getSrcPattern()));
  //         OpcodeMatcher[Opcode] = Tree;
  //       }
        
  //     }

  // auto Target = CGP.getTargetInfo().getName().str();
  // for(auto OpcodeMatcherPair : OpcodeMatcher){
  //   OS << "case " << Target << "::" << OpcodeMatcherPair.first << ":\n";
  //   OS << "\tdbgs() << \"" << OpcodeMatcherPair.first << "\" << \"\\n\";\n";
  //   std::vector<std::pair<TreePatternNode *, TreePatternNode *>> TreePatternVec = *OpcodeMatcherPair.second;
    
  //   for (std::pair<TreePatternNode *, TreePatternNode *> PatternTreePair: TreePatternVec){
  //     OS << "//\t";
  //     emit_pattern(PatternTreePair.first, OS);
  //     OS << "\n";
  //     OS << "//\t";
  //     emit_pattern(PatternTreePair.second, OS);
  //     OS << "\n";
  //   }
    
  //   OS << "\n\tbreak;\n";
  // }
  // for (CodeGenDAGPatterns::ptm_iterator I = CGP.ptm_begin(),
  //     E = CGP.ptm_end();
  //     I != E; ++I) {
  //   OS << "case " << Target << "::" << I->getDstPattern()->getOperator()->getName() << ":\n";
  //   OS << "\tprintf(\"" << I->getDstPattern()->getOperator()->getName() << "\");\n";
  //   OS << "\tbreak;\n";
  // };

  return;

}

namespace llvm {

void EmitIDAGSel(RecordKeeper &RK, raw_ostream &OS) {
  IDAGSelEmitter(RK).run(OS);
}

} // End llvm namespace
