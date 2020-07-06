#include "llvm/MC/MCInst.h"

using namespace llvm;
namespace instexe{

class MachineRegister {
    unsigned RegIdx;
    StringRef Name;
    //  const MVT::SimpleValueType* Types;
    public:
    //  MachineRegister(StringRef Name, const MVT::SimpleValueType *Types):
    MachineRegister(StringRef Name, unsigned EnumIdx):
    RegIdx(EnumIdx), Name(Name) {}
    unsigned GetRegIdx() {return RegIdx;}
    StringRef GetName() {return Name;}
    //  const MVT::SimpleValueType* GetTypes() {return Types;}

    //operations
    MachineRegister operator+(MachineRegister &other);
    MachineRegister operator+(int64_t &other);
};

MachineRegister SimAdd(MCInst &Inst);

}