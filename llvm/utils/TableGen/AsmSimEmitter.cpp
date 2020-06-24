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
public:
  explicit IDAGSelEmitter(RecordKeeper &R) : CGP(R), Records(R), Target(R) {}
  void run(raw_ostream &OS);
  void emit_pattern(TreePatternNode *PatternTree, raw_ostream &OS);
};
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

void IDAGSelEmitter::emit_pattern(TreePatternNode *PatternTree, 
                              raw_ostream &OS) {
  if (PatternTree->isLeaf())
    OS << *PatternTree->getLeafValue();
  else
    OS << '(' << PatternTree->getOperator()->getName();

  for (unsigned i = 0, e = PatternTree->getNumTypes(); i != e; ++i) {
    OS << ':';
    PatternTree->getExtType(i).writeToStream(OS);
  }

  if (!PatternTree->isLeaf()) {
    if (PatternTree->getNumChildren() != 0) {
      OS << " ";
      PatternTree->getChild(0)->print(OS);
      for (unsigned i = 1, e = PatternTree->getNumChildren(); i != e; ++i) {
        OS << ", ";
        PatternTree->getChild(i)->print(OS);
      }
    }
    OS << ")";
  }

  for (const TreePredicateCall &Pred : PatternTree->getPredicateCalls()) {
    OS << "<<P:";
    if (Pred.Scope)
      OS << Pred.Scope << ":";
    OS << Pred.Fn.getFnName() << ">>";
  }
  if (PatternTree->getTransformFn())
    OS << "<<X:" << PatternTree->getTransformFn()->getName() << ">>";
  if (!PatternTree->getName().empty())
    OS << ":$" << PatternTree->getName();

  for (const ScopedName &Name : PatternTree->getNamesAsPredicateArg())
    OS << ":$pred:" << Name.getScope() << ":" << Name.getIdentifier();
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


  std::vector<Record*> Instrs = Records.getAllDerivedDefinitions("Instruction");

  for (Record *Instr : Instrs) {
    ListInit *LI = nullptr;

    if (isa<ListInit>(Instr->getValueInit("Pattern")))
      LI = Instr->getValueAsListInit("Pattern");

    // Instr->dump();
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
