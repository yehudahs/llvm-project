#include <map>
#include "llvm/MC/MCInst.h"
#include "llvm/ADT/StringMap.h"

using namespace llvm;
namespace instexe{

class MachineRegister {
    unsigned RegEnum;
    StringRef Name;
    //  const MVT::SimpleValueType* Types;
    public:
    //  MachineRegister(StringRef Name, const MVT::SimpleValueType *Types):
    MachineRegister(StringRef Name, unsigned EnumIdx):
    RegEnum(EnumIdx), Name(Name) {}
    unsigned GetRegEnum() {return RegEnum;}
    StringRef GetName() {return Name;}
    //  const MVT::SimpleValueType* GetTypes() {return Types;}

    //operations
    MachineRegister operator+(MachineRegister &other);
    MachineRegister operator+(int64_t &other);
};

class MachineRegisters {
    static MachineRegisters *instance;
    StringMap<MachineRegister*> RegistersByName;
    std::map<unsigned, MachineRegister*> RegistersByEnum;

    MachineRegisters() {}
public:
    static MachineRegisters* getInstance();

    void insert(StringRef RegName, MachineRegister* Reg){
        unsigned RegEnum = Reg->GetRegEnum();
        RegistersByName.insert(std::make_pair(RegName, Reg));
        RegistersByEnum.insert(std::make_pair(RegEnum, Reg));
    }

    const StringMap<MachineRegister *> &getRegistersByName() const {
      return RegistersByName;
    }

    MachineRegister* getRegistersByEnum(unsigned RegEnum) {
      return RegistersByEnum[RegEnum];
    }
};

MachineRegister SimAdd(MCInst &Inst);

}