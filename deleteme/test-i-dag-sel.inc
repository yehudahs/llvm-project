/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Instruction DAG Selector for the Mips target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

class MachineRegister {
    unsigned RegIdx;
    StringRef Name;
  public:
    MachineRegister(StringRef Name):
      RegIdx(0), Name(Name) {}
    unsigned GetRegIdx() {return RegIdx;}
    StringRef GetName() {return Name;}
};
MachineRegister A0("A0");
MachineRegister A0_64("A0_64");
MachineRegister A1("A1");
MachineRegister A1_64("A1_64");
MachineRegister A2("A2");
MachineRegister A2_64("A2_64");
MachineRegister A3("A3");
MachineRegister A3_64("A3_64");
MachineRegister AC0("AC0");
MachineRegister AC0_64("AC0_64");
MachineRegister AC1("AC1");
MachineRegister AC2("AC2");
MachineRegister AC3("AC3");
MachineRegister AT("AT");
MachineRegister AT_64("AT_64");
MachineRegister COP00("COP00");
MachineRegister COP01("COP01");
MachineRegister COP010("COP010");
MachineRegister COP011("COP011");
MachineRegister COP012("COP012");
MachineRegister COP013("COP013");
MachineRegister COP014("COP014");
MachineRegister COP015("COP015");
MachineRegister COP016("COP016");
MachineRegister COP017("COP017");
MachineRegister COP018("COP018");
MachineRegister COP019("COP019");
MachineRegister COP02("COP02");
MachineRegister COP020("COP020");
MachineRegister COP021("COP021");
MachineRegister COP022("COP022");
MachineRegister COP023("COP023");
MachineRegister COP024("COP024");
MachineRegister COP025("COP025");
MachineRegister COP026("COP026");
MachineRegister COP027("COP027");
MachineRegister COP028("COP028");
MachineRegister COP029("COP029");
MachineRegister COP03("COP03");
MachineRegister COP030("COP030");
MachineRegister COP031("COP031");
MachineRegister COP04("COP04");
MachineRegister COP05("COP05");
MachineRegister COP06("COP06");
MachineRegister COP07("COP07");
MachineRegister COP08("COP08");
MachineRegister COP09("COP09");
MachineRegister COP20("COP20");
MachineRegister COP21("COP21");
MachineRegister COP210("COP210");
MachineRegister COP211("COP211");
MachineRegister COP212("COP212");
MachineRegister COP213("COP213");
MachineRegister COP214("COP214");
MachineRegister COP215("COP215");
MachineRegister COP216("COP216");
MachineRegister COP217("COP217");
MachineRegister COP218("COP218");
MachineRegister COP219("COP219");
MachineRegister COP22("COP22");
MachineRegister COP220("COP220");
MachineRegister COP221("COP221");
MachineRegister COP222("COP222");
MachineRegister COP223("COP223");
MachineRegister COP224("COP224");
MachineRegister COP225("COP225");
MachineRegister COP226("COP226");
MachineRegister COP227("COP227");
MachineRegister COP228("COP228");
MachineRegister COP229("COP229");
MachineRegister COP23("COP23");
MachineRegister COP230("COP230");
MachineRegister COP231("COP231");
MachineRegister COP24("COP24");
MachineRegister COP25("COP25");
MachineRegister COP26("COP26");
MachineRegister COP27("COP27");
MachineRegister COP28("COP28");
MachineRegister COP29("COP29");
MachineRegister COP30("COP30");
MachineRegister COP31("COP31");
MachineRegister COP310("COP310");
MachineRegister COP311("COP311");
MachineRegister COP312("COP312");
MachineRegister COP313("COP313");
MachineRegister COP314("COP314");
MachineRegister COP315("COP315");
MachineRegister COP316("COP316");
MachineRegister COP317("COP317");
MachineRegister COP318("COP318");
MachineRegister COP319("COP319");
MachineRegister COP32("COP32");
MachineRegister COP320("COP320");
MachineRegister COP321("COP321");
MachineRegister COP322("COP322");
MachineRegister COP323("COP323");
MachineRegister COP324("COP324");
MachineRegister COP325("COP325");
MachineRegister COP326("COP326");
MachineRegister COP327("COP327");
MachineRegister COP328("COP328");
MachineRegister COP329("COP329");
MachineRegister COP33("COP33");
MachineRegister COP330("COP330");
MachineRegister COP331("COP331");
MachineRegister COP34("COP34");
MachineRegister COP35("COP35");
MachineRegister COP36("COP36");
MachineRegister COP37("COP37");
MachineRegister COP38("COP38");
MachineRegister COP39("COP39");
MachineRegister D0("D0");
MachineRegister D0_64("D0_64");
MachineRegister D1("D1");
MachineRegister D10("D10");
MachineRegister D10_64("D10_64");
MachineRegister D11("D11");
MachineRegister D11_64("D11_64");
MachineRegister D12("D12");
MachineRegister D12_64("D12_64");
MachineRegister D13("D13");
MachineRegister D13_64("D13_64");
MachineRegister D14("D14");
MachineRegister D14_64("D14_64");
MachineRegister D15("D15");
MachineRegister D15_64("D15_64");
MachineRegister D16_64("D16_64");
MachineRegister D17_64("D17_64");
MachineRegister D18_64("D18_64");
MachineRegister D19_64("D19_64");
MachineRegister D1_64("D1_64");
MachineRegister D2("D2");
MachineRegister D20_64("D20_64");
MachineRegister D21_64("D21_64");
MachineRegister D22_64("D22_64");
MachineRegister D23_64("D23_64");
MachineRegister D24_64("D24_64");
MachineRegister D25_64("D25_64");
MachineRegister D26_64("D26_64");
MachineRegister D27_64("D27_64");
MachineRegister D28_64("D28_64");
MachineRegister D29_64("D29_64");
MachineRegister D2_64("D2_64");
MachineRegister D3("D3");
MachineRegister D30_64("D30_64");
MachineRegister D31_64("D31_64");
MachineRegister D3_64("D3_64");
MachineRegister D4("D4");
MachineRegister D4_64("D4_64");
MachineRegister D5("D5");
MachineRegister D5_64("D5_64");
MachineRegister D6("D6");
MachineRegister D6_64("D6_64");
MachineRegister D7("D7");
MachineRegister D7_64("D7_64");
MachineRegister D8("D8");
MachineRegister D8_64("D8_64");
MachineRegister D9("D9");
MachineRegister D9_64("D9_64");
MachineRegister DSPCCond("DSPCCond");
MachineRegister DSPCarry("DSPCarry");
MachineRegister DSPEFI("DSPEFI");
MachineRegister DSPOutFlag("DSPOutFlag");
MachineRegister DSPOutFlag16_19("DSPOutFlag16_19");
MachineRegister DSPOutFlag20("DSPOutFlag20");
MachineRegister DSPOutFlag21("DSPOutFlag21");
MachineRegister DSPOutFlag22("DSPOutFlag22");
MachineRegister DSPOutFlag23("DSPOutFlag23");
MachineRegister DSPPos("DSPPos");
MachineRegister DSPSCount("DSPSCount");
MachineRegister F0("F0");
MachineRegister F1("F1");
MachineRegister F10("F10");
MachineRegister F11("F11");
MachineRegister F12("F12");
MachineRegister F13("F13");
MachineRegister F14("F14");
MachineRegister F15("F15");
MachineRegister F16("F16");
MachineRegister F17("F17");
MachineRegister F18("F18");
MachineRegister F19("F19");
MachineRegister F2("F2");
MachineRegister F20("F20");
MachineRegister F21("F21");
MachineRegister F22("F22");
MachineRegister F23("F23");
MachineRegister F24("F24");
MachineRegister F25("F25");
MachineRegister F26("F26");
MachineRegister F27("F27");
MachineRegister F28("F28");
MachineRegister F29("F29");
MachineRegister F3("F3");
MachineRegister F30("F30");
MachineRegister F31("F31");
MachineRegister F4("F4");
MachineRegister F5("F5");
MachineRegister F6("F6");
MachineRegister F7("F7");
MachineRegister F8("F8");
MachineRegister F9("F9");
MachineRegister FCC0("FCC0");
MachineRegister FCC1("FCC1");
MachineRegister FCC2("FCC2");
MachineRegister FCC3("FCC3");
MachineRegister FCC4("FCC4");
MachineRegister FCC5("FCC5");
MachineRegister FCC6("FCC6");
MachineRegister FCC7("FCC7");
MachineRegister FCR0("FCR0");
MachineRegister FCR1("FCR1");
MachineRegister FCR10("FCR10");
MachineRegister FCR11("FCR11");
MachineRegister FCR12("FCR12");
MachineRegister FCR13("FCR13");
MachineRegister FCR14("FCR14");
MachineRegister FCR15("FCR15");
MachineRegister FCR16("FCR16");
MachineRegister FCR17("FCR17");
MachineRegister FCR18("FCR18");
MachineRegister FCR19("FCR19");
MachineRegister FCR2("FCR2");
MachineRegister FCR20("FCR20");
MachineRegister FCR21("FCR21");
MachineRegister FCR22("FCR22");
MachineRegister FCR23("FCR23");
MachineRegister FCR24("FCR24");
MachineRegister FCR25("FCR25");
MachineRegister FCR26("FCR26");
MachineRegister FCR27("FCR27");
MachineRegister FCR28("FCR28");
MachineRegister FCR29("FCR29");
MachineRegister FCR3("FCR3");
MachineRegister FCR30("FCR30");
MachineRegister FCR31("FCR31");
MachineRegister FCR4("FCR4");
MachineRegister FCR5("FCR5");
MachineRegister FCR6("FCR6");
MachineRegister FCR7("FCR7");
MachineRegister FCR8("FCR8");
MachineRegister FCR9("FCR9");
MachineRegister FP("FP");
MachineRegister FP_64("FP_64");
MachineRegister F_HI0("F_HI0");
MachineRegister F_HI1("F_HI1");
MachineRegister F_HI10("F_HI10");
MachineRegister F_HI11("F_HI11");
MachineRegister F_HI12("F_HI12");
MachineRegister F_HI13("F_HI13");
MachineRegister F_HI14("F_HI14");
MachineRegister F_HI15("F_HI15");
MachineRegister F_HI16("F_HI16");
MachineRegister F_HI17("F_HI17");
MachineRegister F_HI18("F_HI18");
MachineRegister F_HI19("F_HI19");
MachineRegister F_HI2("F_HI2");
MachineRegister F_HI20("F_HI20");
MachineRegister F_HI21("F_HI21");
MachineRegister F_HI22("F_HI22");
MachineRegister F_HI23("F_HI23");
MachineRegister F_HI24("F_HI24");
MachineRegister F_HI25("F_HI25");
MachineRegister F_HI26("F_HI26");
MachineRegister F_HI27("F_HI27");
MachineRegister F_HI28("F_HI28");
MachineRegister F_HI29("F_HI29");
MachineRegister F_HI3("F_HI3");
MachineRegister F_HI30("F_HI30");
MachineRegister F_HI31("F_HI31");
MachineRegister F_HI4("F_HI4");
MachineRegister F_HI5("F_HI5");
MachineRegister F_HI6("F_HI6");
MachineRegister F_HI7("F_HI7");
MachineRegister F_HI8("F_HI8");
MachineRegister F_HI9("F_HI9");
MachineRegister GP("GP");
MachineRegister GP_64("GP_64");
MachineRegister HI0("HI0");
MachineRegister HI0_64("HI0_64");
MachineRegister HI1("HI1");
MachineRegister HI2("HI2");
MachineRegister HI3("HI3");
MachineRegister HWR0("HWR0");
MachineRegister HWR1("HWR1");
MachineRegister HWR10("HWR10");
MachineRegister HWR11("HWR11");
MachineRegister HWR12("HWR12");
MachineRegister HWR13("HWR13");
MachineRegister HWR14("HWR14");
MachineRegister HWR15("HWR15");
MachineRegister HWR16("HWR16");
MachineRegister HWR17("HWR17");
MachineRegister HWR18("HWR18");
MachineRegister HWR19("HWR19");
MachineRegister HWR2("HWR2");
MachineRegister HWR20("HWR20");
MachineRegister HWR21("HWR21");
MachineRegister HWR22("HWR22");
MachineRegister HWR23("HWR23");
MachineRegister HWR24("HWR24");
MachineRegister HWR25("HWR25");
MachineRegister HWR26("HWR26");
MachineRegister HWR27("HWR27");
MachineRegister HWR28("HWR28");
MachineRegister HWR29("HWR29");
MachineRegister HWR3("HWR3");
MachineRegister HWR30("HWR30");
MachineRegister HWR31("HWR31");
MachineRegister HWR4("HWR4");
MachineRegister HWR5("HWR5");
MachineRegister HWR6("HWR6");
MachineRegister HWR7("HWR7");
MachineRegister HWR8("HWR8");
MachineRegister HWR9("HWR9");
MachineRegister K0("K0");
MachineRegister K0_64("K0_64");
MachineRegister K1("K1");
MachineRegister K1_64("K1_64");
MachineRegister LO0("LO0");
MachineRegister LO0_64("LO0_64");
MachineRegister LO1("LO1");
MachineRegister LO2("LO2");
MachineRegister LO3("LO3");
MachineRegister MPL0("MPL0");
MachineRegister MPL1("MPL1");
MachineRegister MPL2("MPL2");
MachineRegister MSA10("MSA10");
MachineRegister MSA11("MSA11");
MachineRegister MSA12("MSA12");
MachineRegister MSA13("MSA13");
MachineRegister MSA14("MSA14");
MachineRegister MSA15("MSA15");
MachineRegister MSA16("MSA16");
MachineRegister MSA17("MSA17");
MachineRegister MSA18("MSA18");
MachineRegister MSA19("MSA19");
MachineRegister MSA20("MSA20");
MachineRegister MSA21("MSA21");
MachineRegister MSA22("MSA22");
MachineRegister MSA23("MSA23");
MachineRegister MSA24("MSA24");
MachineRegister MSA25("MSA25");
MachineRegister MSA26("MSA26");
MachineRegister MSA27("MSA27");
MachineRegister MSA28("MSA28");
MachineRegister MSA29("MSA29");
MachineRegister MSA30("MSA30");
MachineRegister MSA31("MSA31");
MachineRegister MSA8("MSA8");
MachineRegister MSA9("MSA9");
MachineRegister MSAAccess("MSAAccess");
MachineRegister MSACSR("MSACSR");
MachineRegister MSAIR("MSAIR");
MachineRegister MSAMap("MSAMap");
MachineRegister MSAModify("MSAModify");
MachineRegister MSARequest("MSARequest");
MachineRegister MSASave("MSASave");
MachineRegister MSAUnmap("MSAUnmap");
MachineRegister P0("P0");
MachineRegister P1("P1");
MachineRegister P2("P2");
MachineRegister PC("PC");
MachineRegister RA("RA");
MachineRegister RA_64("RA_64");
MachineRegister S0("S0");
MachineRegister S0_64("S0_64");
MachineRegister S1("S1");
MachineRegister S1_64("S1_64");
MachineRegister S2("S2");
MachineRegister S2_64("S2_64");
MachineRegister S3("S3");
MachineRegister S3_64("S3_64");
MachineRegister S4("S4");
MachineRegister S4_64("S4_64");
MachineRegister S5("S5");
MachineRegister S5_64("S5_64");
MachineRegister S6("S6");
MachineRegister S6_64("S6_64");
MachineRegister S7("S7");
MachineRegister S7_64("S7_64");
MachineRegister SP("SP");
MachineRegister SP_64("SP_64");
MachineRegister T0("T0");
MachineRegister T0_64("T0_64");
MachineRegister T1("T1");
MachineRegister T1_64("T1_64");
MachineRegister T2("T2");
MachineRegister T2_64("T2_64");
MachineRegister T3("T3");
MachineRegister T3_64("T3_64");
MachineRegister T4("T4");
MachineRegister T4_64("T4_64");
MachineRegister T5("T5");
MachineRegister T5_64("T5_64");
MachineRegister T6("T6");
MachineRegister T6_64("T6_64");
MachineRegister T7("T7");
MachineRegister T7_64("T7_64");
MachineRegister T8("T8");
MachineRegister T8_64("T8_64");
MachineRegister T9("T9");
MachineRegister T9_64("T9_64");
MachineRegister V0("V0");
MachineRegister V0_64("V0_64");
MachineRegister V1("V1");
MachineRegister V1_64("V1_64");
MachineRegister W0("W0");
MachineRegister W1("W1");
MachineRegister W10("W10");
MachineRegister W11("W11");
MachineRegister W12("W12");
MachineRegister W13("W13");
MachineRegister W14("W14");
MachineRegister W15("W15");
MachineRegister W16("W16");
MachineRegister W17("W17");
MachineRegister W18("W18");
MachineRegister W19("W19");
MachineRegister W2("W2");
MachineRegister W20("W20");
MachineRegister W21("W21");
MachineRegister W22("W22");
MachineRegister W23("W23");
MachineRegister W24("W24");
MachineRegister W25("W25");
MachineRegister W26("W26");
MachineRegister W27("W27");
MachineRegister W28("W28");
MachineRegister W29("W29");
MachineRegister W3("W3");
MachineRegister W30("W30");
MachineRegister W31("W31");
MachineRegister W4("W4");
MachineRegister W5("W5");
MachineRegister W6("W6");
MachineRegister W7("W7");
MachineRegister W8("W8");
MachineRegister W9("W9");
MachineRegister ZERO("ZERO");
MachineRegister ZERO_64("ZERO_64");



