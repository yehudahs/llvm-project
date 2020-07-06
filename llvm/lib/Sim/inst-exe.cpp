#include "llvm/Sim/inst-exe.h"

namespace instexe{

MachineRegister MachineRegister::operator+(MachineRegister &other){
    return MachineRegister("tmp", 0);
}

MachineRegister MachineRegister::operator+(int64_t &other){
    return MachineRegister("tmp" , 0);
}


MachineRegister GetRegByNum(unsigned RegNum) {
    return MachineRegister("tmp", 0);
}

MachineRegister SimAdd(MCInst &Inst){
    MCOperand ResNum = Inst.getOperand(0);
    MachineRegister ResReg = GetRegByNum(ResNum.getReg());
    MCOperand In1 = Inst.getOperand(1);
    MachineRegister In1Reg = GetRegByNum(In1.getReg());
    MCOperand In2 = Inst.getOperand(2);
    if (In2.isImm()){
        int64_t Imm = In2.getImm();
        ResReg = In1Reg + Imm;
    } else if (In2.isReg()){
        unsigned RegNum = In2.getReg();
        MachineRegister In2Reg = GetRegByNum(RegNum);
        ResReg = In1Reg + In2Reg;
    } else {
        llvm_unreachable("unimplement option of SimAdd");
    }
    return ResReg;
}

}