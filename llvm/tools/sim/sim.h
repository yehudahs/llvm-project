#include "llvm/ADT/StringSet.h"
#include "llvm/DebugInfo/DIContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/Object/Archive.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Compiler.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/MachineValueType.h"

using namespace llvm;

template <typename T, typename... Ts>
T unwrapOrError(Expected<T> EO, Ts &&... Args) {
  if (EO)
    return std::move(*EO);
}

namespace llvmsim {
class Register {
  unsigned RegIdx;
  StringRef Name;
  MVT::SimpleValueType Type;
public:
  Register(unsigned RegIdx, StringRef Name, MVT::SimpleValueType Type):
    RegIdx(RegIdx), Name(Name), Type(Type) {}
  unsigned GetRegIdx() {return RegIdx;}
  StringRef GetName() {return Name;}
  MVT::SimpleValueType GetType() {return Type;}
};
}