bool SimExe(MCInst &Inst){
  bool Res = false;
  switch (Inst.getOpcode()) {
    default:
      break;
    case Mips::ABSQ_S_PH:
      dbgs() << "ABSQ_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4045:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::ABSQ_S_PH_MM:
      dbgs() << "ABSQ_S_PH_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_w_chain:{} 4045:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::ABSQ_S_QB:
      dbgs() << "ABSQ_S_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4046:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::ABSQ_S_QB_MMR2:
      dbgs() << "ABSQ_S_QB_MMR2: 	(set DSPROpnd:{}:$rt, (intrinsic_w_chain:{} 4046:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::ABSQ_S_W:
      dbgs() << "ABSQ_S_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4047:{}, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ABSQ_S_W_MM:
      dbgs() << "ABSQ_S_W_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_w_chain:{} 4047:{}, GPR32Opnd:{}:$rs))";
      break;
    case Mips::ADDIU_MMR6:
      dbgs() << "ADDIU_MMR6: 	(set GPR32Opnd:{}:$rt, (add:{} GPR32Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::ADDQH_PH:
      dbgs() << "ADDQH_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4055:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDQH_PH_MMR2:
      dbgs() << "ADDQH_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4055:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDQH_R_PH:
      dbgs() << "ADDQH_R_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4056:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDQH_R_PH_MMR2:
      dbgs() << "ADDQH_R_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4056:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDQH_R_W:
      dbgs() << "ADDQH_R_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4057:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDQH_R_W_MMR2:
      dbgs() << "ADDQH_R_W_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4057:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDQH_W:
      dbgs() << "ADDQH_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4058:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDQH_W_MMR2:
      dbgs() << "ADDQH_W_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4058:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDQ_S_PH:
      dbgs() << "ADDQ_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4053:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDQ_S_PH_MM:
      dbgs() << "ADDQ_S_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4053:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDQ_S_W:
      dbgs() << "ADDQ_S_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4054:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDQ_S_W_MM:
      dbgs() << "ADDQ_S_W_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4054:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDS_A_B:
      dbgs() << "ADDS_A_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4059:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ADDS_A_D:
      dbgs() << "ADDS_A_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4060:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ADDS_A_H:
      dbgs() << "ADDS_A_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4061:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ADDS_A_W:
      dbgs() << "ADDS_A_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4062:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ADDS_S_B:
      dbgs() << "ADDS_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4063:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ADDS_S_D:
      dbgs() << "ADDS_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4064:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ADDS_S_H:
      dbgs() << "ADDS_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4065:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ADDS_S_W:
      dbgs() << "ADDS_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4066:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ADDS_U_B:
      dbgs() << "ADDS_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4067:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ADDS_U_D:
      dbgs() << "ADDS_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4068:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ADDS_U_H:
      dbgs() << "ADDS_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4069:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ADDS_U_W:
      dbgs() << "ADDS_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4070:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ADDU16_MM:
      dbgs() << "ADDU16_MM: 	(set GPRMM16Opnd:{}:$rd, (add:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::ADDU16_MMR6:
      dbgs() << "ADDU16_MMR6: 	(set GPRMM16Opnd:{}:$rd, (add:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::ADDUH_QB:
      dbgs() << "ADDUH_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4076:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDUH_QB_MMR2:
      dbgs() << "ADDUH_QB_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4076:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDUH_R_QB:
      dbgs() << "ADDUH_R_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4077:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDUH_R_QB_MMR2:
      dbgs() << "ADDUH_R_QB_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4077:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDU_PH:
      dbgs() << "ADDU_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4072:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDU_PH_MMR2:
      dbgs() << "ADDU_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4072:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDU_S_PH:
      dbgs() << "ADDU_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4074:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDU_S_PH_MMR2:
      dbgs() << "ADDU_S_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4074:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDU_S_QB:
      dbgs() << "ADDU_S_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4075:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDU_S_QB_MM:
      dbgs() << "ADDU_S_QB_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4075:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::ADDVI_B:
      dbgs() << "ADDVI_B: 	(set MSA128BOpnd:{}:$wd, (add:{} MSA128BOpnd:{}:$ws, vsplati8_uimm5:{}:$imm))";
      break;
    case Mips::ADDVI_D:
      dbgs() << "ADDVI_D: 	(set MSA128DOpnd:{}:$wd, (add:{} MSA128DOpnd:{}:$ws, vsplati64_uimm5:{}:$imm))";
      break;
    case Mips::ADDVI_H:
      dbgs() << "ADDVI_H: 	(set MSA128HOpnd:{}:$wd, (add:{} MSA128HOpnd:{}:$ws, vsplati16_uimm5:{}:$imm))";
      break;
    case Mips::ADDVI_W:
      dbgs() << "ADDVI_W: 	(set MSA128WOpnd:{}:$wd, (add:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$imm))";
      break;
    case Mips::ADDV_B:
      dbgs() << "ADDV_B: 	(set MSA128BOpnd:{}:$wd, (add:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ADDV_D:
      dbgs() << "ADDV_D: 	(set MSA128DOpnd:{}:$wd, (add:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ADDV_H:
      dbgs() << "ADDV_H: 	(set MSA128HOpnd:{}:$wd, (add:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ADDV_W:
      dbgs() << "ADDV_W: 	(set MSA128WOpnd:{}:$wd, (add:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ADD_A_B:
      dbgs() << "ADD_A_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4048:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ADD_A_D:
      dbgs() << "ADD_A_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4049:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ADD_A_H:
      dbgs() << "ADD_A_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4050:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ADD_A_W:
      dbgs() << "ADD_A_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4051:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ADDiu:
      dbgs() << "ADDiu: 	(set GPR32Opnd:{}:$rt, (add:{} GPR32Opnd:{}:$rs, (imm32SExt16:{}):$imm16))";
      break;
    case Mips::ADDu:
      dbgs() << "ADDu: 	(set GPR32Opnd:{}:$rd, (add:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADDu_MM:
      dbgs() << "ADDu_MM: 	(set GPR32Opnd:{}:$rd, (add:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::ADJCALLSTACKDOWN:
      dbgs() << "ADJCALLSTACKDOWN: 	(callseq_start (timm:{}):$amt1, (timm:{}):$amt2)";
      break;
    case Mips::ADJCALLSTACKUP:
      dbgs() << "ADJCALLSTACKUP: 	(callseq_end (timm:{}):$amt1, (timm:{}):$amt2)";
      break;
    case Mips::AND:
      dbgs() << "AND: 	(set GPR32Opnd:{}:$rd, (and:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::AND16_MM:
      dbgs() << "AND16_MM: 	(set GPRMM16Opnd:{}:$dst, (and:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::AND64:
      dbgs() << "AND64: 	(set GPR64Opnd:{}:$rd, (and:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::ANDI_B:
      dbgs() << "ANDI_B: 	(set MSA128BOpnd:{}:$wd, (and:{} MSA128BOpnd:{}:$ws, vsplati8_uimm8:{}:$u8))";
      break;
    case Mips::AND_MM:
      dbgs() << "AND_MM: 	(set GPR32Opnd:{}:$rd, (and:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::AND_MMR6:
      dbgs() << "AND_MMR6: 	(set GPR32Opnd:{}:$rd, (and:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::AND_V:
      dbgs() << "AND_V: 	(set MSA128BOpnd:{}:$wd, (and:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::AND_V_D_PSEUDO:
      dbgs() << "AND_V_D_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (and:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::AND_V_H_PSEUDO:
      dbgs() << "AND_V_H_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (and:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::AND_V_W_PSEUDO:
      dbgs() << "AND_V_W_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (and:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ANDi:
      dbgs() << "ANDi: 	(set GPR32Opnd:{}:$rt, (and:{} GPR32Opnd:{}:$rs, (imm32ZExt16:{}):$imm16))";
      break;
    case Mips::ANDi64:
      dbgs() << "ANDi64: 	(set GPR64Opnd:{}:$rt, (and:{} GPR64Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;
    case Mips::APPEND:
      dbgs() << "APPEND: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4089:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::APPEND_MMR2:
      dbgs() << "APPEND_MMR2: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4089:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::ASUB_S_B:
      dbgs() << "ASUB_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4090:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ASUB_S_D:
      dbgs() << "ASUB_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4091:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ASUB_S_H:
      dbgs() << "ASUB_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4092:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ASUB_S_W:
      dbgs() << "ASUB_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4093:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ASUB_U_B:
      dbgs() << "ASUB_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4094:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ASUB_U_D:
      dbgs() << "ASUB_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4095:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ASUB_U_H:
      dbgs() << "ASUB_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4096:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ASUB_U_W:
      dbgs() << "ASUB_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4097:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ATOMIC_CMP_SWAP_I16:
      dbgs() << "ATOMIC_CMP_SWAP_I16: 	(set GPR32:{}:$dst, (atomic_cmp_swap_16:{} iPTR:{}:$ptr, GPR32:{}:$cmp, GPR32:{}:$swap))";
      break;
    case Mips::ATOMIC_CMP_SWAP_I32:
      dbgs() << "ATOMIC_CMP_SWAP_I32: 	(set GPR32:{}:$dst, (atomic_cmp_swap_32:{} iPTR:{}:$ptr, GPR32:{}:$cmp, GPR32:{}:$swap))";
      break;
    case Mips::ATOMIC_CMP_SWAP_I64:
      dbgs() << "ATOMIC_CMP_SWAP_I64: 	(set GPR64:{}:$dst, (atomic_cmp_swap_64:{} iPTR:{}:$ptr, GPR64:{}:$cmp, GPR64:{}:$swap))";
      break;
    case Mips::ATOMIC_CMP_SWAP_I8:
      dbgs() << "ATOMIC_CMP_SWAP_I8: 	(set GPR32:{}:$dst, (atomic_cmp_swap_8:{} iPTR:{}:$ptr, GPR32:{}:$cmp, GPR32:{}:$swap))";
      break;
    case Mips::ATOMIC_LOAD_ADD_I16:
      dbgs() << "ATOMIC_LOAD_ADD_I16: 	(set GPR32:{}:$dst, (atomic_load_add_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_ADD_I32:
      dbgs() << "ATOMIC_LOAD_ADD_I32: 	(set GPR32:{}:$dst, (atomic_load_add_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_ADD_I64:
      dbgs() << "ATOMIC_LOAD_ADD_I64: 	(set GPR64:{}:$dst, (atomic_load_add_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_ADD_I8:
      dbgs() << "ATOMIC_LOAD_ADD_I8: 	(set GPR32:{}:$dst, (atomic_load_add_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_AND_I16:
      dbgs() << "ATOMIC_LOAD_AND_I16: 	(set GPR32:{}:$dst, (atomic_load_and_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_AND_I32:
      dbgs() << "ATOMIC_LOAD_AND_I32: 	(set GPR32:{}:$dst, (atomic_load_and_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_AND_I64:
      dbgs() << "ATOMIC_LOAD_AND_I64: 	(set GPR64:{}:$dst, (atomic_load_and_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_AND_I8:
      dbgs() << "ATOMIC_LOAD_AND_I8: 	(set GPR32:{}:$dst, (atomic_load_and_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MAX_I16:
      dbgs() << "ATOMIC_LOAD_MAX_I16: 	(set GPR32:{}:$dst, (atomic_load_max_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MAX_I32:
      dbgs() << "ATOMIC_LOAD_MAX_I32: 	(set GPR32:{}:$dst, (atomic_load_max_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MAX_I64:
      dbgs() << "ATOMIC_LOAD_MAX_I64: 	(set GPR64:{}:$dst, (atomic_load_max_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MAX_I8:
      dbgs() << "ATOMIC_LOAD_MAX_I8: 	(set GPR32:{}:$dst, (atomic_load_max_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MIN_I16:
      dbgs() << "ATOMIC_LOAD_MIN_I16: 	(set GPR32:{}:$dst, (atomic_load_min_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MIN_I32:
      dbgs() << "ATOMIC_LOAD_MIN_I32: 	(set GPR32:{}:$dst, (atomic_load_min_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MIN_I64:
      dbgs() << "ATOMIC_LOAD_MIN_I64: 	(set GPR64:{}:$dst, (atomic_load_min_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_MIN_I8:
      dbgs() << "ATOMIC_LOAD_MIN_I8: 	(set GPR32:{}:$dst, (atomic_load_min_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_NAND_I16:
      dbgs() << "ATOMIC_LOAD_NAND_I16: 	(set GPR32:{}:$dst, (atomic_load_nand_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_NAND_I32:
      dbgs() << "ATOMIC_LOAD_NAND_I32: 	(set GPR32:{}:$dst, (atomic_load_nand_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_NAND_I64:
      dbgs() << "ATOMIC_LOAD_NAND_I64: 	(set GPR64:{}:$dst, (atomic_load_nand_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_NAND_I8:
      dbgs() << "ATOMIC_LOAD_NAND_I8: 	(set GPR32:{}:$dst, (atomic_load_nand_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_OR_I16:
      dbgs() << "ATOMIC_LOAD_OR_I16: 	(set GPR32:{}:$dst, (atomic_load_or_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_OR_I32:
      dbgs() << "ATOMIC_LOAD_OR_I32: 	(set GPR32:{}:$dst, (atomic_load_or_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_OR_I64:
      dbgs() << "ATOMIC_LOAD_OR_I64: 	(set GPR64:{}:$dst, (atomic_load_or_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_OR_I8:
      dbgs() << "ATOMIC_LOAD_OR_I8: 	(set GPR32:{}:$dst, (atomic_load_or_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_SUB_I16:
      dbgs() << "ATOMIC_LOAD_SUB_I16: 	(set GPR32:{}:$dst, (atomic_load_sub_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_SUB_I32:
      dbgs() << "ATOMIC_LOAD_SUB_I32: 	(set GPR32:{}:$dst, (atomic_load_sub_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_SUB_I64:
      dbgs() << "ATOMIC_LOAD_SUB_I64: 	(set GPR64:{}:$dst, (atomic_load_sub_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_SUB_I8:
      dbgs() << "ATOMIC_LOAD_SUB_I8: 	(set GPR32:{}:$dst, (atomic_load_sub_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMAX_I16:
      dbgs() << "ATOMIC_LOAD_UMAX_I16: 	(set GPR32:{}:$dst, (atomic_load_umax_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMAX_I32:
      dbgs() << "ATOMIC_LOAD_UMAX_I32: 	(set GPR32:{}:$dst, (atomic_load_umax_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMAX_I64:
      dbgs() << "ATOMIC_LOAD_UMAX_I64: 	(set GPR64:{}:$dst, (atomic_load_umax_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMAX_I8:
      dbgs() << "ATOMIC_LOAD_UMAX_I8: 	(set GPR32:{}:$dst, (atomic_load_umax_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMIN_I16:
      dbgs() << "ATOMIC_LOAD_UMIN_I16: 	(set GPR32:{}:$dst, (atomic_load_umin_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMIN_I32:
      dbgs() << "ATOMIC_LOAD_UMIN_I32: 	(set GPR32:{}:$dst, (atomic_load_umin_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMIN_I64:
      dbgs() << "ATOMIC_LOAD_UMIN_I64: 	(set GPR64:{}:$dst, (atomic_load_umin_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_UMIN_I8:
      dbgs() << "ATOMIC_LOAD_UMIN_I8: 	(set GPR32:{}:$dst, (atomic_load_umin_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_XOR_I16:
      dbgs() << "ATOMIC_LOAD_XOR_I16: 	(set GPR32:{}:$dst, (atomic_load_xor_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_XOR_I32:
      dbgs() << "ATOMIC_LOAD_XOR_I32: 	(set GPR32:{}:$dst, (atomic_load_xor_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_XOR_I64:
      dbgs() << "ATOMIC_LOAD_XOR_I64: 	(set GPR64:{}:$dst, (atomic_load_xor_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_LOAD_XOR_I8:
      dbgs() << "ATOMIC_LOAD_XOR_I8: 	(set GPR32:{}:$dst, (atomic_load_xor_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_SWAP_I16:
      dbgs() << "ATOMIC_SWAP_I16: 	(set GPR32:{}:$dst, (atomic_swap_16:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_SWAP_I32:
      dbgs() << "ATOMIC_SWAP_I32: 	(set GPR32:{}:$dst, (atomic_swap_32:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::ATOMIC_SWAP_I64:
      dbgs() << "ATOMIC_SWAP_I64: 	(set GPR64:{}:$dst, (atomic_swap_64:{} iPTR:{}:$ptr, GPR64:{}:$incr))";
      break;
    case Mips::ATOMIC_SWAP_I8:
      dbgs() << "ATOMIC_SWAP_I8: 	(set GPR32:{}:$dst, (atomic_swap_8:{} iPTR:{}:$ptr, GPR32:{}:$incr))";
      break;
    case Mips::AVER_S_B:
      dbgs() << "AVER_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4106:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::AVER_S_D:
      dbgs() << "AVER_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4107:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::AVER_S_H:
      dbgs() << "AVER_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4108:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::AVER_S_W:
      dbgs() << "AVER_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4109:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::AVER_U_B:
      dbgs() << "AVER_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4110:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::AVER_U_D:
      dbgs() << "AVER_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4111:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::AVER_U_H:
      dbgs() << "AVER_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4112:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::AVER_U_W:
      dbgs() << "AVER_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4113:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::AVE_S_B:
      dbgs() << "AVE_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4098:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::AVE_S_D:
      dbgs() << "AVE_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4099:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::AVE_S_H:
      dbgs() << "AVE_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4100:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::AVE_S_W:
      dbgs() << "AVE_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4101:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::AVE_U_B:
      dbgs() << "AVE_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4102:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::AVE_U_D:
      dbgs() << "AVE_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4103:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::AVE_U_H:
      dbgs() << "AVE_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4104:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::AVE_U_W:
      dbgs() << "AVE_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4105:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::B:
      dbgs() << "B: 	(br (bb:{}):$offset)";
      break;
    case Mips::BADDu:
      dbgs() << "BADDu: 	(set GPR64Opnd:{}:$rd, (and:{} (add:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt), 255:{}))";
      break;
    case Mips::BALIGN:
      dbgs() << "BALIGN: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4114:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt2:{}):$sa))";
      break;
    case Mips::BALIGN_MMR2:
      dbgs() << "BALIGN_MMR2: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4114:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (immZExt2:{}):$bp))";
      break;
    case Mips::BBIT0:
      dbgs() << "BBIT0: 	(brcond (seteq:{ *:[i32] } (and:{} GPR64Opnd:{}:$rs, (shl:{} 1:{}, (immZExt5_64:{}):$p)), 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BBIT032:
      dbgs() << "BBIT032: 	(brcond (seteq:{ *:[i32] } (and:{} GPR64Opnd:{}:$rs, (shl:{} 4294967296:{}, (immZExt5_64:{}):$p)), 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BBIT1:
      dbgs() << "BBIT1: 	(brcond (setne:{ *:[i32] } (and:{} GPR64Opnd:{}:$rs, (shl:{} 1:{}, (immZExt5_64:{}):$p)), 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BBIT132:
      dbgs() << "BBIT132: 	(brcond (setne:{ *:[i32] } (and:{} GPR64Opnd:{}:$rs, (shl:{} 4294967296:{}, (immZExt5_64:{}):$p)), 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BC1F:
      dbgs() << "BC1F: 	(MipsFPBrcond (MIPS_BRANCH_F:{}), FCCRegsOpnd:{}:$fcc, (bb:{}):$offset)";
      break;
    case Mips::BC1F_MM:
      dbgs() << "BC1F_MM: 	(MipsFPBrcond (MIPS_BRANCH_F:{}), FCCRegsOpnd:{}:$fcc, (bb:{}):$offset)";
      break;
    case Mips::BC1T:
      dbgs() << "BC1T: 	(MipsFPBrcond (MIPS_BRANCH_T:{}), FCCRegsOpnd:{}:$fcc, (bb:{}):$offset)";
      break;
    case Mips::BC1T_MM:
      dbgs() << "BC1T_MM: 	(MipsFPBrcond (MIPS_BRANCH_T:{}), FCCRegsOpnd:{}:$fcc, (bb:{}):$offset)";
      break;
    case Mips::BCLRI_B:
      dbgs() << "BCLRI_B: 	(set MSA128BOpnd:{}:$wd, (and:{} MSA128BOpnd:{}:$ws, vsplat_uimm_inv_pow2:{}:$m))";
      break;
    case Mips::BCLRI_D:
      dbgs() << "BCLRI_D: 	(set MSA128DOpnd:{}:$wd, (and:{} MSA128DOpnd:{}:$ws, vsplat_uimm_inv_pow2:{}:$m))";
      break;
    case Mips::BCLRI_H:
      dbgs() << "BCLRI_H: 	(set MSA128HOpnd:{}:$wd, (and:{} MSA128HOpnd:{}:$ws, vsplat_uimm_inv_pow2:{}:$m))";
      break;
    case Mips::BCLRI_W:
      dbgs() << "BCLRI_W: 	(set MSA128WOpnd:{}:$wd, (and:{} MSA128WOpnd:{}:$ws, vsplat_uimm_inv_pow2:{}:$m))";
      break;
    case Mips::BCLR_B:
      dbgs() << "BCLR_B: 	(set MSA128BOpnd:{}:$wd, (vbclr_b:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::BCLR_D:
      dbgs() << "BCLR_D: 	(set MSA128DOpnd:{}:$wd, (vbclr_d:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::BCLR_H:
      dbgs() << "BCLR_H: 	(set MSA128HOpnd:{}:$wd, (vbclr_h:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::BCLR_W:
      dbgs() << "BCLR_W: 	(set MSA128WOpnd:{}:$wd, (vbclr_w:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::BC_MMR6:
      dbgs() << "BC_MMR6: 	(br (bb:{}):$offset)";
      break;
    case Mips::BEQ:
      dbgs() << "BEQ: 	(brcond (seteq:{ *:[i32] } GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt), (bb:{}):$offset)";
      break;
    case Mips::BEQ64:
      dbgs() << "BEQ64: 	(brcond (seteq:{ *:[i32] } GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt), (bb:{}):$offset)";
      break;
    case Mips::BEQ_MM:
      dbgs() << "BEQ_MM: 	(brcond (seteq:{ *:[i32] } GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt), (bb:{}):$offset)";
      break;
    case Mips::BGEZ:
      dbgs() << "BGEZ: 	(brcond (setge:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BGEZ64:
      dbgs() << "BGEZ64: 	(brcond (setge:{ *:[i32] } GPR64Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BGEZ_MM:
      dbgs() << "BGEZ_MM: 	(brcond (setge:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BGTZ:
      dbgs() << "BGTZ: 	(brcond (setgt:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BGTZ64:
      dbgs() << "BGTZ64: 	(brcond (setgt:{ *:[i32] } GPR64Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BGTZ_MM:
      dbgs() << "BGTZ_MM: 	(brcond (setgt:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BINSLI_B:
      dbgs() << "BINSLI_B: 	(set MSA128BOpnd:{}:$wd, (vselect:{} vsplat_maskl_bits_uimm3:{ *:[v16i8] }:$m, MSA128BOpnd:{ *:[v16i8] }:$ws, MSA128BOpnd:{}:$wd_in))";
      break;
    case Mips::BINSLI_D:
      dbgs() << "BINSLI_D: 	(set MSA128DOpnd:{}:$wd, (vselect:{} vsplat_maskl_bits_uimm6:{ *:[v2i64] }:$m, MSA128DOpnd:{ *:[v2i64] }:$ws, MSA128DOpnd:{}:$wd_in))";
      break;
    case Mips::BINSLI_H:
      dbgs() << "BINSLI_H: 	(set MSA128HOpnd:{}:$wd, (vselect:{} vsplat_maskl_bits_uimm4:{ *:[v8i16] }:$m, MSA128HOpnd:{ *:[v8i16] }:$ws, MSA128HOpnd:{}:$wd_in))";
      break;
    case Mips::BINSLI_W:
      dbgs() << "BINSLI_W: 	(set MSA128WOpnd:{}:$wd, (vselect:{} vsplat_maskl_bits_uimm5:{ *:[v4i32] }:$m, MSA128WOpnd:{ *:[v4i32] }:$ws, MSA128WOpnd:{}:$wd_in))";
      break;
    case Mips::BINSL_B:
      dbgs() << "BINSL_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4123:{}, MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::BINSL_D:
      dbgs() << "BINSL_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4124:{}, MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::BINSL_H:
      dbgs() << "BINSL_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4125:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::BINSL_W:
      dbgs() << "BINSL_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4126:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::BINSRI_B:
      dbgs() << "BINSRI_B: 	(set MSA128BOpnd:{}:$wd, (vselect:{} vsplat_maskr_bits_uimm3:{ *:[v16i8] }:$m, MSA128BOpnd:{ *:[v16i8] }:$ws, MSA128BOpnd:{}:$wd_in))";
      break;
    case Mips::BINSRI_D:
      dbgs() << "BINSRI_D: 	(set MSA128DOpnd:{}:$wd, (vselect:{} vsplat_maskr_bits_uimm6:{ *:[v2i64] }:$m, MSA128DOpnd:{ *:[v2i64] }:$ws, MSA128DOpnd:{}:$wd_in))";
      break;
    case Mips::BINSRI_H:
      dbgs() << "BINSRI_H: 	(set MSA128HOpnd:{}:$wd, (vselect:{} vsplat_maskr_bits_uimm4:{ *:[v8i16] }:$m, MSA128HOpnd:{ *:[v8i16] }:$ws, MSA128HOpnd:{}:$wd_in))";
      break;
    case Mips::BINSRI_W:
      dbgs() << "BINSRI_W: 	(set MSA128WOpnd:{}:$wd, (vselect:{} vsplat_maskr_bits_uimm5:{ *:[v4i32] }:$m, MSA128WOpnd:{ *:[v4i32] }:$ws, MSA128WOpnd:{}:$wd_in))";
      break;
    case Mips::BINSR_B:
      dbgs() << "BINSR_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4131:{}, MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::BINSR_D:
      dbgs() << "BINSR_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4132:{}, MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::BINSR_H:
      dbgs() << "BINSR_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4133:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::BINSR_W:
      dbgs() << "BINSR_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4134:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::BITREV:
      dbgs() << "BITREV: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4139:{}, GPR32Opnd:{}:$rt))";
      break;
    case Mips::BITREV_MM:
      dbgs() << "BITREV_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4139:{}, GPR32Opnd:{}:$rs))";
      break;
    case Mips::BLEZ:
      dbgs() << "BLEZ: 	(brcond (setle:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BLEZ64:
      dbgs() << "BLEZ64: 	(brcond (setle:{ *:[i32] } GPR64Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BLEZ_MM:
      dbgs() << "BLEZ_MM: 	(brcond (setle:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BLTZ:
      dbgs() << "BLTZ: 	(brcond (setlt:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BLTZ64:
      dbgs() << "BLTZ64: 	(brcond (setlt:{ *:[i32] } GPR64Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BLTZ_MM:
      dbgs() << "BLTZ_MM: 	(brcond (setlt:{ *:[i32] } GPR32Opnd:{}:$rs, 0:{}), (bb:{}):$offset)";
      break;
    case Mips::BMNZI_B:
      dbgs() << "BMNZI_B: 	(set MSA128BOpnd:{}:$wd, (vselect:{} vsplati8_uimm8:{}:$u8, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wd_in))";
      break;
    case Mips::BMNZ_V:
      dbgs() << "BMNZ_V: 	(set MSA128BOpnd:{}:$wd, (vselect:{} MSA128BOpnd:{}:$wt, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wd_in))";
      break;
    case Mips::BMZI_B:
      dbgs() << "BMZI_B: 	(set MSA128BOpnd:{}:$wd, (vselect:{} vsplati8_uimm8:{}:$u8, MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::BMZ_V:
      dbgs() << "BMZ_V: 	(set MSA128BOpnd:{}:$wd, (vselect:{} MSA128BOpnd:{}:$wt, MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::BNE:
      dbgs() << "BNE: 	(brcond (setne:{ *:[i32] } GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt), (bb:{}):$offset)";
      break;
    case Mips::BNE64:
      dbgs() << "BNE64: 	(brcond (setne:{ *:[i32] } GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt), (bb:{}):$offset)";
      break;
    case Mips::BNEGI_B:
      dbgs() << "BNEGI_B: 	(set MSA128BOpnd:{}:$wd, (xor:{} MSA128BOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BNEGI_D:
      dbgs() << "BNEGI_D: 	(set MSA128DOpnd:{}:$wd, (xor:{} MSA128DOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BNEGI_H:
      dbgs() << "BNEGI_H: 	(set MSA128HOpnd:{}:$wd, (xor:{} MSA128HOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BNEGI_W:
      dbgs() << "BNEGI_W: 	(set MSA128WOpnd:{}:$wd, (xor:{} MSA128WOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BNEG_B:
      dbgs() << "BNEG_B: 	(set MSA128BOpnd:{}:$wd, (vbneg_b:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::BNEG_D:
      dbgs() << "BNEG_D: 	(set MSA128DOpnd:{}:$wd, (vbneg_d:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::BNEG_H:
      dbgs() << "BNEG_H: 	(set MSA128HOpnd:{}:$wd, (vbneg_h:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::BNEG_W:
      dbgs() << "BNEG_W: 	(set MSA128WOpnd:{}:$wd, (vbneg_w:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::BNE_MM:
      dbgs() << "BNE_MM: 	(brcond (setne:{ *:[i32] } GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt), (bb:{}):$offset)";
      break;
    case Mips::BPOSGE32_PSEUDO:
      dbgs() << "BPOSGE32_PSEUDO: 	(set GPR32Opnd:{}:$dst, (intrinsic_w_chain:{} 4157:{}))";
      break;
    case Mips::BSELI_B:
      dbgs() << "BSELI_B: 	(set MSA128BOpnd:{}:$wd, (vselect:{} MSA128BOpnd:{}:$wd_in, vsplati8_uimm8:{}:$u8, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::BSEL_D_PSEUDO:
      dbgs() << "BSEL_D_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vselect:{ *:[v2i64] } MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$wt, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::BSEL_FD_PSEUDO:
      dbgs() << "BSEL_FD_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vselect:{ *:[v2f64] } MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$wt, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::BSEL_FW_PSEUDO:
      dbgs() << "BSEL_FW_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vselect:{ *:[v4f32] } MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$wt, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::BSEL_H_PSEUDO:
      dbgs() << "BSEL_H_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (vselect:{ *:[v8i16] } MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$wt, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::BSEL_V:
      dbgs() << "BSEL_V: 	(set MSA128BOpnd:{}:$wd, (vselect:{} MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$wt, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::BSEL_W_PSEUDO:
      dbgs() << "BSEL_W_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vselect:{ *:[v4i32] } MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$wt, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::BSETI_B:
      dbgs() << "BSETI_B: 	(set MSA128BOpnd:{}:$wd, (or:{} MSA128BOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BSETI_D:
      dbgs() << "BSETI_D: 	(set MSA128DOpnd:{}:$wd, (or:{} MSA128DOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BSETI_H:
      dbgs() << "BSETI_H: 	(set MSA128HOpnd:{}:$wd, (or:{} MSA128HOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BSETI_W:
      dbgs() << "BSETI_W: 	(set MSA128WOpnd:{}:$wd, (or:{} MSA128WOpnd:{}:$ws, vsplat_uimm_pow2:{}:$m))";
      break;
    case Mips::BSET_B:
      dbgs() << "BSET_B: 	(set MSA128BOpnd:{}:$wd, (vbset_b:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::BSET_D:
      dbgs() << "BSET_D: 	(set MSA128DOpnd:{}:$wd, (vbset_d:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::BSET_H:
      dbgs() << "BSET_H: 	(set MSA128HOpnd:{}:$wd, (vbset_h:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::BSET_W:
      dbgs() << "BSET_W: 	(set MSA128WOpnd:{}:$wd, (vbset_w:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::B_MM:
      dbgs() << "B_MM: 	(br (bb:{}):$offset)";
      break;
    case Mips::BuildPairF64:
      dbgs() << "BuildPairF64: 	(set AFGR64Opnd:{}:$dst, (MipsBuildPairF64:{} GPR32Opnd:{}:$lo, GPR32Opnd:{}:$hi))";
      break;
    case Mips::BuildPairF64_64:
      dbgs() << "BuildPairF64_64: 	(set FGR64Opnd:{}:$dst, (MipsBuildPairF64:{} GPR32Opnd:{}:$lo, GPR32Opnd:{}:$hi))";
      break;
    case Mips::CEQI_B:
      dbgs() << "CEQI_B: 	(set MSA128BOpnd:{}:$wd, (vseteq_v16i8:{} MSA128BOpnd:{}:$ws, vsplati8_simm5:{}:$imm))";
      break;
    case Mips::CEQI_D:
      dbgs() << "CEQI_D: 	(set MSA128DOpnd:{}:$wd, (vseteq_v2i64:{} MSA128DOpnd:{}:$ws, vsplati64_simm5:{}:$imm))";
      break;
    case Mips::CEQI_H:
      dbgs() << "CEQI_H: 	(set MSA128HOpnd:{}:$wd, (vseteq_v8i16:{} MSA128HOpnd:{}:$ws, vsplati16_simm5:{}:$imm))";
      break;
    case Mips::CEQI_W:
      dbgs() << "CEQI_W: 	(set MSA128WOpnd:{}:$wd, (vseteq_v4i32:{} MSA128WOpnd:{}:$ws, vsplati32_simm5:{}:$imm))";
      break;
    case Mips::CEQ_B:
      dbgs() << "CEQ_B: 	(set MSA128BOpnd:{}:$wd, (vseteq_v16i8:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::CEQ_D:
      dbgs() << "CEQ_D: 	(set MSA128DOpnd:{}:$wd, (vseteq_v2i64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::CEQ_H:
      dbgs() << "CEQ_H: 	(set MSA128HOpnd:{}:$wd, (vseteq_v8i16:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::CEQ_W:
      dbgs() << "CEQ_W: 	(set MSA128WOpnd:{}:$wd, (vseteq_v4i32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::CINS:
      dbgs() << "CINS: 	(set GPR64Opnd:{}:$rt, (MipsCIns:{} GPR64Opnd:{}:$rs, (immZExt5:{}):$pos, (imm:{}):$lenm1))";
      break;
    case Mips::CINS32:
      dbgs() << "CINS32: 	(set GPR64Opnd:{}:$rt, (MipsCIns:{} GPR64Opnd:{}:$rs, (immZExt5Plus32:{}):$pos, (imm:{}):$lenm1))";
      break;
    case Mips::CINS_i32:
      dbgs() << "CINS_i32: 	(set GPR32Opnd:{}:$rt, (MipsCIns:{} GPR32Opnd:{}:$rs, (immZExt5:{}):$pos, (imm:{}):$lenm1))";
      break;
    case Mips::CLEI_S_B:
      dbgs() << "CLEI_S_B: 	(set MSA128BOpnd:{}:$wd, (vsetle_v16i8:{} MSA128BOpnd:{}:$ws, vsplati8_simm5:{}:$imm))";
      break;
    case Mips::CLEI_S_D:
      dbgs() << "CLEI_S_D: 	(set MSA128DOpnd:{}:$wd, (vsetle_v2i64:{} MSA128DOpnd:{}:$ws, vsplati64_simm5:{}:$imm))";
      break;
    case Mips::CLEI_S_H:
      dbgs() << "CLEI_S_H: 	(set MSA128HOpnd:{}:$wd, (vsetle_v8i16:{} MSA128HOpnd:{}:$ws, vsplati16_simm5:{}:$imm))";
      break;
    case Mips::CLEI_S_W:
      dbgs() << "CLEI_S_W: 	(set MSA128WOpnd:{}:$wd, (vsetle_v4i32:{} MSA128WOpnd:{}:$ws, vsplati32_simm5:{}:$imm))";
      break;
    case Mips::CLEI_U_B:
      dbgs() << "CLEI_U_B: 	(set MSA128BOpnd:{}:$wd, (vsetule_v16i8:{} MSA128BOpnd:{}:$ws, vsplati8_uimm5:{}:$imm))";
      break;
    case Mips::CLEI_U_D:
      dbgs() << "CLEI_U_D: 	(set MSA128DOpnd:{}:$wd, (vsetule_v2i64:{} MSA128DOpnd:{}:$ws, vsplati64_uimm5:{}:$imm))";
      break;
    case Mips::CLEI_U_H:
      dbgs() << "CLEI_U_H: 	(set MSA128HOpnd:{}:$wd, (vsetule_v8i16:{} MSA128HOpnd:{}:$ws, vsplati16_uimm5:{}:$imm))";
      break;
    case Mips::CLEI_U_W:
      dbgs() << "CLEI_U_W: 	(set MSA128WOpnd:{}:$wd, (vsetule_v4i32:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$imm))";
      break;
    case Mips::CLE_S_B:
      dbgs() << "CLE_S_B: 	(set MSA128BOpnd:{}:$wd, (vsetle_v16i8:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::CLE_S_D:
      dbgs() << "CLE_S_D: 	(set MSA128DOpnd:{}:$wd, (vsetle_v2i64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::CLE_S_H:
      dbgs() << "CLE_S_H: 	(set MSA128HOpnd:{}:$wd, (vsetle_v8i16:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::CLE_S_W:
      dbgs() << "CLE_S_W: 	(set MSA128WOpnd:{}:$wd, (vsetle_v4i32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::CLE_U_B:
      dbgs() << "CLE_U_B: 	(set MSA128BOpnd:{}:$wd, (vsetule_v16i8:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::CLE_U_D:
      dbgs() << "CLE_U_D: 	(set MSA128DOpnd:{}:$wd, (vsetule_v2i64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::CLE_U_H:
      dbgs() << "CLE_U_H: 	(set MSA128HOpnd:{}:$wd, (vsetule_v8i16:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::CLE_U_W:
      dbgs() << "CLE_U_W: 	(set MSA128WOpnd:{}:$wd, (vsetule_v4i32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::CLO:
      dbgs() << "CLO: 	(set GPR32Opnd:{}:$rd, (ctlz:{} (not:{} GPR32Opnd:{}:$rs)))";
      break;
    case Mips::CLO_MM:
      dbgs() << "CLO_MM: 	(set GPR32Opnd:{}:$rd, (ctlz:{} (not:{} GPR32Opnd:{}:$rs)))";
      break;
    case Mips::CLO_R6:
      dbgs() << "CLO_R6: 	(set GPR32Opnd:{}:$rd, (ctlz:{} (not:{} GPR32Opnd:{}:$rs)))";
      break;
    case Mips::CLTI_S_B:
      dbgs() << "CLTI_S_B: 	(set MSA128BOpnd:{}:$wd, (vsetlt_v16i8:{} MSA128BOpnd:{}:$ws, vsplati8_simm5:{}:$imm))";
      break;
    case Mips::CLTI_S_D:
      dbgs() << "CLTI_S_D: 	(set MSA128DOpnd:{}:$wd, (vsetlt_v2i64:{} MSA128DOpnd:{}:$ws, vsplati64_simm5:{}:$imm))";
      break;
    case Mips::CLTI_S_H:
      dbgs() << "CLTI_S_H: 	(set MSA128HOpnd:{}:$wd, (vsetlt_v8i16:{} MSA128HOpnd:{}:$ws, vsplati16_simm5:{}:$imm))";
      break;
    case Mips::CLTI_S_W:
      dbgs() << "CLTI_S_W: 	(set MSA128WOpnd:{}:$wd, (vsetlt_v4i32:{} MSA128WOpnd:{}:$ws, vsplati32_simm5:{}:$imm))";
      break;
    case Mips::CLTI_U_B:
      dbgs() << "CLTI_U_B: 	(set MSA128BOpnd:{}:$wd, (vsetult_v16i8:{} MSA128BOpnd:{}:$ws, vsplati8_uimm5:{}:$imm))";
      break;
    case Mips::CLTI_U_D:
      dbgs() << "CLTI_U_D: 	(set MSA128DOpnd:{}:$wd, (vsetult_v2i64:{} MSA128DOpnd:{}:$ws, vsplati64_uimm5:{}:$imm))";
      break;
    case Mips::CLTI_U_H:
      dbgs() << "CLTI_U_H: 	(set MSA128HOpnd:{}:$wd, (vsetult_v8i16:{} MSA128HOpnd:{}:$ws, vsplati16_uimm5:{}:$imm))";
      break;
    case Mips::CLTI_U_W:
      dbgs() << "CLTI_U_W: 	(set MSA128WOpnd:{}:$wd, (vsetult_v4i32:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$imm))";
      break;
    case Mips::CLT_S_B:
      dbgs() << "CLT_S_B: 	(set MSA128BOpnd:{}:$wd, (vsetlt_v16i8:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::CLT_S_D:
      dbgs() << "CLT_S_D: 	(set MSA128DOpnd:{}:$wd, (vsetlt_v2i64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::CLT_S_H:
      dbgs() << "CLT_S_H: 	(set MSA128HOpnd:{}:$wd, (vsetlt_v8i16:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::CLT_S_W:
      dbgs() << "CLT_S_W: 	(set MSA128WOpnd:{}:$wd, (vsetlt_v4i32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::CLT_U_B:
      dbgs() << "CLT_U_B: 	(set MSA128BOpnd:{}:$wd, (vsetult_v16i8:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::CLT_U_D:
      dbgs() << "CLT_U_D: 	(set MSA128DOpnd:{}:$wd, (vsetult_v2i64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::CLT_U_H:
      dbgs() << "CLT_U_H: 	(set MSA128HOpnd:{}:$wd, (vsetult_v8i16:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::CLT_U_W:
      dbgs() << "CLT_U_W: 	(set MSA128WOpnd:{}:$wd, (vsetult_v4i32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::CLZ:
      dbgs() << "CLZ: 	(set GPR32Opnd:{}:$rd, (ctlz:{} GPR32Opnd:{}:$rs))";
      break;
    case Mips::CLZ_MM:
      dbgs() << "CLZ_MM: 	(set GPR32Opnd:{}:$rd, (ctlz:{} GPR32Opnd:{}:$rs))";
      break;
    case Mips::CLZ_R6:
      dbgs() << "CLZ_R6: 	(set GPR32Opnd:{}:$rd, (ctlz:{} GPR32Opnd:{}:$rs))";
      break;
    case Mips::CMPGDU_EQ_QB:
      dbgs() << "CMPGDU_EQ_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4217:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGDU_EQ_QB_MMR2:
      dbgs() << "CMPGDU_EQ_QB_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4217:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGDU_LE_QB:
      dbgs() << "CMPGDU_LE_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4218:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGDU_LE_QB_MMR2:
      dbgs() << "CMPGDU_LE_QB_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4218:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGDU_LT_QB:
      dbgs() << "CMPGDU_LT_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4219:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGDU_LT_QB_MMR2:
      dbgs() << "CMPGDU_LT_QB_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4219:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGU_EQ_QB:
      dbgs() << "CMPGU_EQ_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4220:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGU_EQ_QB_MM:
      dbgs() << "CMPGU_EQ_QB_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4220:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGU_LE_QB:
      dbgs() << "CMPGU_LE_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4221:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGU_LE_QB_MM:
      dbgs() << "CMPGU_LE_QB_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4221:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGU_LT_QB:
      dbgs() << "CMPGU_LT_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4222:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPGU_LT_QB_MM:
      dbgs() << "CMPGU_LT_QB_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4222:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::CMPU_EQ_QB:
      dbgs() << "CMPU_EQ_QB: 	(intrinsic_void 4223:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMPU_EQ_QB_MM:
      dbgs() << "CMPU_EQ_QB_MM: 	(intrinsic_void 4223:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMPU_LE_QB:
      dbgs() << "CMPU_LE_QB: 	(intrinsic_void 4224:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMPU_LE_QB_MM:
      dbgs() << "CMPU_LE_QB_MM: 	(intrinsic_void 4224:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMPU_LT_QB:
      dbgs() << "CMPU_LT_QB: 	(intrinsic_void 4225:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMPU_LT_QB_MM:
      dbgs() << "CMPU_LT_QB_MM: 	(intrinsic_void 4225:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_EQ_D:
      dbgs() << "CMP_EQ_D: 	(set FGRCCOpnd:{}:$fd, (setoeq:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_EQ_D_MMR6:
      dbgs() << "CMP_EQ_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setoeq:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_EQ_PH:
      dbgs() << "CMP_EQ_PH: 	(intrinsic_void 4214:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_EQ_PH_MM:
      dbgs() << "CMP_EQ_PH_MM: 	(intrinsic_void 4214:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_EQ_S:
      dbgs() << "CMP_EQ_S: 	(set FGRCCOpnd:{}:$fd, (setoeq:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_EQ_S_MMR6:
      dbgs() << "CMP_EQ_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setoeq:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_LE_D:
      dbgs() << "CMP_LE_D: 	(set FGRCCOpnd:{}:$fd, (setole:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_LE_D_MMR6:
      dbgs() << "CMP_LE_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setole:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_LE_PH:
      dbgs() << "CMP_LE_PH: 	(intrinsic_void 4215:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_LE_PH_MM:
      dbgs() << "CMP_LE_PH_MM: 	(intrinsic_void 4215:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_LE_S:
      dbgs() << "CMP_LE_S: 	(set FGRCCOpnd:{}:$fd, (setole:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_LE_S_MMR6:
      dbgs() << "CMP_LE_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setole:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_LT_D:
      dbgs() << "CMP_LT_D: 	(set FGRCCOpnd:{}:$fd, (setolt:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_LT_D_MMR6:
      dbgs() << "CMP_LT_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setolt:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_LT_PH:
      dbgs() << "CMP_LT_PH: 	(intrinsic_void 4216:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_LT_PH_MM:
      dbgs() << "CMP_LT_PH_MM: 	(intrinsic_void 4216:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt)";
      break;
    case Mips::CMP_LT_S:
      dbgs() << "CMP_LT_S: 	(set FGRCCOpnd:{}:$fd, (setolt:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_LT_S_MMR6:
      dbgs() << "CMP_LT_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setolt:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_UEQ_D:
      dbgs() << "CMP_UEQ_D: 	(set FGRCCOpnd:{}:$fd, (setueq:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_UEQ_D_MMR6:
      dbgs() << "CMP_UEQ_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setueq:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_UEQ_S:
      dbgs() << "CMP_UEQ_S: 	(set FGRCCOpnd:{}:$fd, (setueq:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_UEQ_S_MMR6:
      dbgs() << "CMP_UEQ_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setueq:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULE_D:
      dbgs() << "CMP_ULE_D: 	(set FGRCCOpnd:{}:$fd, (setule:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULE_D_MMR6:
      dbgs() << "CMP_ULE_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setule:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULE_S:
      dbgs() << "CMP_ULE_S: 	(set FGRCCOpnd:{}:$fd, (setule:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULE_S_MMR6:
      dbgs() << "CMP_ULE_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setule:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULT_D:
      dbgs() << "CMP_ULT_D: 	(set FGRCCOpnd:{}:$fd, (setult:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULT_D_MMR6:
      dbgs() << "CMP_ULT_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setult:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULT_S:
      dbgs() << "CMP_ULT_S: 	(set FGRCCOpnd:{}:$fd, (setult:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_ULT_S_MMR6:
      dbgs() << "CMP_ULT_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setult:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_UN_D:
      dbgs() << "CMP_UN_D: 	(set FGRCCOpnd:{}:$fd, (setuo:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_UN_D_MMR6:
      dbgs() << "CMP_UN_D_MMR6: 	(set FGRCCOpnd:{}:$fd, (setuo:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::CMP_UN_S:
      dbgs() << "CMP_UN_S: 	(set FGRCCOpnd:{}:$fd, (setuo:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::CMP_UN_S_MMR6:
      dbgs() << "CMP_UN_S_MMR6: 	(set FGRCCOpnd:{}:$fd, (setuo:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::COPY_FD_PSEUDO:
      dbgs() << "COPY_FD_PSEUDO: 	(set FGR64:{}:$wd, (vector_extract:{} MSA128D:{ *:[v2f64] }:$ws, (immZExt1Ptr:{}):$n))";
      break;
    case Mips::COPY_FW_PSEUDO:
      dbgs() << "COPY_FW_PSEUDO: 	(set FGR32:{}:$wd, (vector_extract:{} MSA128W:{ *:[v4f32] }:$ws, (immZExt2Ptr:{}):$n))";
      break;
    case Mips::COPY_S_B:
      dbgs() << "COPY_S_B: 	(set GPR32Opnd:{}:$rd, (vextract_sext_i8:{} MSA128BOpnd:{ *:[v16i8] }:$ws, (immZExt4Ptr:{}):$n))";
      break;
    case Mips::COPY_S_D:
      dbgs() << "COPY_S_D: 	(set GPR64Opnd:{}:$rd, (vextract_sext_i64:{} MSA128DOpnd:{ *:[v2i64] }:$ws, (immZExt1Ptr:{}):$n))";
      break;
    case Mips::COPY_S_H:
      dbgs() << "COPY_S_H: 	(set GPR32Opnd:{}:$rd, (vextract_sext_i16:{} MSA128HOpnd:{ *:[v8i16] }:$ws, (immZExt3Ptr:{}):$n))";
      break;
    case Mips::COPY_S_W:
      dbgs() << "COPY_S_W: 	(set GPR32Opnd:{}:$rd, (vextract_sext_i32:{} MSA128WOpnd:{ *:[v4i32] }:$ws, (immZExt2Ptr:{}):$n))";
      break;
    case Mips::COPY_U_B:
      dbgs() << "COPY_U_B: 	(set GPR32Opnd:{}:$rd, (vextract_zext_i8:{} MSA128BOpnd:{ *:[v16i8] }:$ws, (immZExt4Ptr:{}):$n))";
      break;
    case Mips::COPY_U_H:
      dbgs() << "COPY_U_H: 	(set GPR32Opnd:{}:$rd, (vextract_zext_i16:{} MSA128HOpnd:{ *:[v8i16] }:$ws, (immZExt3Ptr:{}):$n))";
      break;
    case Mips::COPY_U_W:
      dbgs() << "COPY_U_W: 	(set GPR32Opnd:{}:$rd, (vextract_zext_i32:{} MSA128WOpnd:{ *:[v4i32] }:$ws, (immZExt2Ptr:{}):$n))";
      break;
    case Mips::DADDiu:
      dbgs() << "DADDiu: 	(set GPR64Opnd:{}:$rt, (add:{} GPR64Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::DADDu:
      dbgs() << "DADDu: 	(set GPR64Opnd:{}:$rd, (add:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DCLO:
      dbgs() << "DCLO: 	(set GPR64Opnd:{}:$rd, (ctlz:{} (not:{} GPR64Opnd:{}:$rs)))";
      break;
    case Mips::DCLO_R6:
      dbgs() << "DCLO_R6: 	(set GPR64Opnd:{}:$rd, (ctlz:{} (not:{} GPR64Opnd:{}:$rs)))";
      break;
    case Mips::DCLZ:
      dbgs() << "DCLZ: 	(set GPR64Opnd:{}:$rd, (ctlz:{} GPR64Opnd:{}:$rs))";
      break;
    case Mips::DCLZ_R6:
      dbgs() << "DCLZ_R6: 	(set GPR64Opnd:{}:$rd, (ctlz:{} GPR64Opnd:{}:$rs))";
      break;
    case Mips::DDIV:
      dbgs() << "DDIV: 	(set GPR64Opnd:{}:$rd, (sdiv:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DDIVU:
      dbgs() << "DDIVU: 	(set GPR64Opnd:{}:$rd, (udiv:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DEXT:
      dbgs() << "DEXT: 	(set GPR64Opnd:{}:$rt, (MipsExt:{} GPR64Opnd:{}:$rs, (immZExt5:{}):$pos, (immZExt5Plus1:{}):$size))";
      break;
    case Mips::DEXTM:
      dbgs() << "DEXTM: 	(set GPR64Opnd:{}:$rt, (MipsExt:{} GPR64Opnd:{}:$rs, (immZExt5:{}):$pos, (immZExt5Plus33:{}):$size))";
      break;
    case Mips::DEXTU:
      dbgs() << "DEXTU: 	(set GPR64Opnd:{}:$rt, (MipsExt:{} GPR64Opnd:{}:$rs, (immZExt5Plus32:{}):$pos, (immZExt5Plus1:{}):$size))";
      break;
    case Mips::DIV:
      dbgs() << "DIV: 	(set GPR32Opnd:{}:$rd, (sdiv:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::DIVU:
      dbgs() << "DIVU: 	(set GPR32Opnd:{}:$rd, (udiv:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::DIVU_MMR6:
      dbgs() << "DIVU_MMR6: 	(set GPR32Opnd:{}:$rd, (udiv:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::DIV_MMR6:
      dbgs() << "DIV_MMR6: 	(set GPR32Opnd:{}:$rd, (sdiv:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::DIV_S_B:
      dbgs() << "DIV_S_B: 	(set MSA128BOpnd:{}:$wd, (sdiv:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DIV_S_D:
      dbgs() << "DIV_S_D: 	(set MSA128DOpnd:{}:$wd, (sdiv:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::DIV_S_H:
      dbgs() << "DIV_S_H: 	(set MSA128HOpnd:{}:$wd, (sdiv:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DIV_S_W:
      dbgs() << "DIV_S_W: 	(set MSA128WOpnd:{}:$wd, (sdiv:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DIV_U_B:
      dbgs() << "DIV_U_B: 	(set MSA128BOpnd:{}:$wd, (udiv:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DIV_U_D:
      dbgs() << "DIV_U_D: 	(set MSA128DOpnd:{}:$wd, (udiv:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::DIV_U_H:
      dbgs() << "DIV_U_H: 	(set MSA128HOpnd:{}:$wd, (udiv:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DIV_U_W:
      dbgs() << "DIV_U_W: 	(set MSA128WOpnd:{}:$wd, (udiv:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DLSA:
      dbgs() << "DLSA: 	(set GPR64Opnd:{}:$rd, (add:{} GPR64Opnd:{}:$rt, (shl:{} GPR64Opnd:{}:$rs, (immZExt2Lsa:{}):$sa)))";
      break;
    case Mips::DMFC1:
      dbgs() << "DMFC1: 	(set GPR64Opnd:{}:$rt, (bitconvert:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::DMOD:
      dbgs() << "DMOD: 	(set GPR64Opnd:{}:$rd, (srem:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DMODU:
      dbgs() << "DMODU: 	(set GPR64Opnd:{}:$rd, (urem:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DMTC1:
      dbgs() << "DMTC1: 	(set FGR64Opnd:{}:$fs, (bitconvert:{} GPR64Opnd:{}:$rt))";
      break;
    case Mips::DMUH:
      dbgs() << "DMUH: 	(set GPR64Opnd:{}:$rd, (mulhs:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DMUHU:
      dbgs() << "DMUHU: 	(set GPR64Opnd:{}:$rd, (mulhu:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DMUL:
      dbgs() << "DMUL: 	(set GPR64Opnd:{}:$rd, (mul:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DMUL_R6:
      dbgs() << "DMUL_R6: 	(set GPR64Opnd:{}:$rd, (mul:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::DOTP_S_D:
      dbgs() << "DOTP_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4244:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DOTP_S_H:
      dbgs() << "DOTP_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4245:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DOTP_S_W:
      dbgs() << "DOTP_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4246:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DOTP_U_D:
      dbgs() << "DOTP_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4247:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DOTP_U_H:
      dbgs() << "DOTP_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4248:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DOTP_U_W:
      dbgs() << "DOTP_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4249:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DPADD_S_D:
      dbgs() << "DPADD_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4251:{}, MSA128DOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DPADD_S_H:
      dbgs() << "DPADD_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4252:{}, MSA128HOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DPADD_S_W:
      dbgs() << "DPADD_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4253:{}, MSA128WOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DPADD_U_D:
      dbgs() << "DPADD_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4254:{}, MSA128DOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DPADD_U_H:
      dbgs() << "DPADD_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4255:{}, MSA128HOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DPADD_U_W:
      dbgs() << "DPADD_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4256:{}, MSA128WOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DPAQX_SA_W_PH:
      dbgs() << "DPAQX_SA_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQX_SA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQX_SA_W_PH_MMR2:
      dbgs() << "DPAQX_SA_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQX_SA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQX_S_W_PH:
      dbgs() << "DPAQX_S_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQX_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQX_S_W_PH_MMR2:
      dbgs() << "DPAQX_S_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQX_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQ_SA_L_W:
      dbgs() << "DPAQ_SA_L_W: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQ_SA_L_W:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQ_SA_L_W_MM:
      dbgs() << "DPAQ_SA_L_W_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQ_SA_L_W:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQ_S_W_PH:
      dbgs() << "DPAQ_S_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQ_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAQ_S_W_PH_MM:
      dbgs() << "DPAQ_S_W_PH_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAQ_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAU_H_QBL:
      dbgs() << "DPAU_H_QBL: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAU_H_QBL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAU_H_QBL_MM:
      dbgs() << "DPAU_H_QBL_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAU_H_QBL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAU_H_QBR:
      dbgs() << "DPAU_H_QBR: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAU_H_QBR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAU_H_QBR_MM:
      dbgs() << "DPAU_H_QBR_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAU_H_QBR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAX_W_PH:
      dbgs() << "DPAX_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAX_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPAX_W_PH_MMR2:
      dbgs() << "DPAX_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPAX_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPA_W_PH:
      dbgs() << "DPA_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPA_W_PH_MMR2:
      dbgs() << "DPA_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPOP:
      dbgs() << "DPOP: 	(set GPR64Opnd:{}:$rd, (ctpop:{} GPR64Opnd:{}:$rs))";
      break;
    case Mips::DPSQX_SA_W_PH:
      dbgs() << "DPSQX_SA_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQX_SA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQX_SA_W_PH_MMR2:
      dbgs() << "DPSQX_SA_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQX_SA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQX_S_W_PH:
      dbgs() << "DPSQX_S_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQX_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQX_S_W_PH_MMR2:
      dbgs() << "DPSQX_S_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQX_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQ_SA_L_W:
      dbgs() << "DPSQ_SA_L_W: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQ_SA_L_W:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQ_SA_L_W_MM:
      dbgs() << "DPSQ_SA_L_W_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQ_SA_L_W:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQ_S_W_PH:
      dbgs() << "DPSQ_S_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQ_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSQ_S_W_PH_MM:
      dbgs() << "DPSQ_S_W_PH_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSQ_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSUB_S_D:
      dbgs() << "DPSUB_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4271:{}, MSA128DOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DPSUB_S_H:
      dbgs() << "DPSUB_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4272:{}, MSA128HOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DPSUB_S_W:
      dbgs() << "DPSUB_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4273:{}, MSA128WOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DPSUB_U_D:
      dbgs() << "DPSUB_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4274:{}, MSA128DOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::DPSUB_U_H:
      dbgs() << "DPSUB_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4275:{}, MSA128HOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::DPSUB_U_W:
      dbgs() << "DPSUB_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4276:{}, MSA128WOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::DPSU_H_QBL:
      dbgs() << "DPSU_H_QBL: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSU_H_QBL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSU_H_QBL_MM:
      dbgs() << "DPSU_H_QBL_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSU_H_QBL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSU_H_QBR:
      dbgs() << "DPSU_H_QBR: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSU_H_QBR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSU_H_QBR_MM:
      dbgs() << "DPSU_H_QBR_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSU_H_QBR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSX_W_PH:
      dbgs() << "DPSX_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSX_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPSX_W_PH_MMR2:
      dbgs() << "DPSX_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPSX_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPS_W_PH:
      dbgs() << "DPS_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPS_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DPS_W_PH_MMR2:
      dbgs() << "DPS_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsDPS_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::DROTR:
      dbgs() << "DROTR: 	(set GPR64Opnd:{}:$rd, (rotr:{} GPR64Opnd:{}:$rt, (immZExt6:{}):$shamt))";
      break;
    case Mips::DROTRV:
      dbgs() << "DROTRV: 	(set GPR64Opnd:{}:$rd, (rotr:{} GPR64Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::DSLL:
      dbgs() << "DSLL: 	(set GPR64Opnd:{}:$rd, (shl:{} GPR64Opnd:{}:$rt, (immZExt6:{}):$shamt))";
      break;
    case Mips::DSLLV:
      dbgs() << "DSLLV: 	(set GPR64Opnd:{}:$rd, (shl:{} GPR64Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::DSRA:
      dbgs() << "DSRA: 	(set GPR64Opnd:{}:$rd, (sra:{} GPR64Opnd:{}:$rt, (immZExt6:{}):$shamt))";
      break;
    case Mips::DSRAV:
      dbgs() << "DSRAV: 	(set GPR64Opnd:{}:$rd, (sra:{} GPR64Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::DSRL:
      dbgs() << "DSRL: 	(set GPR64Opnd:{}:$rd, (srl:{} GPR64Opnd:{}:$rt, (immZExt6:{}):$shamt))";
      break;
    case Mips::DSRLV:
      dbgs() << "DSRLV: 	(set GPR64Opnd:{}:$rd, (srl:{} GPR64Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::DSUBu:
      dbgs() << "DSUBu: 	(set GPR64Opnd:{}:$rd, (sub:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::ERet:
      dbgs() << "ERet: 	(MipsERet)";
      break;
    case Mips::EXT:
      dbgs() << "EXT: 	(set GPR32Opnd:{}:$rt, (MipsExt:{} GPR32Opnd:{}:$rs, (immZExt5:{}):$pos, (immZExt5Plus1:{}):$size))";
      break;
    case Mips::EXT_MM:
      dbgs() << "EXT_MM: 	(set GPR32Opnd:{}:$rt, (MipsExt:{} GPR32Opnd:{}:$rs, (immZExt5:{}):$pos, (immZExt5Plus1:{}):$size))";
      break;
    case Mips::EXT_MMR6:
      dbgs() << "EXT_MMR6: 	(set GPR32Opnd:{}:$rt, (MipsExt:{} GPR32Opnd:{}:$rs, (imm:{}):$pos, (imm:{}):$size))";
      break;
    case Mips::ExtractElementF64:
      dbgs() << "ExtractElementF64: 	(set GPR32Opnd:{}:$dst, (MipsExtractElementF64:{} AFGR64Opnd:{}:$src, (imm:{}):$n))";
      break;
    case Mips::ExtractElementF64_64:
      dbgs() << "ExtractElementF64_64: 	(set GPR32Opnd:{}:$dst, (MipsExtractElementF64:{} FGR64Opnd:{}:$src, (imm:{}):$n))";
      break;
    case Mips::FABS_D:
      dbgs() << "FABS_D: 	(set MSA128DOpnd:{}:$wd, (fabs:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FABS_D32:
      dbgs() << "FABS_D32: 	(set AFGR64Opnd:{}:$fd, (fabs:{} AFGR64Opnd:{}:$fs))";
      break;
    case Mips::FABS_D32_MM:
      dbgs() << "FABS_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fabs:{} AFGR64Opnd:{}:$fs))";
      break;
    case Mips::FABS_D64:
      dbgs() << "FABS_D64: 	(set FGR64Opnd:{}:$fd, (fabs:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::FABS_D64_MM:
      dbgs() << "FABS_D64_MM: 	(set FGR64Opnd:{}:$fd, (fabs:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::FABS_S:
      dbgs() << "FABS_S: 	(set FGR32Opnd:{}:$fd, (fabs:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FABS_S_MM:
      dbgs() << "FABS_S_MM: 	(set FGR32Opnd:{}:$fd, (fabs:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FABS_W:
      dbgs() << "FABS_W: 	(set MSA128WOpnd:{}:$wd, (fabs:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FADD_D:
      dbgs() << "FADD_D: 	(set MSA128DOpnd:{}:$wd, (fadd:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FADD_D32:
      dbgs() << "FADD_D32: 	(set AFGR64Opnd:{}:$fd, (fadd:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FADD_D32_MM:
      dbgs() << "FADD_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fadd:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FADD_D64:
      dbgs() << "FADD_D64: 	(set FGR64Opnd:{}:$fd, (fadd:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FADD_D64_MM:
      dbgs() << "FADD_D64_MM: 	(set FGR64Opnd:{}:$fd, (fadd:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FADD_S:
      dbgs() << "FADD_S: 	(set FGR32Opnd:{}:$fd, (fadd:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FADD_S_MM:
      dbgs() << "FADD_S_MM: 	(set FGR32Opnd:{}:$fd, (fadd:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FADD_S_MMR6:
      dbgs() << "FADD_S_MMR6: 	(set FGR32Opnd:{}:$fd, (fadd:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FADD_W:
      dbgs() << "FADD_W: 	(set MSA128WOpnd:{}:$wd, (fadd:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCAF_D:
      dbgs() << "FCAF_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4286:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCAF_W:
      dbgs() << "FCAF_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4287:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCEQ_D:
      dbgs() << "FCEQ_D: 	(set MSA128DOpnd:{}:$wd, (vfsetoeq_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCEQ_W:
      dbgs() << "FCEQ_W: 	(set MSA128WOpnd:{}:$wd, (vfsetoeq_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCLASS_D:
      dbgs() << "FCLASS_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4290:{}, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FCLASS_W:
      dbgs() << "FCLASS_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4291:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FCLE_D:
      dbgs() << "FCLE_D: 	(set MSA128DOpnd:{}:$wd, (vfsetole_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCLE_W:
      dbgs() << "FCLE_W: 	(set MSA128WOpnd:{}:$wd, (vfsetole_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCLT_D:
      dbgs() << "FCLT_D: 	(set MSA128DOpnd:{}:$wd, (vfsetolt_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCLT_W:
      dbgs() << "FCLT_W: 	(set MSA128WOpnd:{}:$wd, (vfsetolt_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCMP_D32:
      dbgs() << "FCMP_D32: 	(MipsFPCmp AFGR64:{}:$fs, AFGR64:{}:$ft, (imm:{}):$cond)";
      break;
    case Mips::FCMP_D32_MM:
      dbgs() << "FCMP_D32_MM: 	(MipsFPCmp AFGR64:{}:$fs, AFGR64:{}:$ft, (imm:{}):$cond)";
      break;
    case Mips::FCMP_D64:
      dbgs() << "FCMP_D64: 	(MipsFPCmp FGR64:{}:$fs, FGR64:{}:$ft, (imm:{}):$cond)";
      break;
    case Mips::FCMP_S32:
      dbgs() << "FCMP_S32: 	(MipsFPCmp FGR32:{}:$fs, FGR32:{}:$ft, (imm:{}):$cond)";
      break;
    case Mips::FCMP_S32_MM:
      dbgs() << "FCMP_S32_MM: 	(MipsFPCmp FGR32:{}:$fs, FGR32:{}:$ft, (imm:{}):$cond)";
      break;
    case Mips::FCNE_D:
      dbgs() << "FCNE_D: 	(set MSA128DOpnd:{}:$wd, (vfsetone_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCNE_W:
      dbgs() << "FCNE_W: 	(set MSA128WOpnd:{}:$wd, (vfsetone_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCOR_D:
      dbgs() << "FCOR_D: 	(set MSA128DOpnd:{}:$wd, (vfsetord_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCOR_W:
      dbgs() << "FCOR_W: 	(set MSA128WOpnd:{}:$wd, (vfsetord_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCUEQ_D:
      dbgs() << "FCUEQ_D: 	(set MSA128DOpnd:{}:$wd, (vfsetueq_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCUEQ_W:
      dbgs() << "FCUEQ_W: 	(set MSA128WOpnd:{}:$wd, (vfsetueq_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCULE_D:
      dbgs() << "FCULE_D: 	(set MSA128DOpnd:{}:$wd, (vfsetule_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCULE_W:
      dbgs() << "FCULE_W: 	(set MSA128WOpnd:{}:$wd, (vfsetule_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCULT_D:
      dbgs() << "FCULT_D: 	(set MSA128DOpnd:{}:$wd, (vfsetult_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCULT_W:
      dbgs() << "FCULT_W: 	(set MSA128WOpnd:{}:$wd, (vfsetult_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCUNE_D:
      dbgs() << "FCUNE_D: 	(set MSA128DOpnd:{}:$wd, (vfsetune_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCUNE_W:
      dbgs() << "FCUNE_W: 	(set MSA128WOpnd:{}:$wd, (vfsetune_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FCUN_D:
      dbgs() << "FCUN_D: 	(set MSA128DOpnd:{}:$wd, (vfsetun_v2f64:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FCUN_W:
      dbgs() << "FCUN_W: 	(set MSA128WOpnd:{}:$wd, (vfsetun_v4f32:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FDIV_D:
      dbgs() << "FDIV_D: 	(set MSA128DOpnd:{}:$wd, (fdiv:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FDIV_D32:
      dbgs() << "FDIV_D32: 	(set AFGR64Opnd:{}:$fd, (fdiv:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FDIV_D32_MM:
      dbgs() << "FDIV_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fdiv:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FDIV_D64:
      dbgs() << "FDIV_D64: 	(set FGR64Opnd:{}:$fd, (fdiv:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FDIV_D64_MM:
      dbgs() << "FDIV_D64_MM: 	(set FGR64Opnd:{}:$fd, (fdiv:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FDIV_S:
      dbgs() << "FDIV_S: 	(set FGR32Opnd:{}:$fd, (fdiv:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FDIV_S_MM:
      dbgs() << "FDIV_S_MM: 	(set FGR32Opnd:{}:$fd, (fdiv:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FDIV_S_MMR6:
      dbgs() << "FDIV_S_MMR6: 	(set FGR32Opnd:{}:$fd, (fdiv:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FDIV_W:
      dbgs() << "FDIV_W: 	(set MSA128WOpnd:{}:$wd, (fdiv:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FEXDO_H:
      dbgs() << "FEXDO_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4312:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FEXDO_W:
      dbgs() << "FEXDO_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4313:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FEXP2_D:
      dbgs() << "FEXP2_D: 	(set MSA128DOpnd:{}:$wd, (mul_fexp2:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FEXP2_D_1_PSEUDO:
      dbgs() << "FEXP2_D_1_PSEUDO: 	(set MSA128D:{}:$wd, (fexp2:{} MSA128D:{}:$ws))";
      break;
    case Mips::FEXP2_W:
      dbgs() << "FEXP2_W: 	(set MSA128WOpnd:{}:$wd, (mul_fexp2:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FEXP2_W_1_PSEUDO:
      dbgs() << "FEXP2_W_1_PSEUDO: 	(set MSA128W:{}:$wd, (fexp2:{} MSA128W:{}:$ws))";
      break;
    case Mips::FEXUPL_D:
      dbgs() << "FEXUPL_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4316:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FEXUPL_W:
      dbgs() << "FEXUPL_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4317:{}, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::FEXUPR_D:
      dbgs() << "FEXUPR_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4318:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FEXUPR_W:
      dbgs() << "FEXUPR_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4319:{}, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::FFINT_S_D:
      dbgs() << "FFINT_S_D: 	(set MSA128DOpnd:{}:$wd, (sint_to_fp:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FFINT_S_W:
      dbgs() << "FFINT_S_W: 	(set MSA128WOpnd:{}:$wd, (sint_to_fp:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FFINT_U_D:
      dbgs() << "FFINT_U_D: 	(set MSA128DOpnd:{}:$wd, (uint_to_fp:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FFINT_U_W:
      dbgs() << "FFINT_U_W: 	(set MSA128WOpnd:{}:$wd, (uint_to_fp:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FFQL_D:
      dbgs() << "FFQL_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4324:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FFQL_W:
      dbgs() << "FFQL_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4325:{}, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::FFQR_D:
      dbgs() << "FFQR_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4326:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FFQR_W:
      dbgs() << "FFQR_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4327:{}, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::FILL_B:
      dbgs() << "FILL_B: 	(set MSA128BOpnd:{}:$wd, (vsplati8:{ *:[v16i8] } GPR32Opnd:{}:$rs))";
      break;
    case Mips::FILL_D:
      dbgs() << "FILL_D: 	(set MSA128DOpnd:{}:$wd, (vsplati64:{ *:[v2i64] } GPR64Opnd:{}:$rs))";
      break;
    case Mips::FILL_FD_PSEUDO:
      dbgs() << "FILL_FD_PSEUDO: 	(set MSA128D:{}:$wd, (vsplatf64:{} FGR64:{}:$fs))";
      break;
    case Mips::FILL_FW_PSEUDO:
      dbgs() << "FILL_FW_PSEUDO: 	(set MSA128W:{}:$wd, (vsplatf32:{} FGR32:{}:$fs))";
      break;
    case Mips::FILL_H:
      dbgs() << "FILL_H: 	(set MSA128HOpnd:{}:$wd, (vsplati16:{ *:[v8i16] } GPR32Opnd:{}:$rs))";
      break;
    case Mips::FILL_W:
      dbgs() << "FILL_W: 	(set MSA128WOpnd:{}:$wd, (vsplati32:{ *:[v4i32] } GPR32Opnd:{}:$rs))";
      break;
    case Mips::FLOG2_D:
      dbgs() << "FLOG2_D: 	(set MSA128DOpnd:{}:$wd, (flog2:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FLOG2_W:
      dbgs() << "FLOG2_W: 	(set MSA128WOpnd:{}:$wd, (flog2:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FMADD_D:
      dbgs() << "FMADD_D: 	(set MSA128DOpnd:{}:$wd, (fma:{} MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMADD_W:
      dbgs() << "FMADD_W: 	(set MSA128WOpnd:{}:$wd, (fma:{} MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FMAX_A_D:
      dbgs() << "FMAX_A_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4336:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMAX_A_W:
      dbgs() << "FMAX_A_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4337:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FMAX_D:
      dbgs() << "FMAX_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4338:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMAX_W:
      dbgs() << "FMAX_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4339:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FMIN_A_D:
      dbgs() << "FMIN_A_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4340:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMIN_A_W:
      dbgs() << "FMIN_A_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4341:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FMIN_D:
      dbgs() << "FMIN_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4342:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMIN_W:
      dbgs() << "FMIN_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4343:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FMSUB_D:
      dbgs() << "FMSUB_D: 	(set MSA128DOpnd:{}:$wd, (MipsFMS:{} MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMSUB_W:
      dbgs() << "FMSUB_W: 	(set MSA128WOpnd:{}:$wd, (MipsFMS:{} MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FMUL_D:
      dbgs() << "FMUL_D: 	(set MSA128DOpnd:{}:$wd, (fmul:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FMUL_D32:
      dbgs() << "FMUL_D32: 	(set AFGR64Opnd:{}:$fd, (fmul:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FMUL_D32_MM:
      dbgs() << "FMUL_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fmul:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FMUL_D64:
      dbgs() << "FMUL_D64: 	(set FGR64Opnd:{}:$fd, (fmul:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FMUL_D64_MM:
      dbgs() << "FMUL_D64_MM: 	(set FGR64Opnd:{}:$fd, (fmul:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FMUL_S:
      dbgs() << "FMUL_S: 	(set FGR32Opnd:{}:$fd, (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FMUL_S_MM:
      dbgs() << "FMUL_S_MM: 	(set FGR32Opnd:{}:$fd, (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FMUL_S_MMR6:
      dbgs() << "FMUL_S_MMR6: 	(set FGR32Opnd:{}:$fd, (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FMUL_W:
      dbgs() << "FMUL_W: 	(set MSA128WOpnd:{}:$wd, (fmul:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FNEG_D32:
      dbgs() << "FNEG_D32: 	(set AFGR64Opnd:{}:$fd, (fneg:{} AFGR64Opnd:{}:$fs))";
      break;
    case Mips::FNEG_D32_MM:
      dbgs() << "FNEG_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fneg:{} AFGR64Opnd:{}:$fs))";
      break;
    case Mips::FNEG_D64:
      dbgs() << "FNEG_D64: 	(set FGR64Opnd:{}:$fd, (fneg:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::FNEG_D64_MM:
      dbgs() << "FNEG_D64_MM: 	(set FGR64Opnd:{}:$fd, (fneg:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::FNEG_S:
      dbgs() << "FNEG_S: 	(set FGR32Opnd:{}:$fd, (fneg:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FNEG_S_MM:
      dbgs() << "FNEG_S_MM: 	(set FGR32Opnd:{}:$fd, (fneg:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FNEG_S_MMR6:
      dbgs() << "FNEG_S_MMR6: 	(set FGR32Opnd:{}:$ft, (fneg:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FRCP_D:
      dbgs() << "FRCP_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4348:{}, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FRCP_W:
      dbgs() << "FRCP_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4349:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FRINT_D:
      dbgs() << "FRINT_D: 	(set MSA128DOpnd:{}:$wd, (frint:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FRINT_W:
      dbgs() << "FRINT_W: 	(set MSA128WOpnd:{}:$wd, (frint:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FRSQRT_D:
      dbgs() << "FRSQRT_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4352:{}, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FRSQRT_W:
      dbgs() << "FRSQRT_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4353:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FSAF_D:
      dbgs() << "FSAF_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4354:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSAF_W:
      dbgs() << "FSAF_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4355:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSEQ_D:
      dbgs() << "FSEQ_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4356:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSEQ_W:
      dbgs() << "FSEQ_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4357:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSLE_D:
      dbgs() << "FSLE_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4358:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSLE_W:
      dbgs() << "FSLE_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4359:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSLT_D:
      dbgs() << "FSLT_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4360:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSLT_W:
      dbgs() << "FSLT_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4361:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSNE_D:
      dbgs() << "FSNE_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4362:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSNE_W:
      dbgs() << "FSNE_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4363:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSOR_D:
      dbgs() << "FSOR_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4364:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSOR_W:
      dbgs() << "FSOR_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4365:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSQRT_D:
      dbgs() << "FSQRT_D: 	(set MSA128DOpnd:{}:$wd, (fsqrt:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FSQRT_D32:
      dbgs() << "FSQRT_D32: 	(set AFGR64Opnd:{}:$fd, (fsqrt:{} AFGR64Opnd:{}:$fs))";
      break;
    case Mips::FSQRT_D32_MM:
      dbgs() << "FSQRT_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fsqrt:{} AFGR64Opnd:{}:$fs))";
      break;
    case Mips::FSQRT_D64:
      dbgs() << "FSQRT_D64: 	(set FGR64Opnd:{}:$fd, (fsqrt:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::FSQRT_D64_MM:
      dbgs() << "FSQRT_D64_MM: 	(set FGR64Opnd:{}:$fd, (fsqrt:{} FGR64Opnd:{}:$fs))";
      break;
    case Mips::FSQRT_S:
      dbgs() << "FSQRT_S: 	(set FGR32Opnd:{}:$fd, (fsqrt:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FSQRT_S_MM:
      dbgs() << "FSQRT_S_MM: 	(set FGR32Opnd:{}:$fd, (fsqrt:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::FSQRT_W:
      dbgs() << "FSQRT_W: 	(set MSA128WOpnd:{}:$wd, (fsqrt:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FSUB_D:
      dbgs() << "FSUB_D: 	(set MSA128DOpnd:{}:$wd, (fsub:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSUB_D32:
      dbgs() << "FSUB_D32: 	(set AFGR64Opnd:{}:$fd, (fsub:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FSUB_D32_MM:
      dbgs() << "FSUB_D32_MM: 	(set AFGR64Opnd:{}:$fd, (fsub:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft))";
      break;
    case Mips::FSUB_D64:
      dbgs() << "FSUB_D64: 	(set FGR64Opnd:{}:$fd, (fsub:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FSUB_D64_MM:
      dbgs() << "FSUB_D64_MM: 	(set FGR64Opnd:{}:$fd, (fsub:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft))";
      break;
    case Mips::FSUB_S:
      dbgs() << "FSUB_S: 	(set FGR32Opnd:{}:$fd, (fsub:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FSUB_S_MM:
      dbgs() << "FSUB_S_MM: 	(set FGR32Opnd:{}:$fd, (fsub:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FSUB_S_MMR6:
      dbgs() << "FSUB_S_MMR6: 	(set FGR32Opnd:{}:$fd, (fsub:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft))";
      break;
    case Mips::FSUB_W:
      dbgs() << "FSUB_W: 	(set MSA128WOpnd:{}:$wd, (fsub:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSUEQ_D:
      dbgs() << "FSUEQ_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4370:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSUEQ_W:
      dbgs() << "FSUEQ_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4371:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSULE_D:
      dbgs() << "FSULE_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4372:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSULE_W:
      dbgs() << "FSULE_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4373:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSULT_D:
      dbgs() << "FSULT_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4374:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSULT_W:
      dbgs() << "FSULT_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4375:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSUNE_D:
      dbgs() << "FSUNE_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4378:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSUNE_W:
      dbgs() << "FSUNE_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4379:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FSUN_D:
      dbgs() << "FSUN_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4376:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FSUN_W:
      dbgs() << "FSUN_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4377:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FTINT_S_D:
      dbgs() << "FTINT_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4380:{}, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FTINT_S_W:
      dbgs() << "FTINT_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4381:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FTINT_U_D:
      dbgs() << "FTINT_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4382:{}, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FTINT_U_W:
      dbgs() << "FTINT_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4383:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FTQ_H:
      dbgs() << "FTQ_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4384:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::FTQ_W:
      dbgs() << "FTQ_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4385:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::FTRUNC_S_D:
      dbgs() << "FTRUNC_S_D: 	(set MSA128DOpnd:{}:$wd, (fp_to_sint:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FTRUNC_S_W:
      dbgs() << "FTRUNC_S_W: 	(set MSA128WOpnd:{}:$wd, (fp_to_sint:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::FTRUNC_U_D:
      dbgs() << "FTRUNC_U_D: 	(set MSA128DOpnd:{}:$wd, (fp_to_uint:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::FTRUNC_U_W:
      dbgs() << "FTRUNC_U_W: 	(set MSA128WOpnd:{}:$wd, (fp_to_uint:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::HADD_S_D:
      dbgs() << "HADD_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4390:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::HADD_S_H:
      dbgs() << "HADD_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4391:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::HADD_S_W:
      dbgs() << "HADD_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4392:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::HADD_U_D:
      dbgs() << "HADD_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4393:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::HADD_U_H:
      dbgs() << "HADD_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4394:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::HADD_U_W:
      dbgs() << "HADD_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4395:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::HSUB_S_D:
      dbgs() << "HSUB_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4396:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::HSUB_S_H:
      dbgs() << "HSUB_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4397:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::HSUB_S_W:
      dbgs() << "HSUB_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4398:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::HSUB_U_D:
      dbgs() << "HSUB_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4399:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::HSUB_U_H:
      dbgs() << "HSUB_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4400:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::HSUB_U_W:
      dbgs() << "HSUB_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4401:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ILVEV_B:
      dbgs() << "ILVEV_B: 	(set MSA128BOpnd:{}:$wd, (MipsILVEV:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ILVEV_D:
      dbgs() << "ILVEV_D: 	(set MSA128DOpnd:{}:$wd, (MipsILVEV:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ILVEV_H:
      dbgs() << "ILVEV_H: 	(set MSA128HOpnd:{}:$wd, (MipsILVEV:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ILVEV_W:
      dbgs() << "ILVEV_W: 	(set MSA128WOpnd:{}:$wd, (MipsILVEV:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ILVL_B:
      dbgs() << "ILVL_B: 	(set MSA128BOpnd:{}:$wd, (MipsILVL:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ILVL_D:
      dbgs() << "ILVL_D: 	(set MSA128DOpnd:{}:$wd, (MipsILVL:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ILVL_H:
      dbgs() << "ILVL_H: 	(set MSA128HOpnd:{}:$wd, (MipsILVL:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ILVL_W:
      dbgs() << "ILVL_W: 	(set MSA128WOpnd:{}:$wd, (MipsILVL:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ILVOD_B:
      dbgs() << "ILVOD_B: 	(set MSA128BOpnd:{}:$wd, (MipsILVOD:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ILVOD_D:
      dbgs() << "ILVOD_D: 	(set MSA128DOpnd:{}:$wd, (MipsILVOD:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ILVOD_H:
      dbgs() << "ILVOD_H: 	(set MSA128HOpnd:{}:$wd, (MipsILVOD:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ILVOD_W:
      dbgs() << "ILVOD_W: 	(set MSA128WOpnd:{}:$wd, (MipsILVOD:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ILVR_B:
      dbgs() << "ILVR_B: 	(set MSA128BOpnd:{}:$wd, (MipsILVR:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::ILVR_D:
      dbgs() << "ILVR_D: 	(set MSA128DOpnd:{}:$wd, (MipsILVR:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::ILVR_H:
      dbgs() << "ILVR_H: 	(set MSA128HOpnd:{}:$wd, (MipsILVR:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::ILVR_W:
      dbgs() << "ILVR_W: 	(set MSA128WOpnd:{}:$wd, (MipsILVR:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::INSERT_B:
      dbgs() << "INSERT_B: 	(set MSA128BOpnd:{}:$wd, (vinsert_v16i8:{} MSA128BOpnd:{}:$wd_in, GPR32Opnd:{}:$rs, (immZExt4Ptr:{}):$n))";
      break;
    case Mips::INSERT_B_VIDX64_PSEUDO:
      dbgs() << "INSERT_B_VIDX64_PSEUDO: 	(set MSA128BOpnd:{}:$wd, (vector_insert:{} MSA128BOpnd:{ *:[v16i8] }:$wd_in, GPR32Opnd:{}:$fs, GPR64Opnd:{}:$n))";
      break;
    case Mips::INSERT_B_VIDX_PSEUDO:
      dbgs() << "INSERT_B_VIDX_PSEUDO: 	(set MSA128BOpnd:{}:$wd, (vector_insert:{} MSA128BOpnd:{ *:[v16i8] }:$wd_in, GPR32Opnd:{}:$fs, GPR32Opnd:{}:$n))";
      break;
    case Mips::INSERT_D:
      dbgs() << "INSERT_D: 	(set MSA128DOpnd:{}:$wd, (vinsert_v2i64:{} MSA128DOpnd:{}:$wd_in, GPR64Opnd:{}:$rs, (immZExt1Ptr:{}):$n))";
      break;
    case Mips::INSERT_D_VIDX64_PSEUDO:
      dbgs() << "INSERT_D_VIDX64_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vector_insert:{} MSA128DOpnd:{ *:[v2i64] }:$wd_in, GPR64Opnd:{}:$fs, GPR64Opnd:{}:$n))";
      break;
    case Mips::INSERT_D_VIDX_PSEUDO:
      dbgs() << "INSERT_D_VIDX_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vector_insert:{} MSA128DOpnd:{ *:[v2i64] }:$wd_in, GPR64Opnd:{}:$fs, GPR32Opnd:{}:$n))";
      break;
    case Mips::INSERT_FD_PSEUDO:
      dbgs() << "INSERT_FD_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vector_insert:{} MSA128DOpnd:{ *:[v2f64] }:$wd_in, FGR64Opnd:{}:$fs, (immZExt1Ptr:{}):$n))";
      break;
    case Mips::INSERT_FD_VIDX64_PSEUDO:
      dbgs() << "INSERT_FD_VIDX64_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vector_insert:{} MSA128DOpnd:{ *:[v2f64] }:$wd_in, FGR64Opnd:{}:$fs, GPR64Opnd:{}:$n))";
      break;
    case Mips::INSERT_FD_VIDX_PSEUDO:
      dbgs() << "INSERT_FD_VIDX_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (vector_insert:{} MSA128DOpnd:{ *:[v2f64] }:$wd_in, FGR64Opnd:{}:$fs, GPR32Opnd:{}:$n))";
      break;
    case Mips::INSERT_FW_PSEUDO:
      dbgs() << "INSERT_FW_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vector_insert:{} MSA128WOpnd:{ *:[v4f32] }:$wd_in, FGR32Opnd:{}:$fs, (immZExt2Ptr:{}):$n))";
      break;
    case Mips::INSERT_FW_VIDX64_PSEUDO:
      dbgs() << "INSERT_FW_VIDX64_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vector_insert:{} MSA128WOpnd:{ *:[v4f32] }:$wd_in, FGR32Opnd:{}:$fs, GPR64Opnd:{}:$n))";
      break;
    case Mips::INSERT_FW_VIDX_PSEUDO:
      dbgs() << "INSERT_FW_VIDX_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vector_insert:{} MSA128WOpnd:{ *:[v4f32] }:$wd_in, FGR32Opnd:{}:$fs, GPR32Opnd:{}:$n))";
      break;
    case Mips::INSERT_H:
      dbgs() << "INSERT_H: 	(set MSA128HOpnd:{}:$wd, (vinsert_v8i16:{} MSA128HOpnd:{}:$wd_in, GPR32Opnd:{}:$rs, (immZExt3Ptr:{}):$n))";
      break;
    case Mips::INSERT_H_VIDX64_PSEUDO:
      dbgs() << "INSERT_H_VIDX64_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (vector_insert:{} MSA128HOpnd:{ *:[v8i16] }:$wd_in, GPR32Opnd:{}:$fs, GPR64Opnd:{}:$n))";
      break;
    case Mips::INSERT_H_VIDX_PSEUDO:
      dbgs() << "INSERT_H_VIDX_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (vector_insert:{} MSA128HOpnd:{ *:[v8i16] }:$wd_in, GPR32Opnd:{}:$fs, GPR32Opnd:{}:$n))";
      break;
    case Mips::INSERT_W:
      dbgs() << "INSERT_W: 	(set MSA128WOpnd:{}:$wd, (vinsert_v4i32:{} MSA128WOpnd:{}:$wd_in, GPR32Opnd:{}:$rs, (immZExt2Ptr:{}):$n))";
      break;
    case Mips::INSERT_W_VIDX64_PSEUDO:
      dbgs() << "INSERT_W_VIDX64_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vector_insert:{} MSA128WOpnd:{ *:[v4i32] }:$wd_in, GPR32Opnd:{}:$fs, GPR64Opnd:{}:$n))";
      break;
    case Mips::INSERT_W_VIDX_PSEUDO:
      dbgs() << "INSERT_W_VIDX_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (vector_insert:{} MSA128WOpnd:{ *:[v4i32] }:$wd_in, GPR32Opnd:{}:$fs, GPR32Opnd:{}:$n))";
      break;
    case Mips::INSV:
      dbgs() << "INSV: 	(set GPR32Opnd:{}:$rt, (intrinsic_w_chain:{} 4422:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs))";
      break;
    case Mips::INSVE_B:
      dbgs() << "INSVE_B: 	(set MSA128BOpnd:{}:$wd, (insve_v16i8:{} MSA128BOpnd:{}:$wd_in, (timmZExt4:{}):$n, MSA128BOpnd:{}:$ws, (immz:{}):$n2))";
      break;
    case Mips::INSVE_D:
      dbgs() << "INSVE_D: 	(set MSA128DOpnd:{}:$wd, (insve_v2i64:{} MSA128DOpnd:{}:$wd_in, (timmZExt1:{}):$n, MSA128DOpnd:{}:$ws, (immz:{}):$n2))";
      break;
    case Mips::INSVE_H:
      dbgs() << "INSVE_H: 	(set MSA128HOpnd:{}:$wd, (insve_v8i16:{} MSA128HOpnd:{}:$wd_in, (timmZExt3:{}):$n, MSA128HOpnd:{}:$ws, (immz:{}):$n2))";
      break;
    case Mips::INSVE_W:
      dbgs() << "INSVE_W: 	(set MSA128WOpnd:{}:$wd, (insve_v4i32:{} MSA128WOpnd:{}:$wd_in, (timmZExt2:{}):$n, MSA128WOpnd:{}:$ws, (immz:{}):$n2))";
      break;
    case Mips::INSV_MM:
      dbgs() << "INSV_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_w_chain:{} 4422:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs))";
      break;
    case Mips::INS_MMR6:
      dbgs() << "INS_MMR6: 	(set GPR32Opnd:{}:$rt, (MipsIns:{} GPR32Opnd:{}:$rs, (imm:{}):$pos, (imm:{}):$size, GPR32Opnd:{}:$src))";
      break;
    case Mips::J:
      dbgs() << "J: 	(br (bb:{}):$target)";
      break;
    case Mips::JAL:
      dbgs() << "JAL: 	(MipsJmpLink (tglobaladdr:{}):$target)";
      break;
    case Mips::JALR16_MM:
      dbgs() << "JALR16_MM: 	(MipsJmpLink GPR32Opnd:{}:$rs)";
      break;
    case Mips::JALR64Pseudo:
      dbgs() << "JALR64Pseudo: 	(MipsJmpLink GPR64Opnd:{}:$rs)";
      break;
    case Mips::JALRC16_MMR6:
      dbgs() << "JALRC16_MMR6: 	(MipsJmpLink GPR32Opnd:{}:$rs)";
      break;
    case Mips::JALRHB64Pseudo:
      dbgs() << "JALRHB64Pseudo: 	(MipsJmpLink GPR64Opnd:{}:$rs)";
      break;
    case Mips::JALRHBPseudo:
      dbgs() << "JALRHBPseudo: 	(MipsJmpLink GPR32Opnd:{}:$rs)";
      break;
    case Mips::JALRPseudo:
      dbgs() << "JALRPseudo: 	(MipsJmpLink GPR32Opnd:{}:$rs)";
      break;
    case Mips::JALX:
      dbgs() << "JALX: 	(MipsJmpLink (tglobaladdr:{}):$target)";
      break;
    case Mips::JALX_MM:
      dbgs() << "JALX_MM: 	(MipsJmpLink (tglobaladdr:{}):$target)";
      break;
    case Mips::JAL_MM:
      dbgs() << "JAL_MM: 	(MipsJmpLink (tglobaladdr:{}):$target)";
      break;
    case Mips::J_MM:
      dbgs() << "J_MM: 	(br (bb:{}):$target)";
      break;
    case Mips::JumpLinkReg16:
      dbgs() << "JumpLinkReg16: 	(MipsJmpLink CPU16Regs:{}:$rs)";
      break;
    case Mips::LB:
      dbgs() << "LB: 	(set GPR32Opnd:{}:$rt, (sextloadi8:{} addr:{}:$addr))";
      break;
    case Mips::LB64:
      dbgs() << "LB64: 	(set GPR64Opnd:{}:$rt, (sextloadi8:{} addr:{}:$addr))";
      break;
    case Mips::LBUX:
      dbgs() << "LBUX: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4427:{}, iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::LBUX_MM:
      dbgs() << "LBUX_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4427:{}, iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::LB_MM:
      dbgs() << "LB_MM: 	(set GPR32Opnd:{}:$rt, (sextloadi8:{} addr:{}:$addr))";
      break;
    case Mips::LBu:
      dbgs() << "LBu: 	(set GPR32Opnd:{}:$rt, (zextloadi8:{} addrDefault:{}:$addr))";
      break;
    case Mips::LBu64:
      dbgs() << "LBu64: 	(set GPR64Opnd:{}:$rt, (zextloadi8:{} addr:{}:$addr))";
      break;
    case Mips::LBu_MM:
      dbgs() << "LBu_MM: 	(set GPR32Opnd:{}:$rt, (zextloadi8:{} addr:{}:$addr))";
      break;
    case Mips::LD:
      dbgs() << "LD: 	(set GPR64Opnd:{}:$rt, (load:{} addr:{}:$addr))";
      break;
    case Mips::LDC1:
      dbgs() << "LDC1: 	(set AFGR64Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LDC164:
      dbgs() << "LDC164: 	(set FGR64Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LDC1_D64_MMR6:
      dbgs() << "LDC1_D64_MMR6: 	(set FGR64Opnd:{}:$ft, (load:{} addrimm16:{}:$addr))";
      break;
    case Mips::LDC1_MM:
      dbgs() << "LDC1_MM: 	(set AFGR64Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LDC2:
      dbgs() << "LDC2: 	(set COP2Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LDC2_MMR6:
      dbgs() << "LDC2_MMR6: 	(set COP2Opnd:{}:$rt, (load:{} addrimm11:{}:$addr))";
      break;
    case Mips::LDC3:
      dbgs() << "LDC3: 	(set COP3Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LDL:
      dbgs() << "LDL: 	(set GPR64Opnd:{}:$rt, (MipsLDL:{} addr:{}:$addr, GPR64Opnd:{}:$src))";
      break;
    case Mips::LDR:
      dbgs() << "LDR: 	(set GPR64Opnd:{}:$rt, (MipsLDR:{} addr:{}:$addr, GPR64Opnd:{}:$src))";
      break;
    case Mips::LDR_D:
      dbgs() << "LDR_D: 	(set MSA128DOpnd:{}:$dst, (intrinsic_w_chain:{} 4436:{}, iPTR:{}:$ptr, GPR32:{}:$imm))";
      break;
    case Mips::LDR_W:
      dbgs() << "LDR_W: 	(set MSA128WOpnd:{}:$dst, (intrinsic_w_chain:{} 4437:{}, iPTR:{}:$ptr, GPR32:{}:$imm))";
      break;
    case Mips::LDXC1:
      dbgs() << "LDXC1: 	(set AFGR64Opnd:{}:$fd, (load:{} (add:{} iPTR:{}:$base, iPTR:{}:$index)))";
      break;
    case Mips::LDXC164:
      dbgs() << "LDXC164: 	(set FGR64Opnd:{}:$fd, (load:{} (add:{} iPTR:{}:$base, iPTR:{}:$index)))";
      break;
    case Mips::LD_B:
      dbgs() << "LD_B: 	(set MSA128BOpnd:{}:$wd, (load:{ *:[v16i8] } addrimm10:{}:$addr))";
      break;
    case Mips::LD_D:
      dbgs() << "LD_D: 	(set MSA128DOpnd:{}:$wd, (load:{ *:[v2i64] } addrimm10lsl3:{}:$addr))";
      break;
    case Mips::LD_F16:
      dbgs() << "LD_F16: 	(set MSA128F16:{}:$ws, (load:{ *:[f16] } addrimm10:{}:$addr))";
      break;
    case Mips::LD_H:
      dbgs() << "LD_H: 	(set MSA128HOpnd:{}:$wd, (load:{ *:[v8i16] } addrimm10lsl1:{}:$addr))";
      break;
    case Mips::LD_W:
      dbgs() << "LD_W: 	(set MSA128WOpnd:{}:$wd, (load:{ *:[v4i32] } addrimm10lsl2:{}:$addr))";
      break;
    case Mips::LEA_ADDiu:
      dbgs() << "LEA_ADDiu: 	(set GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::LEA_ADDiu64:
      dbgs() << "LEA_ADDiu64: 	(set GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::LEA_ADDiu_MM:
      dbgs() << "LEA_ADDiu_MM: 	(set GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::LH:
      dbgs() << "LH: 	(set GPR32Opnd:{}:$rt, (sextloadi16:{} addrDefault:{}:$addr))";
      break;
    case Mips::LH64:
      dbgs() << "LH64: 	(set GPR64Opnd:{}:$rt, (sextloadi16:{} addr:{}:$addr))";
      break;
    case Mips::LHX:
      dbgs() << "LHX: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4438:{}, iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::LHX_MM:
      dbgs() << "LHX_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4438:{}, iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::LH_MM:
      dbgs() << "LH_MM: 	(set GPR32Opnd:{}:$rt, (sextloadi16:{} addrDefault:{}:$addr))";
      break;
    case Mips::LHu:
      dbgs() << "LHu: 	(set GPR32Opnd:{}:$rt, (zextloadi16:{} addr:{}:$addr))";
      break;
    case Mips::LHu64:
      dbgs() << "LHu64: 	(set GPR64Opnd:{}:$rt, (zextloadi16:{} addr:{}:$addr))";
      break;
    case Mips::LHu_MM:
      dbgs() << "LHu_MM: 	(set GPR32Opnd:{}:$rt, (zextloadi16:{} addr:{}:$addr))";
      break;
    case Mips::LSA:
      dbgs() << "LSA: 	(set GPR32Opnd:{}:$rd, (add:{} GPR32Opnd:{}:$rt, (shl:{} GPR32Opnd:{}:$rs, (immZExt2Lsa:{}):$sa)))";
      break;
    case Mips::LW:
      dbgs() << "LW: 	(set GPR32Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LW64:
      dbgs() << "LW64: 	(set GPR64Opnd:{}:$rt, (sextloadi32:{} addr:{}:$addr))";
      break;
    case Mips::LWC1:
      dbgs() << "LWC1: 	(set FGR32Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LWC1_MM:
      dbgs() << "LWC1_MM: 	(set FGR32Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LWC2:
      dbgs() << "LWC2: 	(set COP2Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LWC2_MMR6:
      dbgs() << "LWC2_MMR6: 	(set COP2Opnd:{}:$rt, (load:{} addrimm11:{}:$addr))";
      break;
    case Mips::LWC3:
      dbgs() << "LWC3: 	(set COP3Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LWL:
      dbgs() << "LWL: 	(set GPR32Opnd:{}:$rt, (MipsLWL:{} addr:{}:$addr, GPR32Opnd:{}:$src))";
      break;
    case Mips::LWL64:
      dbgs() << "LWL64: 	(set GPR64Opnd:{}:$rt, (MipsLWL:{} addr:{}:$addr, GPR64Opnd:{}:$src))";
      break;
    case Mips::LWLE_MM:
      dbgs() << "LWLE_MM: 	(set GPR32Opnd:{}:$rt, (MipsLWL:{} addrimm12:{}:$addr, GPR32Opnd:{}:$src))";
      break;
    case Mips::LWL_MM:
      dbgs() << "LWL_MM: 	(set GPR32Opnd:{}:$rt, (MipsLWL:{} addrimm12:{}:$addr, GPR32Opnd:{}:$src))";
      break;
    case Mips::LWR:
      dbgs() << "LWR: 	(set GPR32Opnd:{}:$rt, (MipsLWR:{} addr:{}:$addr, GPR32Opnd:{}:$src))";
      break;
    case Mips::LWR64:
      dbgs() << "LWR64: 	(set GPR64Opnd:{}:$rt, (MipsLWR:{} addr:{}:$addr, GPR64Opnd:{}:$src))";
      break;
    case Mips::LWRE_MM:
      dbgs() << "LWRE_MM: 	(set GPR32Opnd:{}:$rt, (MipsLWR:{} addrimm12:{}:$addr, GPR32Opnd:{}:$src))";
      break;
    case Mips::LWR_MM:
      dbgs() << "LWR_MM: 	(set GPR32Opnd:{}:$rt, (MipsLWR:{} addrimm12:{}:$addr, GPR32Opnd:{}:$src))";
      break;
    case Mips::LWU_MM:
      dbgs() << "LWU_MM: 	(set GPR32Opnd:{}:$rt, (zextloadi32:{} addrimm12:{}:$addr))";
      break;
    case Mips::LWX:
      dbgs() << "LWX: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4440:{}, iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::LWXC1:
      dbgs() << "LWXC1: 	(set FGR32Opnd:{}:$fd, (load:{} (add:{} iPTR:{}:$base, iPTR:{}:$index)))";
      break;
    case Mips::LWXC1_MM:
      dbgs() << "LWXC1_MM: 	(set FGR32Opnd:{}:$fd, (load:{} (add:{} iPTR:{}:$base, iPTR:{}:$index)))";
      break;
    case Mips::LWX_MM:
      dbgs() << "LWX_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4440:{}, iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::LW_MMR6:
      dbgs() << "LW_MMR6: 	(set GPR32Opnd:{}:$rt, (load:{} addrDefault:{}:$addr))";
      break;
    case Mips::LWu:
      dbgs() << "LWu: 	(set GPR64Opnd:{}:$rt, (zextloadi32:{} addr:{}:$addr))";
      break;
    case Mips::MADDR_Q_H:
      dbgs() << "MADDR_Q_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4444:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MADDR_Q_W:
      dbgs() << "MADDR_Q_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4445:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MADDU_DSP:
      dbgs() << "MADDU_DSP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAddu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MADDU_DSP_MM:
      dbgs() << "MADDU_DSP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAddu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MADDV_B:
      dbgs() << "MADDV_B: 	(set MSA128BOpnd:{}:$wd, (muladd:{} MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MADDV_D:
      dbgs() << "MADDV_D: 	(set MSA128DOpnd:{}:$wd, (muladd:{} MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MADDV_H:
      dbgs() << "MADDV_H: 	(set MSA128HOpnd:{}:$wd, (muladd:{} MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MADDV_W:
      dbgs() << "MADDV_W: 	(set MSA128WOpnd:{}:$wd, (muladd:{} MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MADD_D32:
      dbgs() << "MADD_D32: 	(set AFGR64Opnd:{}:$fd, (fadd:{} (fmul:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft), AFGR64Opnd:{}:$fr))";
      break;
    case Mips::MADD_D64:
      dbgs() << "MADD_D64: 	(set FGR64Opnd:{}:$fd, (fadd:{} (fmul:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft), FGR64Opnd:{}:$fr))";
      break;
    case Mips::MADD_DSP:
      dbgs() << "MADD_DSP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAdd:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MADD_DSP_MM:
      dbgs() << "MADD_DSP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAdd:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MADD_Q_H:
      dbgs() << "MADD_Q_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4442:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MADD_Q_W:
      dbgs() << "MADD_Q_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4443:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MADD_S:
      dbgs() << "MADD_S: 	(set FGR32Opnd:{}:$fd, (fadd:{} (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft), FGR32Opnd:{}:$fr))";
      break;
    case Mips::MAQ_SA_W_PHL:
      dbgs() << "MAQ_SA_W_PHL: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_SA_W_PHL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_SA_W_PHL_MM:
      dbgs() << "MAQ_SA_W_PHL_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_SA_W_PHL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_SA_W_PHR:
      dbgs() << "MAQ_SA_W_PHR: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_SA_W_PHR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_SA_W_PHR_MM:
      dbgs() << "MAQ_SA_W_PHR_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_SA_W_PHR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_S_W_PHL:
      dbgs() << "MAQ_S_W_PHL: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_S_W_PHL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_S_W_PHL_MM:
      dbgs() << "MAQ_S_W_PHL_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_S_W_PHL:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_S_W_PHR:
      dbgs() << "MAQ_S_W_PHR: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_S_W_PHR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAQ_S_W_PHR_MM:
      dbgs() << "MAQ_S_W_PHR_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMAQ_S_W_PHR:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MAXI_S_B:
      dbgs() << "MAXI_S_B: 	(set MSA128BOpnd:{}:$wd, (smax:{} MSA128BOpnd:{}:$ws, vsplati8_simm5:{}:$imm))";
      break;
    case Mips::MAXI_S_D:
      dbgs() << "MAXI_S_D: 	(set MSA128DOpnd:{}:$wd, (smax:{} MSA128DOpnd:{}:$ws, vsplati64_simm5:{}:$imm))";
      break;
    case Mips::MAXI_S_H:
      dbgs() << "MAXI_S_H: 	(set MSA128HOpnd:{}:$wd, (smax:{} MSA128HOpnd:{}:$ws, vsplati16_simm5:{}:$imm))";
      break;
    case Mips::MAXI_S_W:
      dbgs() << "MAXI_S_W: 	(set MSA128WOpnd:{}:$wd, (smax:{} MSA128WOpnd:{}:$ws, vsplati32_simm5:{}:$imm))";
      break;
    case Mips::MAXI_U_B:
      dbgs() << "MAXI_U_B: 	(set MSA128BOpnd:{}:$wd, (umax:{} MSA128BOpnd:{}:$ws, vsplati8_uimm5:{}:$imm))";
      break;
    case Mips::MAXI_U_D:
      dbgs() << "MAXI_U_D: 	(set MSA128DOpnd:{}:$wd, (umax:{} MSA128DOpnd:{}:$ws, vsplati64_uimm5:{}:$imm))";
      break;
    case Mips::MAXI_U_H:
      dbgs() << "MAXI_U_H: 	(set MSA128HOpnd:{}:$wd, (umax:{} MSA128HOpnd:{}:$ws, vsplati16_uimm5:{}:$imm))";
      break;
    case Mips::MAXI_U_W:
      dbgs() << "MAXI_U_W: 	(set MSA128WOpnd:{}:$wd, (umax:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$imm))";
      break;
    case Mips::MAX_A_B:
      dbgs() << "MAX_A_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4455:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MAX_A_D:
      dbgs() << "MAX_A_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4456:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MAX_A_H:
      dbgs() << "MAX_A_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4457:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MAX_A_W:
      dbgs() << "MAX_A_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4458:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MAX_S_B:
      dbgs() << "MAX_S_B: 	(set MSA128BOpnd:{}:$wd, (smax:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MAX_S_D:
      dbgs() << "MAX_S_D: 	(set MSA128DOpnd:{}:$wd, (smax:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MAX_S_H:
      dbgs() << "MAX_S_H: 	(set MSA128HOpnd:{}:$wd, (smax:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MAX_S_W:
      dbgs() << "MAX_S_W: 	(set MSA128WOpnd:{}:$wd, (smax:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MAX_U_B:
      dbgs() << "MAX_U_B: 	(set MSA128BOpnd:{}:$wd, (umax:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MAX_U_D:
      dbgs() << "MAX_U_D: 	(set MSA128DOpnd:{}:$wd, (umax:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MAX_U_H:
      dbgs() << "MAX_U_H: 	(set MSA128HOpnd:{}:$wd, (umax:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MAX_U_W:
      dbgs() << "MAX_U_W: 	(set MSA128WOpnd:{}:$wd, (umax:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MFC1:
      dbgs() << "MFC1: 	(set GPR32Opnd:{}:$rt, (bitconvert:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::MFC1_MM:
      dbgs() << "MFC1_MM: 	(set GPR32Opnd:{}:$rt, (bitconvert:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::MFC1_MMR6:
      dbgs() << "MFC1_MMR6: 	(set GPR32Opnd:{}:$rt, (bitconvert:{} FGR32Opnd:{}:$fs))";
      break;
    case Mips::MFHI_DSP:
      dbgs() << "MFHI_DSP: 	(set GPR32Opnd:{}:$rd, (MipsMFHI:{} ACC64DSPOpnd:{}:$ac))";
      break;
    case Mips::MFHI_DSP_MM:
      dbgs() << "MFHI_DSP_MM: 	(set GPR32Opnd:{}:$rs, (MipsMFHI:{} ACC64DSPOpnd:{}:$ac))";
      break;
    case Mips::MFLO_DSP:
      dbgs() << "MFLO_DSP: 	(set GPR32Opnd:{}:$rd, (MipsMFLO:{} ACC64DSPOpnd:{}:$ac))";
      break;
    case Mips::MFLO_DSP_MM:
      dbgs() << "MFLO_DSP_MM: 	(set GPR32Opnd:{}:$rs, (MipsMFLO:{} ACC64DSPOpnd:{}:$ac))";
      break;
    case Mips::MINI_S_B:
      dbgs() << "MINI_S_B: 	(set MSA128BOpnd:{}:$wd, (smin:{} MSA128BOpnd:{}:$ws, vsplati8_simm5:{}:$imm))";
      break;
    case Mips::MINI_S_D:
      dbgs() << "MINI_S_D: 	(set MSA128DOpnd:{}:$wd, (smin:{} MSA128DOpnd:{}:$ws, vsplati64_simm5:{}:$imm))";
      break;
    case Mips::MINI_S_H:
      dbgs() << "MINI_S_H: 	(set MSA128HOpnd:{}:$wd, (smin:{} MSA128HOpnd:{}:$ws, vsplati16_simm5:{}:$imm))";
      break;
    case Mips::MINI_S_W:
      dbgs() << "MINI_S_W: 	(set MSA128WOpnd:{}:$wd, (smin:{} MSA128WOpnd:{}:$ws, vsplati32_simm5:{}:$imm))";
      break;
    case Mips::MINI_U_B:
      dbgs() << "MINI_U_B: 	(set MSA128BOpnd:{}:$wd, (umin:{} MSA128BOpnd:{}:$ws, vsplati8_uimm5:{}:$imm))";
      break;
    case Mips::MINI_U_D:
      dbgs() << "MINI_U_D: 	(set MSA128DOpnd:{}:$wd, (umin:{} MSA128DOpnd:{}:$ws, vsplati64_uimm5:{}:$imm))";
      break;
    case Mips::MINI_U_H:
      dbgs() << "MINI_U_H: 	(set MSA128HOpnd:{}:$wd, (umin:{} MSA128HOpnd:{}:$ws, vsplati16_uimm5:{}:$imm))";
      break;
    case Mips::MINI_U_W:
      dbgs() << "MINI_U_W: 	(set MSA128WOpnd:{}:$wd, (umin:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$imm))";
      break;
    case Mips::MIN_A_B:
      dbgs() << "MIN_A_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4475:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MIN_A_D:
      dbgs() << "MIN_A_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4476:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MIN_A_H:
      dbgs() << "MIN_A_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4477:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MIN_A_W:
      dbgs() << "MIN_A_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4478:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MIN_S_B:
      dbgs() << "MIN_S_B: 	(set MSA128BOpnd:{}:$wd, (smin:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MIN_S_D:
      dbgs() << "MIN_S_D: 	(set MSA128DOpnd:{}:$wd, (smin:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MIN_S_H:
      dbgs() << "MIN_S_H: 	(set MSA128HOpnd:{}:$wd, (smin:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MIN_S_W:
      dbgs() << "MIN_S_W: 	(set MSA128WOpnd:{}:$wd, (smin:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MIN_U_B:
      dbgs() << "MIN_U_B: 	(set MSA128BOpnd:{}:$wd, (umin:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MIN_U_D:
      dbgs() << "MIN_U_D: 	(set MSA128DOpnd:{}:$wd, (umin:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MIN_U_H:
      dbgs() << "MIN_U_H: 	(set MSA128HOpnd:{}:$wd, (umin:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MIN_U_W:
      dbgs() << "MIN_U_W: 	(set MSA128WOpnd:{}:$wd, (umin:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MIPSeh_return32:
      dbgs() << "MIPSeh_return32: 	(MIPSehret GPR32:{}:$spoff, GPR32:{}:$dst)";
      break;
    case Mips::MIPSeh_return64:
      dbgs() << "MIPSeh_return64: 	(MIPSehret GPR64:{}:$spoff, GPR64:{}:$dst)";
      break;
    case Mips::MOD:
      dbgs() << "MOD: 	(set GPR32Opnd:{}:$rd, (srem:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MODSUB:
      dbgs() << "MODSUB: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4503:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MODSUB_MM:
      dbgs() << "MODSUB_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4503:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MODU:
      dbgs() << "MODU: 	(set GPR32Opnd:{}:$rd, (urem:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MODU_MMR6:
      dbgs() << "MODU_MMR6: 	(set GPR32Opnd:{}:$rd, (urem:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MOD_MMR6:
      dbgs() << "MOD_MMR6: 	(set GPR32Opnd:{}:$rd, (srem:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MOD_S_B:
      dbgs() << "MOD_S_B: 	(set MSA128BOpnd:{}:$wd, (srem:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MOD_S_D:
      dbgs() << "MOD_S_D: 	(set MSA128DOpnd:{}:$wd, (srem:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MOD_S_H:
      dbgs() << "MOD_S_H: 	(set MSA128HOpnd:{}:$wd, (srem:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MOD_S_W:
      dbgs() << "MOD_S_W: 	(set MSA128WOpnd:{}:$wd, (srem:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MOD_U_B:
      dbgs() << "MOD_U_B: 	(set MSA128BOpnd:{}:$wd, (urem:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MOD_U_D:
      dbgs() << "MOD_U_D: 	(set MSA128DOpnd:{}:$wd, (urem:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MOD_U_H:
      dbgs() << "MOD_U_H: 	(set MSA128HOpnd:{}:$wd, (urem:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MOD_U_W:
      dbgs() << "MOD_U_W: 	(set MSA128WOpnd:{}:$wd, (urem:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MOVF_D32:
      dbgs() << "MOVF_D32: 	(set AFGR64Opnd:{}:$fd, (MipsCMovFP_F:{} AFGR64Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, AFGR64Opnd:{}:$F))";
      break;
    case Mips::MOVF_D32_MM:
      dbgs() << "MOVF_D32_MM: 	(set AFGR64Opnd:{}:$fd, (MipsCMovFP_F:{} AFGR64Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, AFGR64Opnd:{}:$F))";
      break;
    case Mips::MOVF_D64:
      dbgs() << "MOVF_D64: 	(set FGR64Opnd:{}:$fd, (MipsCMovFP_F:{} FGR64Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, FGR64Opnd:{}:$F))";
      break;
    case Mips::MOVF_I:
      dbgs() << "MOVF_I: 	(set GPR32Opnd:{}:$rd, (MipsCMovFP_F:{} GPR32Opnd:{}:$rs, FCCRegsOpnd:{}:$fcc, GPR32Opnd:{}:$F))";
      break;
    case Mips::MOVF_I64:
      dbgs() << "MOVF_I64: 	(set GPR64Opnd:{}:$rd, (MipsCMovFP_F:{} GPR64Opnd:{}:$rs, FCCRegsOpnd:{}:$fcc, GPR64Opnd:{}:$F))";
      break;
    case Mips::MOVF_I_MM:
      dbgs() << "MOVF_I_MM: 	(set GPR32Opnd:{}:$rd, (MipsCMovFP_F:{} GPR32Opnd:{}:$rs, FCCRegsOpnd:{}:$fcc, GPR32Opnd:{}:$F))";
      break;
    case Mips::MOVF_S:
      dbgs() << "MOVF_S: 	(set FGR32Opnd:{}:$fd, (MipsCMovFP_F:{} FGR32Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, FGR32Opnd:{}:$F))";
      break;
    case Mips::MOVF_S_MM:
      dbgs() << "MOVF_S_MM: 	(set FGR32Opnd:{}:$fd, (MipsCMovFP_F:{} FGR32Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, FGR32Opnd:{}:$F))";
      break;
    case Mips::MOVT_D32:
      dbgs() << "MOVT_D32: 	(set AFGR64Opnd:{}:$fd, (MipsCMovFP_T:{} AFGR64Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, AFGR64Opnd:{}:$F))";
      break;
    case Mips::MOVT_D32_MM:
      dbgs() << "MOVT_D32_MM: 	(set AFGR64Opnd:{}:$fd, (MipsCMovFP_T:{} AFGR64Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, AFGR64Opnd:{}:$F))";
      break;
    case Mips::MOVT_D64:
      dbgs() << "MOVT_D64: 	(set FGR64Opnd:{}:$fd, (MipsCMovFP_T:{} FGR64Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, FGR64Opnd:{}:$F))";
      break;
    case Mips::MOVT_I:
      dbgs() << "MOVT_I: 	(set GPR32Opnd:{}:$rd, (MipsCMovFP_T:{} GPR32Opnd:{}:$rs, FCCRegsOpnd:{}:$fcc, GPR32Opnd:{}:$F))";
      break;
    case Mips::MOVT_I64:
      dbgs() << "MOVT_I64: 	(set GPR64Opnd:{}:$rd, (MipsCMovFP_T:{} GPR64Opnd:{}:$rs, FCCRegsOpnd:{}:$fcc, GPR64Opnd:{}:$F))";
      break;
    case Mips::MOVT_I_MM:
      dbgs() << "MOVT_I_MM: 	(set GPR32Opnd:{}:$rd, (MipsCMovFP_T:{} GPR32Opnd:{}:$rs, FCCRegsOpnd:{}:$fcc, GPR32Opnd:{}:$F))";
      break;
    case Mips::MOVT_S:
      dbgs() << "MOVT_S: 	(set FGR32Opnd:{}:$fd, (MipsCMovFP_T:{} FGR32Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, FGR32Opnd:{}:$F))";
      break;
    case Mips::MOVT_S_MM:
      dbgs() << "MOVT_S_MM: 	(set FGR32Opnd:{}:$fd, (MipsCMovFP_T:{} FGR32Opnd:{}:$fs, FCCRegsOpnd:{}:$fcc, FGR32Opnd:{}:$F))";
      break;
    case Mips::MSA_FP_EXTEND_D_PSEUDO:
      dbgs() << "MSA_FP_EXTEND_D_PSEUDO: 	(set FGR64Opnd:{}:$fd, (fpextend:{ *:[f64] } MSA128F16:{}:$ws))";
      break;
    case Mips::MSA_FP_EXTEND_W_PSEUDO:
      dbgs() << "MSA_FP_EXTEND_W_PSEUDO: 	(set FGR32Opnd:{}:$fd, (fpextend:{ *:[f32] } MSA128F16:{}:$ws))";
      break;
    case Mips::MSA_FP_ROUND_D_PSEUDO:
      dbgs() << "MSA_FP_ROUND_D_PSEUDO: 	(set MSA128F16:{}:$wd, (fpround:{ *:[f16] } FGR64Opnd:{}:$fs))";
      break;
    case Mips::MSA_FP_ROUND_W_PSEUDO:
      dbgs() << "MSA_FP_ROUND_W_PSEUDO: 	(set MSA128F16:{}:$wd, (fpround:{ *:[f16] } FGR32Opnd:{}:$fs))";
      break;
    case Mips::MSUBR_Q_H:
      dbgs() << "MSUBR_Q_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4508:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MSUBR_Q_W:
      dbgs() << "MSUBR_Q_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4509:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MSUBU_DSP:
      dbgs() << "MSUBU_DSP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMSubu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MSUBU_DSP_MM:
      dbgs() << "MSUBU_DSP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMSubu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MSUBV_B:
      dbgs() << "MSUBV_B: 	(set MSA128BOpnd:{}:$wd, (mulsub:{} MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MSUBV_D:
      dbgs() << "MSUBV_D: 	(set MSA128DOpnd:{}:$wd, (mulsub:{} MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MSUBV_H:
      dbgs() << "MSUBV_H: 	(set MSA128HOpnd:{}:$wd, (mulsub:{} MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MSUBV_W:
      dbgs() << "MSUBV_W: 	(set MSA128WOpnd:{}:$wd, (mulsub:{} MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MSUB_D32:
      dbgs() << "MSUB_D32: 	(set AFGR64Opnd:{}:$fd, (fsub:{} (fmul:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft), AFGR64Opnd:{}:$fr))";
      break;
    case Mips::MSUB_D64:
      dbgs() << "MSUB_D64: 	(set FGR64Opnd:{}:$fd, (fsub:{} (fmul:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft), FGR64Opnd:{}:$fr))";
      break;
    case Mips::MSUB_DSP:
      dbgs() << "MSUB_DSP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMSub:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MSUB_DSP_MM:
      dbgs() << "MSUB_DSP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMSub:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MSUB_Q_H:
      dbgs() << "MSUB_Q_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4506:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MSUB_Q_W:
      dbgs() << "MSUB_Q_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4507:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MSUB_S:
      dbgs() << "MSUB_S: 	(set FGR32Opnd:{}:$fd, (fsub:{} (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft), FGR32Opnd:{}:$fr))";
      break;
    case Mips::MTC1:
      dbgs() << "MTC1: 	(set FGR32Opnd:{}:$fs, (bitconvert:{} GPR32Opnd:{}:$rt))";
      break;
    case Mips::MTC1_MM:
      dbgs() << "MTC1_MM: 	(set FGR32Opnd:{}:$fs, (bitconvert:{} GPR32Opnd:{}:$rt))";
      break;
    case Mips::MTC1_MMR6:
      dbgs() << "MTC1_MMR6: 	(set FGR32Opnd:{}:$fs, (bitconvert:{} GPR32Opnd:{}:$rt))";
      break;
    case Mips::MTHLIP:
      dbgs() << "MTHLIP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMTHLIP:{} GPR32Opnd:{}:$rs, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MTHLIP_MM:
      dbgs() << "MTHLIP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMTHLIP:{} GPR32Opnd:{}:$rs, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MUH:
      dbgs() << "MUH: 	(set GPR32Opnd:{}:$rd, (mulhs:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUHU:
      dbgs() << "MUHU: 	(set GPR32Opnd:{}:$rd, (mulhu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUHU_MMR6:
      dbgs() << "MUHU_MMR6: 	(set GPR32Opnd:{}:$rd, (mulhu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUH_MMR6:
      dbgs() << "MUH_MMR6: 	(set GPR32Opnd:{}:$rd, (mulhs:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUL:
      dbgs() << "MUL: 	(set GPR32Opnd:{}:$rd, (mul:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULEQ_S_W_PHL:
      dbgs() << "MULEQ_S_W_PHL: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4520:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEQ_S_W_PHL_MM:
      dbgs() << "MULEQ_S_W_PHL_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4520:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEQ_S_W_PHR:
      dbgs() << "MULEQ_S_W_PHR: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4521:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEQ_S_W_PHR_MM:
      dbgs() << "MULEQ_S_W_PHR_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4521:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEU_S_PH_QBL:
      dbgs() << "MULEU_S_PH_QBL: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4522:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEU_S_PH_QBL_MM:
      dbgs() << "MULEU_S_PH_QBL_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4522:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEU_S_PH_QBR:
      dbgs() << "MULEU_S_PH_QBR: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4523:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULEU_S_PH_QBR_MM:
      dbgs() << "MULEU_S_PH_QBR_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4523:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULQ_RS_PH:
      dbgs() << "MULQ_RS_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4524:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULQ_RS_PH_MM:
      dbgs() << "MULQ_RS_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4524:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULQ_RS_W:
      dbgs() << "MULQ_RS_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4525:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULQ_RS_W_MMR2:
      dbgs() << "MULQ_RS_W_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4525:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULQ_S_PH:
      dbgs() << "MULQ_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4526:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULQ_S_PH_MMR2:
      dbgs() << "MULQ_S_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4526:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MULQ_S_W:
      dbgs() << "MULQ_S_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4527:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULQ_S_W_MMR2:
      dbgs() << "MULQ_S_W_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4527:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULR_Q_H:
      dbgs() << "MULR_Q_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4528:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MULR_Q_W:
      dbgs() << "MULR_Q_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4529:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MULSAQ_S_W_PH:
      dbgs() << "MULSAQ_S_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsMULSAQ_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MULSAQ_S_W_PH_MM:
      dbgs() << "MULSAQ_S_W_PH_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMULSAQ_S_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MULSA_W_PH:
      dbgs() << "MULSA_W_PH: 	(set ACC64DSPOpnd:{}:$ac, (MipsMULSA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MULSA_W_PH_MMR2:
      dbgs() << "MULSA_W_PH_MMR2: 	(set ACC64DSPOpnd:{}:$ac, (MipsMULSA_W_PH:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::MULTU_DSP:
      dbgs() << "MULTU_DSP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMultu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULTU_DSP_MM:
      dbgs() << "MULTU_DSP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMultu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULT_DSP:
      dbgs() << "MULT_DSP: 	(set ACC64DSPOpnd:{}:$ac, (MipsMult:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULT_DSP_MM:
      dbgs() << "MULT_DSP_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsMult:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MULV_B:
      dbgs() << "MULV_B: 	(set MSA128BOpnd:{}:$wd, (mul:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::MULV_D:
      dbgs() << "MULV_D: 	(set MSA128DOpnd:{}:$wd, (mul:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::MULV_H:
      dbgs() << "MULV_H: 	(set MSA128HOpnd:{}:$wd, (mul:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MULV_W:
      dbgs() << "MULV_W: 	(set MSA128WOpnd:{}:$wd, (mul:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MUL_MM:
      dbgs() << "MUL_MM: 	(set GPR32Opnd:{}:$rd, (mul:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUL_MMR6:
      dbgs() << "MUL_MMR6: 	(set GPR32Opnd:{}:$rd, (mul:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUL_Q_H:
      dbgs() << "MUL_Q_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4517:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::MUL_Q_W:
      dbgs() << "MUL_Q_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4518:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::MUL_R6:
      dbgs() << "MUL_R6: 	(set GPR32Opnd:{}:$rd, (mul:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::MUL_S_PH:
      dbgs() << "MUL_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4519:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::MUL_S_PH_MMR2:
      dbgs() << "MUL_S_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4519:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::NLOC_B:
      dbgs() << "NLOC_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4538:{}, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::NLOC_D:
      dbgs() << "NLOC_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4539:{}, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::NLOC_H:
      dbgs() << "NLOC_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4540:{}, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::NLOC_W:
      dbgs() << "NLOC_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4541:{}, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::NLZC_B:
      dbgs() << "NLZC_B: 	(set MSA128BOpnd:{}:$wd, (ctlz:{} MSA128BOpnd:{}:$ws))";
      break;
    case Mips::NLZC_D:
      dbgs() << "NLZC_D: 	(set MSA128DOpnd:{}:$wd, (ctlz:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::NLZC_H:
      dbgs() << "NLZC_H: 	(set MSA128HOpnd:{}:$wd, (ctlz:{} MSA128HOpnd:{}:$ws))";
      break;
    case Mips::NLZC_W:
      dbgs() << "NLZC_W: 	(set MSA128WOpnd:{}:$wd, (ctlz:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::NMADD_D32:
      dbgs() << "NMADD_D32: 	(set AFGR64Opnd:{}:$fd, (fsub:{} (fpimm0:{}), (fadd:{} (fmul:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft), AFGR64Opnd:{}:$fr)))";
      break;
    case Mips::NMADD_D64:
      dbgs() << "NMADD_D64: 	(set FGR64Opnd:{}:$fd, (fsub:{} (fpimm0:{}), (fadd:{} (fmul:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft), FGR64Opnd:{}:$fr)))";
      break;
    case Mips::NMADD_S:
      dbgs() << "NMADD_S: 	(set FGR32Opnd:{}:$fd, (fsub:{} (fpimm0:{}), (fadd:{} (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft), FGR32Opnd:{}:$fr)))";
      break;
    case Mips::NMSUB_D32:
      dbgs() << "NMSUB_D32: 	(set AFGR64Opnd:{}:$fd, (fsub:{} (fpimm0:{}), (fsub:{} (fmul:{} AFGR64Opnd:{}:$fs, AFGR64Opnd:{}:$ft), AFGR64Opnd:{}:$fr)))";
      break;
    case Mips::NMSUB_D64:
      dbgs() << "NMSUB_D64: 	(set FGR64Opnd:{}:$fd, (fsub:{} (fpimm0:{}), (fsub:{} (fmul:{} FGR64Opnd:{}:$fs, FGR64Opnd:{}:$ft), FGR64Opnd:{}:$fr)))";
      break;
    case Mips::NMSUB_S:
      dbgs() << "NMSUB_S: 	(set FGR32Opnd:{}:$fd, (fsub:{} (fpimm0:{}), (fsub:{} (fmul:{} FGR32Opnd:{}:$fs, FGR32Opnd:{}:$ft), FGR32Opnd:{}:$fr)))";
      break;
    case Mips::NOR:
      dbgs() << "NOR: 	(set GPR32Opnd:{}:$rd, (not:{} (or:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt)))";
      break;
    case Mips::NOR64:
      dbgs() << "NOR64: 	(set GPR64Opnd:{}:$rd, (not:{} (or:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt)))";
      break;
    case Mips::NORI_B:
      dbgs() << "NORI_B: 	(set MSA128BOpnd:{}:$wd, (MipsVNOR:{} MSA128BOpnd:{}:$ws, vsplati8_uimm8:{}:$u8))";
      break;
    case Mips::NOR_MM:
      dbgs() << "NOR_MM: 	(set GPR32Opnd:{}:$rd, (not:{} (or:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt)))";
      break;
    case Mips::NOR_MMR6:
      dbgs() << "NOR_MMR6: 	(set GPR32Opnd:{}:$rd, (not:{} (or:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt)))";
      break;
    case Mips::NOR_V:
      dbgs() << "NOR_V: 	(set MSA128BOpnd:{}:$wd, (MipsVNOR:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::NOR_V_D_PSEUDO:
      dbgs() << "NOR_V_D_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (MipsVNOR:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::NOR_V_H_PSEUDO:
      dbgs() << "NOR_V_H_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (MipsVNOR:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::NOR_V_W_PSEUDO:
      dbgs() << "NOR_V_W_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (MipsVNOR:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::NOT16_MM:
      dbgs() << "NOT16_MM: 	(set GPRMM16Opnd:{}:$rt, (not:{} GPRMM16Opnd:{}:$rs))";
      break;
    case Mips::NOT16_MMR6:
      dbgs() << "NOT16_MMR6: 	(set GPRMM16Opnd:{}:$rt, (not:{} GPRMM16Opnd:{}:$rs))";
      break;
    case Mips::OR:
      dbgs() << "OR: 	(set GPR32Opnd:{}:$rd, (or:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::OR16_MM:
      dbgs() << "OR16_MM: 	(set GPRMM16Opnd:{}:$dst, (or:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::OR64:
      dbgs() << "OR64: 	(set GPR64Opnd:{}:$rd, (or:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::ORI_B:
      dbgs() << "ORI_B: 	(set MSA128BOpnd:{}:$wd, (or:{} MSA128BOpnd:{}:$ws, vsplati8_uimm8:{}:$u8))";
      break;
    case Mips::ORI_MMR6:
      dbgs() << "ORI_MMR6: 	(set GPR32Opnd:{}:$rt, (or:{} GPR32Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;
    case Mips::OR_MM:
      dbgs() << "OR_MM: 	(set GPR32Opnd:{}:$rd, (or:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::OR_MMR6:
      dbgs() << "OR_MMR6: 	(set GPR32Opnd:{}:$rd, (or:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::OR_V:
      dbgs() << "OR_V: 	(set MSA128BOpnd:{}:$wd, (or:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::OR_V_D_PSEUDO:
      dbgs() << "OR_V_D_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (or:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::OR_V_H_PSEUDO:
      dbgs() << "OR_V_H_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (or:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::OR_V_W_PSEUDO:
      dbgs() << "OR_V_W_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (or:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::ORi:
      dbgs() << "ORi: 	(set GPR32Opnd:{}:$rt, (or:{} GPR32Opnd:{}:$rs, (imm32ZExt16:{}):$imm16))";
      break;
    case Mips::ORi64:
      dbgs() << "ORi64: 	(set GPR64Opnd:{}:$rt, (or:{} GPR64Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;
    case Mips::ORi_MM:
      dbgs() << "ORi_MM: 	(set GPR32Opnd:{}:$rt, (or:{} GPR32Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;
    case Mips::PACKRL_PH:
      dbgs() << "PACKRL_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4550:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PACKRL_PH_MM:
      dbgs() << "PACKRL_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4550:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PCKEV_B:
      dbgs() << "PCKEV_B: 	(set MSA128BOpnd:{}:$wd, (MipsPCKEV:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::PCKEV_D:
      dbgs() << "PCKEV_D: 	(set MSA128DOpnd:{}:$wd, (MipsPCKEV:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::PCKEV_H:
      dbgs() << "PCKEV_H: 	(set MSA128HOpnd:{}:$wd, (MipsPCKEV:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::PCKEV_W:
      dbgs() << "PCKEV_W: 	(set MSA128WOpnd:{}:$wd, (MipsPCKEV:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::PCKOD_B:
      dbgs() << "PCKOD_B: 	(set MSA128BOpnd:{}:$wd, (MipsPCKOD:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::PCKOD_D:
      dbgs() << "PCKOD_D: 	(set MSA128DOpnd:{}:$wd, (MipsPCKOD:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::PCKOD_H:
      dbgs() << "PCKOD_H: 	(set MSA128HOpnd:{}:$wd, (MipsPCKOD:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::PCKOD_W:
      dbgs() << "PCKOD_W: 	(set MSA128WOpnd:{}:$wd, (MipsPCKOD:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::PCNT_B:
      dbgs() << "PCNT_B: 	(set MSA128BOpnd:{}:$wd, (ctpop:{} MSA128BOpnd:{}:$ws))";
      break;
    case Mips::PCNT_D:
      dbgs() << "PCNT_D: 	(set MSA128DOpnd:{}:$wd, (ctpop:{} MSA128DOpnd:{}:$ws))";
      break;
    case Mips::PCNT_H:
      dbgs() << "PCNT_H: 	(set MSA128HOpnd:{}:$wd, (ctpop:{} MSA128HOpnd:{}:$ws))";
      break;
    case Mips::PCNT_W:
      dbgs() << "PCNT_W: 	(set MSA128WOpnd:{}:$wd, (ctpop:{} MSA128WOpnd:{}:$ws))";
      break;
    case Mips::PICK_PH:
      dbgs() << "PICK_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4563:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PICK_PH_MM:
      dbgs() << "PICK_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4563:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PICK_QB:
      dbgs() << "PICK_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4564:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PICK_QB_MM:
      dbgs() << "PICK_QB_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4564:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::POP:
      dbgs() << "POP: 	(set GPR32Opnd:{}:$rd, (ctpop:{} GPR32Opnd:{}:$rs))";
      break;
    case Mips::PRECEQU_PH_QBL:
      dbgs() << "PRECEQU_PH_QBL: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4567:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEQU_PH_QBLA:
      dbgs() << "PRECEQU_PH_QBLA: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4568:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEQU_PH_QBLA_MM:
      dbgs() << "PRECEQU_PH_QBLA_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4568:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEQU_PH_QBL_MM:
      dbgs() << "PRECEQU_PH_QBL_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4567:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEQU_PH_QBR:
      dbgs() << "PRECEQU_PH_QBR: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4569:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEQU_PH_QBRA:
      dbgs() << "PRECEQU_PH_QBRA: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4570:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEQU_PH_QBRA_MM:
      dbgs() << "PRECEQU_PH_QBRA_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4570:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEQU_PH_QBR_MM:
      dbgs() << "PRECEQU_PH_QBR_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4569:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEQ_W_PHL:
      dbgs() << "PRECEQ_W_PHL: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4565:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEQ_W_PHL_MM:
      dbgs() << "PRECEQ_W_PHL_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4565:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEQ_W_PHR:
      dbgs() << "PRECEQ_W_PHR: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4566:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEQ_W_PHR_MM:
      dbgs() << "PRECEQ_W_PHR_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4566:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEU_PH_QBL:
      dbgs() << "PRECEU_PH_QBL: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4571:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEU_PH_QBLA:
      dbgs() << "PRECEU_PH_QBLA: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4572:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEU_PH_QBLA_MM:
      dbgs() << "PRECEU_PH_QBLA_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4572:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEU_PH_QBL_MM:
      dbgs() << "PRECEU_PH_QBL_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4571:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEU_PH_QBR:
      dbgs() << "PRECEU_PH_QBR: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4573:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEU_PH_QBRA:
      dbgs() << "PRECEU_PH_QBRA: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4574:{}, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECEU_PH_QBRA_MM:
      dbgs() << "PRECEU_PH_QBRA_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4574:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECEU_PH_QBR_MM:
      dbgs() << "PRECEU_PH_QBR_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4573:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::PRECRQU_S_QB_PH:
      dbgs() << "PRECRQU_S_QB_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4581:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECRQU_S_QB_PH_MM:
      dbgs() << "PRECRQU_S_QB_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4581:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECRQ_PH_W:
      dbgs() << "PRECRQ_PH_W: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4578:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PRECRQ_PH_W_MM:
      dbgs() << "PRECRQ_PH_W_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4578:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PRECRQ_QB_PH:
      dbgs() << "PRECRQ_QB_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4579:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECRQ_QB_PH_MM:
      dbgs() << "PRECRQ_QB_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4579:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECRQ_RS_PH_W:
      dbgs() << "PRECRQ_RS_PH_W: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4580:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PRECRQ_RS_PH_W_MM:
      dbgs() << "PRECRQ_RS_PH_W_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4580:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PRECR_QB_PH:
      dbgs() << "PRECR_QB_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4575:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECR_QB_PH_MMR2:
      dbgs() << "PRECR_QB_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4575:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::PRECR_SRA_PH_W:
      dbgs() << "PRECR_SRA_PH_W: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4576:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::PRECR_SRA_PH_W_MMR2:
      dbgs() << "PRECR_SRA_PH_W_MMR2: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4576:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::PRECR_SRA_R_PH_W:
      dbgs() << "PRECR_SRA_R_PH_W: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4577:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::PRECR_SRA_R_PH_W_MMR2:
      dbgs() << "PRECR_SRA_R_PH_W_MMR2: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4577:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::PREPEND:
      dbgs() << "PREPEND: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4582:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::PREPEND_MMR2:
      dbgs() << "PREPEND_MMR2: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4582:{}, GPR32Opnd:{}:$src, GPR32Opnd:{}:$rs, (timmZExt5:{}):$sa))";
      break;
    case Mips::PseudoDMULT:
      dbgs() << "PseudoDMULT: 	(set ACC128:{}:$ac, (MipsMult:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::PseudoDMULTu:
      dbgs() << "PseudoDMULTu: 	(set ACC128:{}:$ac, (MipsMultu:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::PseudoDSDIV:
      dbgs() << "PseudoDSDIV: 	(set ACC128:{}:$ac, (MipsDivRem:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::PseudoDUDIV:
      dbgs() << "PseudoDUDIV: 	(set ACC128:{}:$ac, (MipsDivRemU:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::PseudoIndirectBranch:
      dbgs() << "PseudoIndirectBranch: 	(brind GPR32Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectBranch64:
      dbgs() << "PseudoIndirectBranch64: 	(brind GPR64Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectBranch64R6:
      dbgs() << "PseudoIndirectBranch64R6: 	(brind GPR64Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectBranchR6:
      dbgs() << "PseudoIndirectBranchR6: 	(brind GPR32Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectBranch_MM:
      dbgs() << "PseudoIndirectBranch_MM: 	(brind GPR32Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectBranch_MMR6:
      dbgs() << "PseudoIndirectBranch_MMR6: 	(brind GPR32Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectHazardBranch:
      dbgs() << "PseudoIndirectHazardBranch: 	(brind GPR32Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndirectHazardBranch64:
      dbgs() << "PseudoIndirectHazardBranch64: 	(brind GPR64Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndrectHazardBranch64R6:
      dbgs() << "PseudoIndrectHazardBranch64R6: 	(brind GPR64Opnd:{}:$rs)";
      break;
    case Mips::PseudoIndrectHazardBranchR6:
      dbgs() << "PseudoIndrectHazardBranchR6: 	(brind GPR32Opnd:{}:$rs)";
      break;
    case Mips::PseudoMADD:
      dbgs() << "PseudoMADD: 	(set ACC64:{}:$ac, (MipsMAdd:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMADDU:
      dbgs() << "PseudoMADDU: 	(set ACC64:{}:$ac, (MipsMAddu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMADDU_MM:
      dbgs() << "PseudoMADDU_MM: 	(set ACC64:{}:$ac, (MipsMAddu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMADD_MM:
      dbgs() << "PseudoMADD_MM: 	(set ACC64:{}:$ac, (MipsMAdd:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMFHI:
      dbgs() << "PseudoMFHI: 	(set GPR32:{}:$rd, (MipsMFHI:{} ACC64:{}:$hilo))";
      break;
    case Mips::PseudoMFHI64:
      dbgs() << "PseudoMFHI64: 	(set GPR64:{}:$rd, (MipsMFHI:{} ACC128:{}:$hilo))";
      break;
    case Mips::PseudoMFHI_MM:
      dbgs() << "PseudoMFHI_MM: 	(set GPR32:{}:$rd, (MipsMFHI:{} ACC64:{}:$hilo))";
      break;
    case Mips::PseudoMFLO:
      dbgs() << "PseudoMFLO: 	(set GPR32:{}:$rd, (MipsMFLO:{} ACC64:{}:$hilo))";
      break;
    case Mips::PseudoMFLO64:
      dbgs() << "PseudoMFLO64: 	(set GPR64:{}:$rd, (MipsMFLO:{} ACC128:{}:$hilo))";
      break;
    case Mips::PseudoMFLO_MM:
      dbgs() << "PseudoMFLO_MM: 	(set GPR32:{}:$rd, (MipsMFLO:{} ACC64:{}:$hilo))";
      break;
    case Mips::PseudoMSUB:
      dbgs() << "PseudoMSUB: 	(set ACC64:{}:$ac, (MipsMSub:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMSUBU:
      dbgs() << "PseudoMSUBU: 	(set ACC64:{}:$ac, (MipsMSubu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMSUBU_MM:
      dbgs() << "PseudoMSUBU_MM: 	(set ACC64:{}:$ac, (MipsMSubu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMSUB_MM:
      dbgs() << "PseudoMSUB_MM: 	(set ACC64:{}:$ac, (MipsMSub:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt, ACC64:{}:$acin))";
      break;
    case Mips::PseudoMTLOHI:
      dbgs() << "PseudoMTLOHI: 	(set ACC64:{}:$lohi, (MipsMTLOHI:{} GPR32:{}:$lo, GPR32:{}:$hi))";
      break;
    case Mips::PseudoMTLOHI64:
      dbgs() << "PseudoMTLOHI64: 	(set ACC128:{}:$lohi, (MipsMTLOHI:{} GPR64:{}:$lo, GPR64:{}:$hi))";
      break;
    case Mips::PseudoMTLOHI_DSP:
      dbgs() << "PseudoMTLOHI_DSP: 	(set ACC64DSP:{}:$lohi, (MipsMTLOHI:{} GPR32:{}:$lo, GPR32:{}:$hi))";
      break;
    case Mips::PseudoMTLOHI_MM:
      dbgs() << "PseudoMTLOHI_MM: 	(set ACC64:{}:$lohi, (MipsMTLOHI:{} GPR32:{}:$lo, GPR32:{}:$hi))";
      break;
    case Mips::PseudoMULT:
      dbgs() << "PseudoMULT: 	(set ACC64:{}:$ac, (MipsMult:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PseudoMULT_MM:
      dbgs() << "PseudoMULT_MM: 	(set ACC64:{}:$ac, (MipsMult:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PseudoMULTu:
      dbgs() << "PseudoMULTu: 	(set ACC64:{}:$ac, (MipsMultu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PseudoMULTu_MM:
      dbgs() << "PseudoMULTu_MM: 	(set ACC64:{}:$ac, (MipsMultu:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PseudoSDIV:
      dbgs() << "PseudoSDIV: 	(set ACC64:{}:$ac, (MipsDivRem:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::PseudoSELECTFP_F_D32:
      dbgs() << "PseudoSELECTFP_F_D32: 	(set AFGR64Opnd:{}:$dst, (MipsCMovFP_F:{} AFGR64Opnd:{}:$T, FCCRegsOpnd:{}:$cond, AFGR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_F_D64:
      dbgs() << "PseudoSELECTFP_F_D64: 	(set FGR64Opnd:{}:$dst, (MipsCMovFP_F:{} FGR64Opnd:{}:$T, FCCRegsOpnd:{}:$cond, FGR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_F_I:
      dbgs() << "PseudoSELECTFP_F_I: 	(set GPR32Opnd:{}:$dst, (MipsCMovFP_F:{} GPR32Opnd:{}:$T, FCCRegsOpnd:{}:$cond, GPR32Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_F_I64:
      dbgs() << "PseudoSELECTFP_F_I64: 	(set GPR64Opnd:{}:$dst, (MipsCMovFP_F:{} GPR64Opnd:{}:$T, FCCRegsOpnd:{}:$cond, GPR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_F_S:
      dbgs() << "PseudoSELECTFP_F_S: 	(set FGR32Opnd:{}:$dst, (MipsCMovFP_F:{} FGR32Opnd:{}:$T, FCCRegsOpnd:{}:$cond, FGR32Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_T_D32:
      dbgs() << "PseudoSELECTFP_T_D32: 	(set AFGR64Opnd:{}:$dst, (MipsCMovFP_T:{} AFGR64Opnd:{}:$T, FCCRegsOpnd:{}:$cond, AFGR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_T_D64:
      dbgs() << "PseudoSELECTFP_T_D64: 	(set FGR64Opnd:{}:$dst, (MipsCMovFP_T:{} FGR64Opnd:{}:$T, FCCRegsOpnd:{}:$cond, FGR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_T_I:
      dbgs() << "PseudoSELECTFP_T_I: 	(set GPR32Opnd:{}:$dst, (MipsCMovFP_T:{} GPR32Opnd:{}:$T, FCCRegsOpnd:{}:$cond, GPR32Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_T_I64:
      dbgs() << "PseudoSELECTFP_T_I64: 	(set GPR64Opnd:{}:$dst, (MipsCMovFP_T:{} GPR64Opnd:{}:$T, FCCRegsOpnd:{}:$cond, GPR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECTFP_T_S:
      dbgs() << "PseudoSELECTFP_T_S: 	(set FGR32Opnd:{}:$dst, (MipsCMovFP_T:{} FGR32Opnd:{}:$T, FCCRegsOpnd:{}:$cond, FGR32Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECT_D32:
      dbgs() << "PseudoSELECT_D32: 	(set AFGR64Opnd:{}:$dst, (select:{} GPR32Opnd:{}:$cond, AFGR64Opnd:{}:$T, AFGR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECT_D64:
      dbgs() << "PseudoSELECT_D64: 	(set FGR64Opnd:{}:$dst, (select:{} GPR32Opnd:{}:$cond, FGR64Opnd:{}:$T, FGR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECT_I:
      dbgs() << "PseudoSELECT_I: 	(set GPR32Opnd:{}:$dst, (select:{} GPR32Opnd:{}:$cond, GPR32Opnd:{}:$T, GPR32Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECT_I64:
      dbgs() << "PseudoSELECT_I64: 	(set GPR64Opnd:{}:$dst, (select:{} GPR32Opnd:{}:$cond, GPR64Opnd:{}:$T, GPR64Opnd:{}:$F))";
      break;
    case Mips::PseudoSELECT_S:
      dbgs() << "PseudoSELECT_S: 	(set FGR32Opnd:{}:$dst, (select:{} GPR32Opnd:{}:$cond, FGR32Opnd:{}:$T, FGR32Opnd:{}:$F))";
      break;
    case Mips::PseudoUDIV:
      dbgs() << "PseudoUDIV: 	(set ACC64:{}:$ac, (MipsDivRemU:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::RADDU_W_QB:
      dbgs() << "RADDU_W_QB: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4583:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::RADDU_W_QB_MM:
      dbgs() << "RADDU_W_QB_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4583:{}, DSPROpnd:{}:$rs))";
      break;
    case Mips::RDDSP:
      dbgs() << "RDDSP: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4584:{}, (timmZExt10:{}):$mask))";
      break;
    case Mips::RDDSP_MM:
      dbgs() << "RDDSP_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_w_chain:{} 4584:{}, (timmZExt7:{}):$mask))";
      break;
    case Mips::REPLV_PH:
      dbgs() << "REPLV_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4585:{}, GPR32Opnd:{}:$rt))";
      break;
    case Mips::REPLV_PH_MM:
      dbgs() << "REPLV_PH_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4585:{}, GPR32Opnd:{}:$rs))";
      break;
    case Mips::REPLV_QB:
      dbgs() << "REPLV_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4586:{}, GPR32Opnd:{}:$rt))";
      break;
    case Mips::REPLV_QB_MM:
      dbgs() << "REPLV_QB_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4586:{}, GPR32Opnd:{}:$rs))";
      break;
    case Mips::REPL_PH:
      dbgs() << "REPL_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4585:{}, (immSExt10:{}):$imm))";
      break;
    case Mips::REPL_PH_MM:
      dbgs() << "REPL_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4585:{}, (immSExt10:{}):$imm))";
      break;
    case Mips::REPL_QB:
      dbgs() << "REPL_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4586:{}, (immZExt8:{}):$imm))";
      break;
    case Mips::REPL_QB_MM:
      dbgs() << "REPL_QB_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4586:{}, (immZExt8:{}):$imm))";
      break;
    case Mips::ROTR:
      dbgs() << "ROTR: 	(set GPR32Opnd:{}:$rd, (rotr:{} GPR32Opnd:{}:$rt, (immZExt5:{}):$shamt))";
      break;
    case Mips::ROTRV:
      dbgs() << "ROTRV: 	(set GPR32Opnd:{}:$rd, (rotr:{} GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::ROTRV_MM:
      dbgs() << "ROTRV_MM: 	(set GPR32Opnd:{}:$rd, (rotr:{} GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::ROTR_MM:
      dbgs() << "ROTR_MM: 	(set GPR32Opnd:{}:$rd, (rotr:{} GPR32Opnd:{}:$rt, (immZExt5:{}):$shamt))";
      break;
    case Mips::RetRA:
      dbgs() << "RetRA: 	(MipsRet)";
      break;
    case Mips::RetRA16:
      dbgs() << "RetRA16: 	(MipsRet)";
      break;
    case Mips::SAT_S_B:
      dbgs() << "SAT_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4587:{}, MSA128BOpnd:{}:$ws, (timmZExt3:{}):$m))";
      break;
    case Mips::SAT_S_D:
      dbgs() << "SAT_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4588:{}, MSA128DOpnd:{}:$ws, (timmZExt6:{}):$m))";
      break;
    case Mips::SAT_S_H:
      dbgs() << "SAT_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4589:{}, MSA128HOpnd:{}:$ws, (timmZExt4:{}):$m))";
      break;
    case Mips::SAT_S_W:
      dbgs() << "SAT_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4590:{}, MSA128WOpnd:{}:$ws, (timmZExt5:{}):$m))";
      break;
    case Mips::SAT_U_B:
      dbgs() << "SAT_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4591:{}, MSA128BOpnd:{}:$ws, (timmZExt3:{}):$m))";
      break;
    case Mips::SAT_U_D:
      dbgs() << "SAT_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4592:{}, MSA128DOpnd:{}:$ws, (timmZExt6:{}):$m))";
      break;
    case Mips::SAT_U_H:
      dbgs() << "SAT_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4593:{}, MSA128HOpnd:{}:$ws, (timmZExt4:{}):$m))";
      break;
    case Mips::SAT_U_W:
      dbgs() << "SAT_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4594:{}, MSA128WOpnd:{}:$ws, (timmZExt5:{}):$m))";
      break;
    case Mips::SB:
      dbgs() << "SB: 	(truncstorei8 GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SB64:
      dbgs() << "SB64: 	(truncstorei8 GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SB_MM:
      dbgs() << "SB_MM: 	(truncstorei8 GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SD:
      dbgs() << "SD: 	(store GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SDC1:
      dbgs() << "SDC1: 	(store AFGR64Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SDC164:
      dbgs() << "SDC164: 	(store FGR64Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SDC1_D64_MMR6:
      dbgs() << "SDC1_D64_MMR6: 	(store FGR64Opnd:{}:$ft, addrimm16:{}:$addr)";
      break;
    case Mips::SDC1_MM:
      dbgs() << "SDC1_MM: 	(store AFGR64Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SDC2:
      dbgs() << "SDC2: 	(store COP2Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SDC2_MMR6:
      dbgs() << "SDC2_MMR6: 	(store COP2Opnd:{}:$rt, addrimm11:{}:$addr)";
      break;
    case Mips::SDC3:
      dbgs() << "SDC3: 	(store COP3Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SDIV_MM_Pseudo:
      dbgs() << "SDIV_MM_Pseudo: 	(set ACC64:{}:$ac, (MipsDivRem:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SDL:
      dbgs() << "SDL: 	(MipsSDL GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SDR:
      dbgs() << "SDR: 	(MipsSDR GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SDXC1:
      dbgs() << "SDXC1: 	(store AFGR64Opnd:{}:$fs, (add:{} iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::SDXC164:
      dbgs() << "SDXC164: 	(store FGR64Opnd:{}:$fs, (add:{} iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::SEB:
      dbgs() << "SEB: 	(set GPR32Opnd:{}:$rd, (sext_inreg:{} GPR32Opnd:{}:$rt, i8:{}))";
      break;
    case Mips::SEB64:
      dbgs() << "SEB64: 	(set GPR64Opnd:{}:$rd, (sext_inreg:{} GPR64Opnd:{}:$rt, i8:{}))";
      break;
    case Mips::SEB_MM:
      dbgs() << "SEB_MM: 	(set GPR32Opnd:{}:$rd, (sext_inreg:{} GPR32Opnd:{}:$rt, i8:{}))";
      break;
    case Mips::SEH:
      dbgs() << "SEH: 	(set GPR32Opnd:{}:$rd, (sext_inreg:{} GPR32Opnd:{}:$rt, i16:{}))";
      break;
    case Mips::SEH64:
      dbgs() << "SEH64: 	(set GPR64Opnd:{}:$rd, (sext_inreg:{} GPR64Opnd:{}:$rt, i16:{}))";
      break;
    case Mips::SEH_MM:
      dbgs() << "SEH_MM: 	(set GPR32Opnd:{}:$rd, (sext_inreg:{} GPR32Opnd:{}:$rt, i16:{}))";
      break;
    case Mips::SEL_D:
      dbgs() << "SEL_D: 	(set FGR64Opnd:{}:$fd, (MipsFSelect:{} FGR64Opnd:{}:$fd_in, FGR64Opnd:{}:$ft, FGR64Opnd:{}:$fs))";
      break;
    case Mips::SEL_D_MMR6:
      dbgs() << "SEL_D_MMR6: 	(set FGR64Opnd:{}:$fd, (MipsFSelect:{} FGR64Opnd:{}:$fd_in, FGR64Opnd:{}:$ft, FGR64Opnd:{}:$fs))";
      break;
    case Mips::SEL_S:
      dbgs() << "SEL_S: 	(set FGR32Opnd:{}:$fd, (select:{} FGRCCOpnd:{}:$fd_in, FGR32Opnd:{}:$ft, FGR32Opnd:{}:$fs))";
      break;
    case Mips::SEL_S_MMR6:
      dbgs() << "SEL_S_MMR6: 	(set FGR32Opnd:{}:$fd, (select:{} FGRCCOpnd:{}:$fd_in, FGR32Opnd:{}:$ft, FGR32Opnd:{}:$fs))";
      break;
    case Mips::SEQ:
      dbgs() << "SEQ: 	(set GPR64Opnd:{}:$rd, (zext:{} (seteq:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt)))";
      break;
    case Mips::SEQi:
      dbgs() << "SEQi: 	(set GPR64Opnd:{}:$rt, (zext:{} (seteq:{} GPR64Opnd:{}:$rs, (immSExt10_64:{}):$imm10)))";
      break;
    case Mips::SH:
      dbgs() << "SH: 	(truncstorei16 GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SH64:
      dbgs() << "SH64: 	(truncstorei16 GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SHF_B:
      dbgs() << "SHF_B: 	(set MSA128BOpnd:{}:$wd, (MipsSHF:{} (timmZExt8:{}):$u8, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::SHF_H:
      dbgs() << "SHF_H: 	(set MSA128HOpnd:{}:$wd, (MipsSHF:{} (timmZExt8:{}):$u8, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::SHF_W:
      dbgs() << "SHF_W: 	(set MSA128WOpnd:{}:$wd, (MipsSHF:{} (timmZExt8:{}):$u8, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::SHILO:
      dbgs() << "SHILO: 	(set ACC64DSPOpnd:{}:$ac, (MipsSHILO:{} (immSExt6:{}):$shift, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::SHILOV:
      dbgs() << "SHILOV: 	(set ACC64DSPOpnd:{}:$ac, (MipsSHILO:{} GPR32Opnd:{}:$rs, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::SHILOV_MM:
      dbgs() << "SHILOV_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsSHILO:{} GPR32Opnd:{}:$rs, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::SHILO_MM:
      dbgs() << "SHILO_MM: 	(set ACC64DSPOpnd:{}:$ac, (MipsSHILO:{} (immSExt6:{}):$shift, ACC64DSPOpnd:{}:$acin))";
      break;
    case Mips::SHLLV_PH:
      dbgs() << "SHLLV_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4599:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHLLV_PH_MM:
      dbgs() << "SHLLV_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4599:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHLLV_QB:
      dbgs() << "SHLLV_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4600:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHLLV_QB_MM:
      dbgs() << "SHLLV_QB_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4600:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHLLV_S_PH:
      dbgs() << "SHLLV_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4601:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHLLV_S_PH_MM:
      dbgs() << "SHLLV_S_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4601:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHLLV_S_W:
      dbgs() << "SHLLV_S_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4602:{}, GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHLLV_S_W_MM:
      dbgs() << "SHLLV_S_W_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4602:{}, GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHLL_S_PH:
      dbgs() << "SHLL_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4601:{}, DSPROpnd:{}:$rt, (immZExt4:{}):$rs_sa))";
      break;
    case Mips::SHLL_S_PH_MM:
      dbgs() << "SHLL_S_PH_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_w_chain:{} 4601:{}, DSPROpnd:{}:$rs, (immZExt4:{}):$sa))";
      break;
    case Mips::SHLL_S_W:
      dbgs() << "SHLL_S_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4602:{}, GPR32Opnd:{}:$rt, (immZExt5:{}):$rs_sa))";
      break;
    case Mips::SHLL_S_W_MM:
      dbgs() << "SHLL_S_W_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_w_chain:{} 4602:{}, GPR32Opnd:{}:$rs, (immZExt5:{}):$sa))";
      break;
    case Mips::SHRAV_PH:
      dbgs() << "SHRAV_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4603:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRAV_PH_MM:
      dbgs() << "SHRAV_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4603:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHRAV_QB:
      dbgs() << "SHRAV_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4604:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRAV_QB_MMR2:
      dbgs() << "SHRAV_QB_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4604:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHRAV_R_PH:
      dbgs() << "SHRAV_R_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4605:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRAV_R_PH_MM:
      dbgs() << "SHRAV_R_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4605:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHRAV_R_QB:
      dbgs() << "SHRAV_R_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4606:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRAV_R_QB_MMR2:
      dbgs() << "SHRAV_R_QB_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4606:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHRAV_R_W:
      dbgs() << "SHRAV_R_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4607:{}, GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRAV_R_W_MM:
      dbgs() << "SHRAV_R_W_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4607:{}, GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHRA_R_PH:
      dbgs() << "SHRA_R_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4605:{}, DSPROpnd:{}:$rt, (immZExt4:{}):$rs_sa))";
      break;
    case Mips::SHRA_R_PH_MM:
      dbgs() << "SHRA_R_PH_MM: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4605:{}, DSPROpnd:{}:$rs, (immZExt4:{}):$sa))";
      break;
    case Mips::SHRA_R_QB:
      dbgs() << "SHRA_R_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4606:{}, DSPROpnd:{}:$rt, (immZExt3:{}):$rs_sa))";
      break;
    case Mips::SHRA_R_QB_MMR2:
      dbgs() << "SHRA_R_QB_MMR2: 	(set DSPROpnd:{}:$rt, (intrinsic_wo_chain:{} 4606:{}, DSPROpnd:{}:$rs, (immZExt3:{}):$sa))";
      break;
    case Mips::SHRA_R_W:
      dbgs() << "SHRA_R_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4607:{}, GPR32Opnd:{}:$rt, (immZExt5:{}):$rs_sa))";
      break;
    case Mips::SHRA_R_W_MM:
      dbgs() << "SHRA_R_W_MM: 	(set GPR32Opnd:{}:$rt, (intrinsic_wo_chain:{} 4607:{}, GPR32Opnd:{}:$rs, (immZExt5:{}):$sa))";
      break;
    case Mips::SHRLV_PH:
      dbgs() << "SHRLV_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4608:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRLV_PH_MMR2:
      dbgs() << "SHRLV_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4608:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SHRLV_QB:
      dbgs() << "SHRLV_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4609:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs_sa))";
      break;
    case Mips::SHRLV_QB_MM:
      dbgs() << "SHRLV_QB_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4609:{}, DSPROpnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SH_MM:
      dbgs() << "SH_MM: 	(truncstorei16 GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SLDI_B:
      dbgs() << "SLDI_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4614:{}, MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, (timmZExt4:{}):$n))";
      break;
    case Mips::SLDI_D:
      dbgs() << "SLDI_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4615:{}, MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, (timmZExt1:{}):$n))";
      break;
    case Mips::SLDI_H:
      dbgs() << "SLDI_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4616:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, (timmZExt3:{}):$n))";
      break;
    case Mips::SLDI_W:
      dbgs() << "SLDI_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4617:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, (timmZExt2:{}):$n))";
      break;
    case Mips::SLD_B:
      dbgs() << "SLD_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4610:{}, MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLD_D:
      dbgs() << "SLD_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4611:{}, MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLD_H:
      dbgs() << "SLD_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4612:{}, MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLD_W:
      dbgs() << "SLD_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4613:{}, MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLL:
      dbgs() << "SLL: 	(set GPR32Opnd:{}:$rd, (shl:{} GPR32Opnd:{}:$rt, (immZExt5:{}):$shamt))";
      break;
    case Mips::SLLI_B:
      dbgs() << "SLLI_B: 	(set MSA128BOpnd:{}:$wd, (shl:{} MSA128BOpnd:{}:$ws, vsplati8_uimm3:{}:$m))";
      break;
    case Mips::SLLI_D:
      dbgs() << "SLLI_D: 	(set MSA128DOpnd:{}:$wd, (shl:{} MSA128DOpnd:{}:$ws, vsplati64_uimm6:{}:$m))";
      break;
    case Mips::SLLI_H:
      dbgs() << "SLLI_H: 	(set MSA128HOpnd:{}:$wd, (shl:{} MSA128HOpnd:{}:$ws, vsplati16_uimm4:{}:$m))";
      break;
    case Mips::SLLI_W:
      dbgs() << "SLLI_W: 	(set MSA128WOpnd:{}:$wd, (shl:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$m))";
      break;
    case Mips::SLLV:
      dbgs() << "SLLV: 	(set GPR32Opnd:{}:$rd, (shl:{} GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SLL_B:
      dbgs() << "SLL_B: 	(set MSA128BOpnd:{}:$wd, (shl:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SLL_D:
      dbgs() << "SLL_D: 	(set MSA128DOpnd:{}:$wd, (shl:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SLL_H:
      dbgs() << "SLL_H: 	(set MSA128HOpnd:{}:$wd, (shl:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SLL_W:
      dbgs() << "SLL_W: 	(set MSA128WOpnd:{}:$wd, (shl:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SLT:
      dbgs() << "SLT: 	(set GPR32Opnd:{}:$rd, (setlt:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLT64:
      dbgs() << "SLT64: 	(set GPR32Opnd:{}:$rd, (setlt:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::SLT_MM:
      dbgs() << "SLT_MM: 	(set GPR32Opnd:{}:$rd, (setlt:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLTi:
      dbgs() << "SLTi: 	(set GPR32Opnd:{}:$rt, (setlt:{} GPR32Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::SLTi64:
      dbgs() << "SLTi64: 	(set GPR32Opnd:{}:$rt, (setlt:{} GPR64Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::SLTi_MM:
      dbgs() << "SLTi_MM: 	(set GPR32Opnd:{}:$rt, (setlt:{} GPR32Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::SLTiu:
      dbgs() << "SLTiu: 	(set GPR32Opnd:{}:$rt, (setult:{} GPR32Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::SLTiu64:
      dbgs() << "SLTiu64: 	(set GPR32Opnd:{}:$rt, (setult:{} GPR64Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::SLTiu_MM:
      dbgs() << "SLTiu_MM: 	(set GPR32Opnd:{}:$rt, (setult:{} GPR32Opnd:{}:$rs, (immSExt16:{}):$imm16))";
      break;
    case Mips::SLTu:
      dbgs() << "SLTu: 	(set GPR32Opnd:{}:$rd, (setult:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SLTu64:
      dbgs() << "SLTu64: 	(set GPR32Opnd:{}:$rd, (setult:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::SLTu_MM:
      dbgs() << "SLTu_MM: 	(set GPR32Opnd:{}:$rd, (setult:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SNE:
      dbgs() << "SNE: 	(set GPR64Opnd:{}:$rd, (zext:{} (setne:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt)))";
      break;
    case Mips::SNEi:
      dbgs() << "SNEi: 	(set GPR64Opnd:{}:$rt, (zext:{} (setne:{} GPR64Opnd:{}:$rs, (immSExt10_64:{}):$imm10)))";
      break;
    case Mips::SNZ_B_PSEUDO:
      dbgs() << "SNZ_B_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllNonZero:{} MSA128B:{ *:[v16i8] }:$ws))";
      break;
    case Mips::SNZ_D_PSEUDO:
      dbgs() << "SNZ_D_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllNonZero:{} MSA128D:{ *:[v2i64] }:$ws))";
      break;
    case Mips::SNZ_H_PSEUDO:
      dbgs() << "SNZ_H_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllNonZero:{} MSA128H:{ *:[v8i16] }:$ws))";
      break;
    case Mips::SNZ_V_PSEUDO:
      dbgs() << "SNZ_V_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAnyNonZero:{} MSA128B:{ *:[v16i8] }:$ws))";
      break;
    case Mips::SNZ_W_PSEUDO:
      dbgs() << "SNZ_W_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllNonZero:{} MSA128W:{ *:[v4i32] }:$ws))";
      break;
    case Mips::SPLATI_B:
      dbgs() << "SPLATI_B: 	(set MSA128BOpnd:{}:$wd, (MipsVSHF:{} vsplati8_uimm4:{}:$n, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$ws))";
      break;
    case Mips::SPLATI_D:
      dbgs() << "SPLATI_D: 	(set MSA128DOpnd:{}:$wd, (MipsVSHF:{} vsplati64_uimm1:{}:$n, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$ws))";
      break;
    case Mips::SPLATI_H:
      dbgs() << "SPLATI_H: 	(set MSA128HOpnd:{}:$wd, (MipsVSHF:{} vsplati16_uimm3:{}:$n, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$ws))";
      break;
    case Mips::SPLATI_W:
      dbgs() << "SPLATI_W: 	(set MSA128WOpnd:{}:$wd, (MipsVSHF:{} vsplati32_uimm2:{}:$n, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$ws))";
      break;
    case Mips::SPLAT_B:
      dbgs() << "SPLAT_B: 	(set MSA128BOpnd:{}:$wd, (vsplati8_elt:{} MSA128BOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SPLAT_D:
      dbgs() << "SPLAT_D: 	(set MSA128DOpnd:{}:$wd, (vsplati64_elt:{} MSA128DOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SPLAT_H:
      dbgs() << "SPLAT_H: 	(set MSA128HOpnd:{}:$wd, (vsplati16_elt:{} MSA128HOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SPLAT_W:
      dbgs() << "SPLAT_W: 	(set MSA128WOpnd:{}:$wd, (vsplati32_elt:{} MSA128WOpnd:{}:$ws, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SRA:
      dbgs() << "SRA: 	(set GPR32Opnd:{}:$rd, (sra:{} GPR32Opnd:{}:$rt, (immZExt5:{}):$shamt))";
      break;
    case Mips::SRAI_B:
      dbgs() << "SRAI_B: 	(set MSA128BOpnd:{}:$wd, (sra:{} MSA128BOpnd:{}:$ws, vsplati8_uimm3:{}:$m))";
      break;
    case Mips::SRAI_D:
      dbgs() << "SRAI_D: 	(set MSA128DOpnd:{}:$wd, (sra:{} MSA128DOpnd:{}:$ws, vsplati64_uimm6:{}:$m))";
      break;
    case Mips::SRAI_H:
      dbgs() << "SRAI_H: 	(set MSA128HOpnd:{}:$wd, (sra:{} MSA128HOpnd:{}:$ws, vsplati16_uimm4:{}:$m))";
      break;
    case Mips::SRAI_W:
      dbgs() << "SRAI_W: 	(set MSA128WOpnd:{}:$wd, (sra:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$m))";
      break;
    case Mips::SRARI_B:
      dbgs() << "SRARI_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4646:{}, MSA128BOpnd:{}:$ws, (timmZExt3:{}):$m))";
      break;
    case Mips::SRARI_D:
      dbgs() << "SRARI_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4647:{}, MSA128DOpnd:{}:$ws, (timmZExt6:{}):$m))";
      break;
    case Mips::SRARI_H:
      dbgs() << "SRARI_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4648:{}, MSA128HOpnd:{}:$ws, (timmZExt4:{}):$m))";
      break;
    case Mips::SRARI_W:
      dbgs() << "SRARI_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4649:{}, MSA128WOpnd:{}:$ws, (timmZExt5:{}):$m))";
      break;
    case Mips::SRAR_B:
      dbgs() << "SRAR_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4642:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SRAR_D:
      dbgs() << "SRAR_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4643:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SRAR_H:
      dbgs() << "SRAR_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4644:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SRAR_W:
      dbgs() << "SRAR_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4645:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SRAV:
      dbgs() << "SRAV: 	(set GPR32Opnd:{}:$rd, (sra:{} GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SRA_B:
      dbgs() << "SRA_B: 	(set MSA128BOpnd:{}:$wd, (sra:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SRA_D:
      dbgs() << "SRA_D: 	(set MSA128DOpnd:{}:$wd, (sra:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SRA_H:
      dbgs() << "SRA_H: 	(set MSA128HOpnd:{}:$wd, (sra:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SRA_W:
      dbgs() << "SRA_W: 	(set MSA128WOpnd:{}:$wd, (sra:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SRL:
      dbgs() << "SRL: 	(set GPR32Opnd:{}:$rd, (srl:{} GPR32Opnd:{}:$rt, (immZExt5:{}):$shamt))";
      break;
    case Mips::SRLI_B:
      dbgs() << "SRLI_B: 	(set MSA128BOpnd:{}:$wd, (srl:{} MSA128BOpnd:{}:$ws, vsplati8_uimm3:{}:$m))";
      break;
    case Mips::SRLI_D:
      dbgs() << "SRLI_D: 	(set MSA128DOpnd:{}:$wd, (srl:{} MSA128DOpnd:{}:$ws, vsplati64_uimm6:{}:$m))";
      break;
    case Mips::SRLI_H:
      dbgs() << "SRLI_H: 	(set MSA128HOpnd:{}:$wd, (srl:{} MSA128HOpnd:{}:$ws, vsplati16_uimm4:{}:$m))";
      break;
    case Mips::SRLI_W:
      dbgs() << "SRLI_W: 	(set MSA128WOpnd:{}:$wd, (srl:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$m))";
      break;
    case Mips::SRLRI_B:
      dbgs() << "SRLRI_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4662:{}, MSA128BOpnd:{}:$ws, (timmZExt3:{}):$m))";
      break;
    case Mips::SRLRI_D:
      dbgs() << "SRLRI_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4663:{}, MSA128DOpnd:{}:$ws, (timmZExt6:{}):$m))";
      break;
    case Mips::SRLRI_H:
      dbgs() << "SRLRI_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4664:{}, MSA128HOpnd:{}:$ws, (timmZExt4:{}):$m))";
      break;
    case Mips::SRLRI_W:
      dbgs() << "SRLRI_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4665:{}, MSA128WOpnd:{}:$ws, (timmZExt5:{}):$m))";
      break;
    case Mips::SRLR_B:
      dbgs() << "SRLR_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4658:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SRLR_D:
      dbgs() << "SRLR_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4659:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SRLR_H:
      dbgs() << "SRLR_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4660:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SRLR_W:
      dbgs() << "SRLR_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4661:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SRLV:
      dbgs() << "SRLV: 	(set GPR32Opnd:{}:$rd, (srl:{} GPR32Opnd:{}:$rt, GPR32Opnd:{}:$rs))";
      break;
    case Mips::SRL_B:
      dbgs() << "SRL_B: 	(set MSA128BOpnd:{}:$wd, (srl:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SRL_D:
      dbgs() << "SRL_D: 	(set MSA128DOpnd:{}:$wd, (srl:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SRL_H:
      dbgs() << "SRL_H: 	(set MSA128HOpnd:{}:$wd, (srl:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SRL_W:
      dbgs() << "SRL_W: 	(set MSA128WOpnd:{}:$wd, (srl:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::STR_D:
      dbgs() << "STR_D: 	(intrinsic_void 4670:{}, MSA128DOpnd:{}:$dst, iPTR:{}:$ptr, GPR32:{}:$imm)";
      break;
    case Mips::STR_W:
      dbgs() << "STR_W: 	(intrinsic_void 4671:{}, MSA128WOpnd:{}:$dst, iPTR:{}:$ptr, GPR32:{}:$imm)";
      break;
    case Mips::ST_B:
      dbgs() << "ST_B: 	(store MSA128BOpnd:{ *:[v16i8] }:$wd, addrimm10:{}:$addr)";
      break;
    case Mips::ST_D:
      dbgs() << "ST_D: 	(store MSA128DOpnd:{ *:[v2i64] }:$wd, addrimm10lsl3:{}:$addr)";
      break;
    case Mips::ST_F16:
      dbgs() << "ST_F16: 	(store MSA128F16:{ *:[f16] }:$ws, (addrimm10:{}):$addr)";
      break;
    case Mips::ST_H:
      dbgs() << "ST_H: 	(store MSA128HOpnd:{ *:[v8i16] }:$wd, addrimm10lsl1:{}:$addr)";
      break;
    case Mips::ST_W:
      dbgs() << "ST_W: 	(store MSA128WOpnd:{ *:[v4i32] }:$wd, addrimm10lsl2:{}:$addr)";
      break;
    case Mips::SUBQH_PH:
      dbgs() << "SUBQH_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4675:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBQH_PH_MMR2:
      dbgs() << "SUBQH_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4675:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBQH_R_PH:
      dbgs() << "SUBQH_R_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4676:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBQH_R_PH_MMR2:
      dbgs() << "SUBQH_R_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4676:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBQH_R_W:
      dbgs() << "SUBQH_R_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4677:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBQH_R_W_MMR2:
      dbgs() << "SUBQH_R_W_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4677:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBQH_W:
      dbgs() << "SUBQH_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4678:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBQH_W_MMR2:
      dbgs() << "SUBQH_W_MMR2: 	(set GPR32Opnd:{}:$rd, (intrinsic_wo_chain:{} 4678:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBQ_S_PH:
      dbgs() << "SUBQ_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4673:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBQ_S_PH_MM:
      dbgs() << "SUBQ_S_PH_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4673:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBQ_S_W:
      dbgs() << "SUBQ_S_W: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4674:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBQ_S_W_MM:
      dbgs() << "SUBQ_S_W_MM: 	(set GPR32Opnd:{}:$rd, (intrinsic_w_chain:{} 4674:{}, GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBSUS_U_B:
      dbgs() << "SUBSUS_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4687:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SUBSUS_U_D:
      dbgs() << "SUBSUS_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4688:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SUBSUS_U_H:
      dbgs() << "SUBSUS_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4689:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SUBSUS_U_W:
      dbgs() << "SUBSUS_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4690:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SUBSUU_S_B:
      dbgs() << "SUBSUU_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4691:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SUBSUU_S_D:
      dbgs() << "SUBSUU_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4692:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SUBSUU_S_H:
      dbgs() << "SUBSUU_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4693:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SUBSUU_S_W:
      dbgs() << "SUBSUU_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4694:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SUBS_S_B:
      dbgs() << "SUBS_S_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4679:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SUBS_S_D:
      dbgs() << "SUBS_S_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4680:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SUBS_S_H:
      dbgs() << "SUBS_S_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4681:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SUBS_S_W:
      dbgs() << "SUBS_S_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4682:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SUBS_U_B:
      dbgs() << "SUBS_U_B: 	(set MSA128BOpnd:{}:$wd, (intrinsic_wo_chain:{} 4683:{}, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SUBS_U_D:
      dbgs() << "SUBS_U_D: 	(set MSA128DOpnd:{}:$wd, (intrinsic_wo_chain:{} 4684:{}, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SUBS_U_H:
      dbgs() << "SUBS_U_H: 	(set MSA128HOpnd:{}:$wd, (intrinsic_wo_chain:{} 4685:{}, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SUBS_U_W:
      dbgs() << "SUBS_U_W: 	(set MSA128WOpnd:{}:$wd, (intrinsic_wo_chain:{} 4686:{}, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SUBU16_MM:
      dbgs() << "SUBU16_MM: 	(set GPRMM16Opnd:{}:$rd, (sub:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::SUBU16_MMR6:
      dbgs() << "SUBU16_MMR6: 	(set GPRMM16Opnd:{}:$rd, (sub:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::SUBUH_QB:
      dbgs() << "SUBUH_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4699:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBUH_QB_MMR2:
      dbgs() << "SUBUH_QB_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4699:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBUH_R_QB:
      dbgs() << "SUBUH_R_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4700:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBUH_R_QB_MMR2:
      dbgs() << "SUBUH_R_QB_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4700:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBU_PH:
      dbgs() << "SUBU_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4695:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBU_PH_MMR2:
      dbgs() << "SUBU_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4695:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBU_S_PH:
      dbgs() << "SUBU_S_PH: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4697:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBU_S_PH_MMR2:
      dbgs() << "SUBU_S_PH_MMR2: 	(set DSPROpnd:{}:$rd, (intrinsic_w_chain:{} 4697:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBU_S_QB:
      dbgs() << "SUBU_S_QB: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4698:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBU_S_QB_MM:
      dbgs() << "SUBU_S_QB_MM: 	(set DSPROpnd:{}:$rd, (intrinsic_wo_chain:{} 4698:{}, DSPROpnd:{}:$rs, DSPROpnd:{}:$rt))";
      break;
    case Mips::SUBVI_B:
      dbgs() << "SUBVI_B: 	(set MSA128BOpnd:{}:$wd, (sub:{} MSA128BOpnd:{}:$ws, vsplati8_uimm5:{}:$imm))";
      break;
    case Mips::SUBVI_D:
      dbgs() << "SUBVI_D: 	(set MSA128DOpnd:{}:$wd, (sub:{} MSA128DOpnd:{}:$ws, vsplati64_uimm5:{}:$imm))";
      break;
    case Mips::SUBVI_H:
      dbgs() << "SUBVI_H: 	(set MSA128HOpnd:{}:$wd, (sub:{} MSA128HOpnd:{}:$ws, vsplati16_uimm5:{}:$imm))";
      break;
    case Mips::SUBVI_W:
      dbgs() << "SUBVI_W: 	(set MSA128WOpnd:{}:$wd, (sub:{} MSA128WOpnd:{}:$ws, vsplati32_uimm5:{}:$imm))";
      break;
    case Mips::SUBV_B:
      dbgs() << "SUBV_B: 	(set MSA128BOpnd:{}:$wd, (sub:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::SUBV_D:
      dbgs() << "SUBV_D: 	(set MSA128DOpnd:{}:$wd, (sub:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::SUBV_H:
      dbgs() << "SUBV_H: 	(set MSA128HOpnd:{}:$wd, (sub:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::SUBV_W:
      dbgs() << "SUBV_W: 	(set MSA128WOpnd:{}:$wd, (sub:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::SUBu:
      dbgs() << "SUBu: 	(set GPR32Opnd:{}:$rd, (sub:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SUBu_MM:
      dbgs() << "SUBu_MM: 	(set GPR32Opnd:{}:$rd, (sub:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::SW:
      dbgs() << "SW: 	(store GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SW64:
      dbgs() << "SW64: 	(truncstorei32 GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SWC1:
      dbgs() << "SWC1: 	(store FGR32Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SWC1_MM:
      dbgs() << "SWC1_MM: 	(store FGR32Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SWC2:
      dbgs() << "SWC2: 	(store COP2Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SWC2_MMR6:
      dbgs() << "SWC2_MMR6: 	(store COP2Opnd:{}:$rt, addrimm11:{}:$addr)";
      break;
    case Mips::SWC3:
      dbgs() << "SWC3: 	(store COP3Opnd:{}:$rt, addrDefault:{}:$addr)";
      break;
    case Mips::SWL:
      dbgs() << "SWL: 	(MipsSWL GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SWL64:
      dbgs() << "SWL64: 	(MipsSWL GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SWLE_MM:
      dbgs() << "SWLE_MM: 	(MipsSWL GPR32Opnd:{}:$rt, addrimm12:{}:$addr)";
      break;
    case Mips::SWL_MM:
      dbgs() << "SWL_MM: 	(MipsSWL GPR32Opnd:{}:$rt, addrimm12:{}:$addr)";
      break;
    case Mips::SWR:
      dbgs() << "SWR: 	(MipsSWR GPR32Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SWR64:
      dbgs() << "SWR64: 	(MipsSWR GPR64Opnd:{}:$rt, addr:{}:$addr)";
      break;
    case Mips::SWRE_MM:
      dbgs() << "SWRE_MM: 	(MipsSWR GPR32Opnd:{}:$rt, addrimm12:{}:$addr)";
      break;
    case Mips::SWR_MM:
      dbgs() << "SWR_MM: 	(MipsSWR GPR32Opnd:{}:$rt, addrimm12:{}:$addr)";
      break;
    case Mips::SWXC1:
      dbgs() << "SWXC1: 	(store FGR32Opnd:{}:$fs, (add:{} iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::SWXC1_MM:
      dbgs() << "SWXC1_MM: 	(store FGR32Opnd:{}:$fs, (add:{} iPTR:{}:$base, iPTR:{}:$index))";
      break;
    case Mips::SYNC:
      dbgs() << "SYNC: 	(MipsSync (immZExt5:{}):$stype)";
      break;
    case Mips::SYNC_MM:
      dbgs() << "SYNC_MM: 	(MipsSync (immZExt5:{}):$stype)";
      break;
    case Mips::SYNC_MMR6:
      dbgs() << "SYNC_MMR6: 	(MipsSync (immZExt5:{}):$stype)";
      break;
    case Mips::SZ_B_PSEUDO:
      dbgs() << "SZ_B_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllZero:{} MSA128B:{ *:[v16i8] }:$ws))";
      break;
    case Mips::SZ_D_PSEUDO:
      dbgs() << "SZ_D_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllZero:{} MSA128D:{ *:[v2i64] }:$ws))";
      break;
    case Mips::SZ_H_PSEUDO:
      dbgs() << "SZ_H_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllZero:{} MSA128H:{ *:[v8i16] }:$ws))";
      break;
    case Mips::SZ_V_PSEUDO:
      dbgs() << "SZ_V_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAnyZero:{} MSA128B:{ *:[v16i8] }:$ws))";
      break;
    case Mips::SZ_W_PSEUDO:
      dbgs() << "SZ_W_PSEUDO: 	(set GPR32:{}:$dst, (MipsVAllZero:{} MSA128W:{ *:[v4i32] }:$ws))";
      break;
    case Mips::TAILCALL64R6REG:
      dbgs() << "TAILCALL64R6REG: 	(MipsTailCall GPR64Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLHB64R6REG:
      dbgs() << "TAILCALLHB64R6REG: 	(MipsTailCall GPR64Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLHBR6REG:
      dbgs() << "TAILCALLHBR6REG: 	(MipsTailCall GPR32Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLR6REG:
      dbgs() << "TAILCALLR6REG: 	(MipsTailCall GPR32Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLREG:
      dbgs() << "TAILCALLREG: 	(MipsTailCall GPR32Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLREG64:
      dbgs() << "TAILCALLREG64: 	(MipsTailCall GPR64Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLREGHB:
      dbgs() << "TAILCALLREGHB: 	(MipsTailCall GPR32Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLREGHB64:
      dbgs() << "TAILCALLREGHB64: 	(MipsTailCall GPR64Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLREG_MM:
      dbgs() << "TAILCALLREG_MM: 	(MipsTailCall GPR32Opnd:{}:$rs)";
      break;
    case Mips::TAILCALLREG_MMR6:
      dbgs() << "TAILCALLREG_MMR6: 	(MipsTailCall GPR32Opnd:{}:$rs)";
      break;
    case Mips::TRAP:
      dbgs() << "TRAP: 	(trap)";
      break;
    case Mips::TRAP_MM:
      dbgs() << "TRAP_MM: 	(trap)";
      break;
    case Mips::UDIV_MM_Pseudo:
      dbgs() << "UDIV_MM_Pseudo: 	(set ACC64:{}:$ac, (MipsDivRemU:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::VSHF_B:
      dbgs() << "VSHF_B: 	(set MSA128BOpnd:{}:$wd, (MipsVSHF:{} MSA128BOpnd:{}:$wd_in, MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::VSHF_D:
      dbgs() << "VSHF_D: 	(set MSA128DOpnd:{}:$wd, (MipsVSHF:{} MSA128DOpnd:{}:$wd_in, MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::VSHF_H:
      dbgs() << "VSHF_H: 	(set MSA128HOpnd:{}:$wd, (MipsVSHF:{} MSA128HOpnd:{}:$wd_in, MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::VSHF_W:
      dbgs() << "VSHF_W: 	(set MSA128WOpnd:{}:$wd, (MipsVSHF:{} MSA128WOpnd:{}:$wd_in, MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::WRDSP:
      dbgs() << "WRDSP: 	(intrinsic_void 4713:{}, GPR32Opnd:{}:$rs, (timmZExt10:{}):$mask)";
      break;
    case Mips::WRDSP_MM:
      dbgs() << "WRDSP_MM: 	(intrinsic_void 4713:{}, GPR32Opnd:{}:$rt, (timmZExt7:{}):$mask)";
      break;
    case Mips::XOR:
      dbgs() << "XOR: 	(set GPR32Opnd:{}:$rd, (xor:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::XOR16_MM:
      dbgs() << "XOR16_MM: 	(set GPRMM16Opnd:{}:$dst, (xor:{} GPRMM16Opnd:{}:$rs, GPRMM16Opnd:{}:$rt))";
      break;
    case Mips::XOR64:
      dbgs() << "XOR64: 	(set GPR64Opnd:{}:$rd, (xor:{} GPR64Opnd:{}:$rs, GPR64Opnd:{}:$rt))";
      break;
    case Mips::XORI_B:
      dbgs() << "XORI_B: 	(set MSA128BOpnd:{}:$wd, (xor:{} MSA128BOpnd:{}:$ws, vsplati8_uimm8:{}:$u8))";
      break;
    case Mips::XORI_MMR6:
      dbgs() << "XORI_MMR6: 	(set GPR32Opnd:{}:$rt, (xor:{} GPR32Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;
    case Mips::XOR_MM:
      dbgs() << "XOR_MM: 	(set GPR32Opnd:{}:$rd, (xor:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::XOR_MMR6:
      dbgs() << "XOR_MMR6: 	(set GPR32Opnd:{}:$rd, (xor:{} GPR32Opnd:{}:$rs, GPR32Opnd:{}:$rt))";
      break;
    case Mips::XOR_V:
      dbgs() << "XOR_V: 	(set MSA128BOpnd:{}:$wd, (xor:{} MSA128BOpnd:{}:$ws, MSA128BOpnd:{}:$wt))";
      break;
    case Mips::XOR_V_D_PSEUDO:
      dbgs() << "XOR_V_D_PSEUDO: 	(set MSA128DOpnd:{}:$wd, (xor:{} MSA128DOpnd:{}:$ws, MSA128DOpnd:{}:$wt))";
      break;
    case Mips::XOR_V_H_PSEUDO:
      dbgs() << "XOR_V_H_PSEUDO: 	(set MSA128HOpnd:{}:$wd, (xor:{} MSA128HOpnd:{}:$ws, MSA128HOpnd:{}:$wt))";
      break;
    case Mips::XOR_V_W_PSEUDO:
      dbgs() << "XOR_V_W_PSEUDO: 	(set MSA128WOpnd:{}:$wd, (xor:{} MSA128WOpnd:{}:$ws, MSA128WOpnd:{}:$wt))";
      break;
    case Mips::XORi:
      dbgs() << "XORi: 	(set GPR32Opnd:{}:$rt, (xor:{} GPR32Opnd:{}:$rs, (imm32ZExt16:{}):$imm16))";
      break;
    case Mips::XORi64:
      dbgs() << "XORi64: 	(set GPR64Opnd:{}:$rt, (xor:{} GPR64Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;
    case Mips::XORi_MM:
      dbgs() << "XORi_MM: 	(set GPR32Opnd:{}:$rt, (xor:{} GPR32Opnd:{}:$rs, (immZExt16:{}):$imm16))";
      break;


  }
  return Res;
}
