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

#include "llvm/Sim/inst-exe.h"

using namespace instexe;

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
      Inst.dump();
      break;
    case Mips::ABSQ_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_absq_s_ph DSPROpnd:$rt))]";
    case Mips::ABSQ_S_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_absq_s_ph DSPROpnd:$rs))]";
    case Mips::ABSQ_S_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_absq_s_qb DSPROpnd:$rt))]";
    case Mips::ABSQ_S_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_absq_s_qb DSPROpnd:$rs))]";
    case Mips::ABSQ_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_absq_s_w GPR32Opnd:$rt))]";
    case Mips::ABSQ_S_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_absq_s_w GPR32Opnd:$rs))]";
    case Mips::ADD:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDIU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (add GPR32Opnd:$rs, immSExt16:$imm16))]";
    case Mips::ADDQH_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQH_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQH_R_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQH_R_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQH_R_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDQH_R_W_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDQH_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDQH_W_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDQ_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQ_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQ_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQ_S_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDQ_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDQ_S_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDR_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::ADDSC:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDSC_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDS_A_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_adds_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ADDS_A_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_adds_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ADDS_A_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_adds_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ADDS_A_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_adds_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ADDS_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_adds_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ADDS_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_adds_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ADDS_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_adds_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ADDS_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_adds_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ADDS_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_adds_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ADDS_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_adds_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ADDS_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_adds_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ADDS_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_adds_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ADDU16_MM:
    {
      dbgs() << "[(set GPRMM16Opnd:$rd, (add GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDU16_MMR6:
    {
      dbgs() << "[(set GPRMM16Opnd:$rd, (add GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDUH_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDUH_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDUH_R_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDUH_R_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDU_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_S_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_S_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDU_S_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::ADDVI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (add MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDVI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (add MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDVI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (add MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDVI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (add MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (add MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (add MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (add MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (add MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDWC:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDWC_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADD_A_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_add_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ADD_A_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_add_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ADD_A_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_add_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ADD_A_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_add_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ADD_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADD_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::ADDi:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
    case Mips::ADDi_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
    case Mips::ADDiu:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (add GPR32Opnd:$rs, imm32SExt16:$imm16))]";
    case Mips::ADDiu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
    case Mips::ADDu:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (add GPR32Opnd:$rs, GPR32Opnd:$rt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADDu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (add GPR32Opnd:$rs, GPR32Opnd:$rt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::ADJCALLSTACKDOWN:
    {
      dbgs() << "[(callseq_start timm:$amt1, timm:$amt2)]";
    case Mips::ADJCALLSTACKUP:
    {
      dbgs() << "[(callseq_end timm:$amt1, timm:$amt2)]";
    case Mips::AND:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (and GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::AND16_MM:
    {
      dbgs() << "[(set GPRMM16Opnd:$dst, (and GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::AND16_MMR6:
    {
      dbgs() << "[(set GPRMM16Opnd:$dst, (null_frag GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::AND64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (and GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::ANDI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (and MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
    case Mips::ANDI_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
    case Mips::AND_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (and GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::AND_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (and GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::AND_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (and MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::AND_V_D_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (and MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::AND_V_H_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (and MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::AND_V_W_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (and MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ANDi:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (and GPR32Opnd:$rs, imm32ZExt16:$imm16))]";
    case Mips::ANDi64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (and GPR64Opnd:$rs, immZExt16:$imm16))]";
    case Mips::ANDi_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
    case Mips::APPEND:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_append GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::APPEND_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_append GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::ASUB_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_asub_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ASUB_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_asub_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ASUB_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_asub_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ASUB_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_asub_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ASUB_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_asub_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ASUB_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_asub_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ASUB_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_asub_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ASUB_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_asub_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ATOMIC_CMP_SWAP_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_cmp_swap_16 iPTR:$ptr, GPR32:$cmp, GPR32:$swap))]";
    case Mips::ATOMIC_CMP_SWAP_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_cmp_swap_32 iPTR:$ptr, GPR32:$cmp, GPR32:$swap))]";
    case Mips::ATOMIC_CMP_SWAP_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_cmp_swap_64 iPTR:$ptr, GPR64:$cmp, GPR64:$swap))]";
    case Mips::ATOMIC_CMP_SWAP_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_cmp_swap_8 iPTR:$ptr, GPR32:$cmp, GPR32:$swap))]";
    case Mips::ATOMIC_LOAD_ADD_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_add_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_ADD_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_add_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_ADD_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_add_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_ADD_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_add_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_AND_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_and_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_AND_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_and_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_AND_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_and_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_AND_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_and_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_MAX_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_max_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_MAX_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_max_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_MAX_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_max_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_MAX_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_max_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_MIN_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_min_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_MIN_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_min_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_MIN_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_min_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_MIN_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_min_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_NAND_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_nand_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_NAND_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_nand_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_NAND_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_nand_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_NAND_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_nand_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_OR_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_or_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_OR_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_or_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_OR_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_or_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_OR_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_or_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_SUB_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_sub_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_SUB_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_sub_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_SUB_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_sub_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_SUB_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_sub_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_UMAX_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_umax_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_UMAX_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_umax_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_UMAX_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_umax_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_UMAX_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_umax_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_UMIN_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_umin_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_UMIN_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_umin_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_UMIN_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_umin_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_UMIN_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_umin_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_XOR_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_xor_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_XOR_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_xor_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_LOAD_XOR_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_load_xor_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_LOAD_XOR_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_load_xor_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_SWAP_I16:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_swap_16 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_SWAP_I32:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_swap_32 iPTR:$ptr, GPR32:$incr))]";
    case Mips::ATOMIC_SWAP_I64:
    {
      dbgs() << "[(set GPR64:$dst, (atomic_swap_64 iPTR:$ptr, GPR64:$incr))]";
    case Mips::ATOMIC_SWAP_I8:
    {
      dbgs() << "[(set GPR32:$dst, (atomic_swap_8 iPTR:$ptr, GPR32:$incr))]";
    case Mips::AVER_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_aver_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::AVER_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_aver_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::AVER_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_aver_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::AVER_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_aver_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::AVER_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_aver_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::AVER_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_aver_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::AVER_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_aver_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::AVER_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_aver_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::AVE_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_ave_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::AVE_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ave_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::AVE_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_ave_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::AVE_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ave_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::AVE_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_ave_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::AVE_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ave_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::AVE_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_ave_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::AVE_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ave_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::B:
    {
      dbgs() << "[(br bb:$offset)]";
    case Mips::BADDu:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (and (add GPR64Opnd:$rs, GPR64Opnd:$rt), 255))]";
    case Mips::BALIGN:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_balign GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt2:$sa))]";
    case Mips::BALIGN_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_balign GPR32Opnd:$src, GPR32Opnd:$rs, immZExt2:$bp))]";
    case Mips::BBIT0:
    {
      dbgs() << "[(brcond (i32 (seteq (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, immZExt5_64:$p)), 0)), bb:$offset)]";
    case Mips::BBIT032:
    {
      dbgs() << "[(brcond (i32 (seteq (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, immZExt5_64:$p)), 0)), bb:$offset)]";
    case Mips::BBIT1:
    {
      dbgs() << "[(brcond (i32 (setne (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, immZExt5_64:$p)), 0)), bb:$offset)]";
    case Mips::BBIT132:
    {
      dbgs() << "[(brcond (i32 (setne (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, immZExt5_64:$p)), 0)), bb:$offset)]";
    case Mips::BC1F:
    {
      dbgs() << "[(MipsFPBrcond MIPS_BRANCH_F, FCCRegsOpnd:$fcc, bb:$offset)]";
    case Mips::BC1F_MM:
    {
      dbgs() << "[(MipsFPBrcond MIPS_BRANCH_F, FCCRegsOpnd:$fcc, bb:$offset)]";
    case Mips::BC1T:
    {
      dbgs() << "[(MipsFPBrcond MIPS_BRANCH_T, FCCRegsOpnd:$fcc, bb:$offset)]";
    case Mips::BC1T_MM:
    {
      dbgs() << "[(MipsFPBrcond MIPS_BRANCH_T, FCCRegsOpnd:$fcc, bb:$offset)]";
    case Mips::BCLRI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (and MSA128BOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
    case Mips::BCLRI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (and MSA128DOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
    case Mips::BCLRI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (and MSA128HOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
    case Mips::BCLRI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (and MSA128WOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
    case Mips::BCLR_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vbclr_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::BCLR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vbclr_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::BCLR_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vbclr_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::BCLR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vbclr_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::BC_MMR6:
    {
      dbgs() << "[(br bb:$offset)]";
    case Mips::BEQ:
    {
      dbgs() << "[(brcond (i32 (seteq GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
    case Mips::BEQ64:
    {
      dbgs() << "[(brcond (i32 (seteq GPR64Opnd:$rs, GPR64Opnd:$rt)), bb:$offset)]";
    case Mips::BEQ_MM:
    {
      dbgs() << "[(brcond (i32 (seteq GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
    case Mips::BGEZ:
    {
      dbgs() << "[(brcond (i32 (setge GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BGEZ64:
    {
      dbgs() << "[(brcond (i32 (setge GPR64Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BGEZ_MM:
    {
      dbgs() << "[(brcond (i32 (setge GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BGTZ:
    {
      dbgs() << "[(brcond (i32 (setgt GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BGTZ64:
    {
      dbgs() << "[(brcond (i32 (setgt GPR64Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BGTZ_MM:
    {
      dbgs() << "[(brcond (i32 (setgt GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BINSLI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect (v16i8 vsplat_maskl_bits_uimm3:$m), (v16i8 MSA128BOpnd:$ws), MSA128BOpnd:$wd_in))]";
    case Mips::BINSLI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vselect (v2i64 vsplat_maskl_bits_uimm6:$m), (v2i64 MSA128DOpnd:$ws), MSA128DOpnd:$wd_in))]";
    case Mips::BINSLI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vselect (v8i16 vsplat_maskl_bits_uimm4:$m), (v8i16 MSA128HOpnd:$ws), MSA128HOpnd:$wd_in))]";
    case Mips::BINSLI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vselect (v4i32 vsplat_maskl_bits_uimm5:$m), (v4i32 MSA128WOpnd:$ws), MSA128WOpnd:$wd_in))]";
    case Mips::BINSL_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_binsl_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::BINSL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_binsl_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::BINSL_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_binsl_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::BINSL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_binsl_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::BINSRI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect (v16i8 vsplat_maskr_bits_uimm3:$m), (v16i8 MSA128BOpnd:$ws), MSA128BOpnd:$wd_in))]";
    case Mips::BINSRI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vselect (v2i64 vsplat_maskr_bits_uimm6:$m), (v2i64 MSA128DOpnd:$ws), MSA128DOpnd:$wd_in))]";
    case Mips::BINSRI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vselect (v8i16 vsplat_maskr_bits_uimm4:$m), (v8i16 MSA128HOpnd:$ws), MSA128HOpnd:$wd_in))]";
    case Mips::BINSRI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vselect (v4i32 vsplat_maskr_bits_uimm5:$m), (v4i32 MSA128WOpnd:$ws), MSA128WOpnd:$wd_in))]";
    case Mips::BINSR_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_binsr_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::BINSR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_binsr_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::BINSR_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_binsr_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::BINSR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_binsr_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::BITREV:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_bitrev GPR32Opnd:$rt))]";
    case Mips::BITREV_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_bitrev GPR32Opnd:$rs))]";
    case Mips::BLEZ:
    {
      dbgs() << "[(brcond (i32 (setle GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BLEZ64:
    {
      dbgs() << "[(brcond (i32 (setle GPR64Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BLEZ_MM:
    {
      dbgs() << "[(brcond (i32 (setle GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BLTZ:
    {
      dbgs() << "[(brcond (i32 (setlt GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BLTZ64:
    {
      dbgs() << "[(brcond (i32 (setlt GPR64Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BLTZ_MM:
    {
      dbgs() << "[(brcond (i32 (setlt GPR32Opnd:$rs, 0)), bb:$offset)]";
    case Mips::BMNZI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect vsplati8_uimm8:$u8, MSA128BOpnd:$ws, MSA128BOpnd:$wd_in))]";
    case Mips::BMNZ_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wt, MSA128BOpnd:$ws, MSA128BOpnd:$wd_in))]";
    case Mips::BMZI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect vsplati8_uimm8:$u8, MSA128BOpnd:$wd_in, MSA128BOpnd:$ws))]";
    case Mips::BMZ_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wt, MSA128BOpnd:$wd_in, MSA128BOpnd:$ws))]";
    case Mips::BNE:
    {
      dbgs() << "[(brcond (i32 (setne GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
    case Mips::BNE64:
    {
      dbgs() << "[(brcond (i32 (setne GPR64Opnd:$rs, GPR64Opnd:$rt)), bb:$offset)]";
    case Mips::BNEGI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (xor MSA128BOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BNEGI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (xor MSA128DOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BNEGI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (xor MSA128HOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BNEGI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (xor MSA128WOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BNEG_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vbneg_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::BNEG_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vbneg_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::BNEG_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vbneg_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::BNEG_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vbneg_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::BNE_MM:
    {
      dbgs() << "[(brcond (i32 (setne GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
    case Mips::BPOSGE32_PSEUDO:
    {
      dbgs() << "[(set GPR32Opnd:$dst, (int_mips_bposge32))]";
    case Mips::BSELI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wd_in, vsplati8_uimm8:$u8, MSA128BOpnd:$ws))]";
    case Mips::BSEL_D_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (v2i64 (vselect MSA128DOpnd:$wd_in, MSA128DOpnd:$wt, MSA128DOpnd:$ws)))]";
    case Mips::BSEL_FD_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (v2f64 (vselect MSA128DOpnd:$wd_in, MSA128DOpnd:$wt, MSA128DOpnd:$ws)))]";
    case Mips::BSEL_FW_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (v4f32 (vselect MSA128WOpnd:$wd_in, MSA128WOpnd:$wt, MSA128WOpnd:$ws)))]";
    case Mips::BSEL_H_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (v8i16 (vselect MSA128HOpnd:$wd_in, MSA128HOpnd:$wt, MSA128HOpnd:$ws)))]";
    case Mips::BSEL_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wd_in, MSA128BOpnd:$wt, MSA128BOpnd:$ws))]";
    case Mips::BSEL_W_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (v4i32 (vselect MSA128WOpnd:$wd_in, MSA128WOpnd:$wt, MSA128WOpnd:$ws)))]";
    case Mips::BSETI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (or MSA128BOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BSETI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (or MSA128DOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BSETI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (or MSA128HOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BSETI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (or MSA128WOpnd:$ws, vsplat_uimm_pow2:$m))]";
    case Mips::BSET_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vbset_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::BSET_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vbset_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::BSET_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vbset_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::BSET_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vbset_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::B_MM:
    {
      dbgs() << "[(br bb:$offset)]";
    case Mips::BuildPairF64:
    {
      dbgs() << "[(set AFGR64Opnd:$dst, (MipsBuildPairF64 GPR32Opnd:$lo, GPR32Opnd:$hi))]";
    case Mips::BuildPairF64_64:
    {
      dbgs() << "[(set FGR64Opnd:$dst, (MipsBuildPairF64 GPR32Opnd:$lo, GPR32Opnd:$hi))]";
    case Mips::CEIL_L_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CEIL_L_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::CEIL_L_S:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CEIL_L_S_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::CEIL_W_D32:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CEIL_W_D64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CEIL_W_D_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CEIL_W_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CEIL_W_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CEIL_W_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CEIL_W_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::CEQI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vseteq_v16i8 MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
    case Mips::CEQI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vseteq_v2i64 MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
    case Mips::CEQI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vseteq_v8i16 MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
    case Mips::CEQI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vseteq_v4i32 MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
    case Mips::CEQ_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vseteq_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::CEQ_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vseteq_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::CEQ_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vseteq_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::CEQ_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vseteq_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::CFC1:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag CCROpnd:$fs))]";
    case Mips::CFC1_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag CCROpnd:$fs))]";
    case Mips::CINS:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsCIns GPR64Opnd:$rs, immZExt5:$pos, imm:$lenm1))]";
    case Mips::CINS32:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsCIns GPR64Opnd:$rs, immZExt5Plus32:$pos, imm:$lenm1))]";
    case Mips::CINS_i32:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsCIns GPR32Opnd:$rs, immZExt5:$pos, imm:$lenm1))]";
    case Mips::CLEI_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetle_v16i8 MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
    case Mips::CLEI_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetle_v2i64 MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
    case Mips::CLEI_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetle_v8i16 MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
    case Mips::CLEI_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetle_v4i32 MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
    case Mips::CLEI_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetule_v16i8 MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
    case Mips::CLEI_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetule_v2i64 MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
    case Mips::CLEI_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetule_v8i16 MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
    case Mips::CLEI_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetule_v4i32 MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
    case Mips::CLE_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetle_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::CLE_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetle_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::CLE_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetle_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::CLE_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetle_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::CLE_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetule_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::CLE_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetule_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::CLE_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetule_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::CLE_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetule_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::CLO:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctlz (not GPR32Opnd:$rs)))]";
    case Mips::CLO_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctlz (not GPR32Opnd:$rs)))]";
    case Mips::CLO_R6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctlz (not GPR32Opnd:$rs)))]";
    case Mips::CLTI_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetlt_v16i8 MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
    case Mips::CLTI_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetlt_v2i64 MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
    case Mips::CLTI_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetlt_v8i16 MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
    case Mips::CLTI_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetlt_v4i32 MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
    case Mips::CLTI_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetult_v16i8 MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
    case Mips::CLTI_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetult_v2i64 MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
    case Mips::CLTI_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetult_v8i16 MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
    case Mips::CLTI_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetult_v4i32 MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
    case Mips::CLT_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetlt_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::CLT_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetlt_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::CLT_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetlt_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::CLT_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetlt_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::CLT_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsetult_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::CLT_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsetult_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::CLT_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsetult_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::CLT_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsetult_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::CLZ:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctlz GPR32Opnd:$rs))]";
    case Mips::CLZ_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctlz GPR32Opnd:$rs))]";
    case Mips::CLZ_R6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctlz GPR32Opnd:$rs))]";
    case Mips::CMPGDU_EQ_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGDU_EQ_QB_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGDU_LE_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGDU_LE_QB_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGDU_LT_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGDU_LT_QB_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGU_EQ_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGU_EQ_QB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGU_LE_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGU_LE_QB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGU_LT_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPGU_LT_QB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::CMPU_EQ_QB:
    {
      dbgs() << "[(int_mips_cmpu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMPU_EQ_QB_MM:
    {
      dbgs() << "[(int_mips_cmpu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMPU_LE_QB:
    {
      dbgs() << "[(int_mips_cmpu_le_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMPU_LE_QB_MM:
    {
      dbgs() << "[(int_mips_cmpu_le_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMPU_LT_QB:
    {
      dbgs() << "[(int_mips_cmpu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMPU_LT_QB_MM:
    {
      dbgs() << "[(int_mips_cmpu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_AF_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_AF_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_EQ_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_EQ_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_EQ_PH:
    {
      dbgs() << "[(int_mips_cmp_eq_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_EQ_PH_MM:
    {
      dbgs() << "[(int_mips_cmp_eq_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_EQ_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_EQ_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_F_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_F_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_LE_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_LE_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_LE_PH:
    {
      dbgs() << "[(int_mips_cmp_le_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_LE_PH_MM:
    {
      dbgs() << "[(int_mips_cmp_le_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_LE_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_LE_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_LT_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_LT_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_LT_PH:
    {
      dbgs() << "[(int_mips_cmp_lt_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_LT_PH_MM:
    {
      dbgs() << "[(int_mips_cmp_lt_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
    case Mips::CMP_LT_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_LT_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SAF_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SAF_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SAF_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SAF_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SEQ_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SEQ_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SEQ_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SEQ_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SLE_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SLE_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SLE_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SLE_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SLT_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SLT_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SLT_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SLT_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SUEQ_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SUEQ_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SUEQ_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SUEQ_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SULE_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SULE_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SULE_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SULE_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SULT_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SULT_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SULT_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SULT_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SUN_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SUN_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_SUN_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_SUN_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_UEQ_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_UEQ_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_UEQ_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_UEQ_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_ULE_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_ULE_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_ULE_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_ULE_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_ULT_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_ULT_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_ULT_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_ULT_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_UN_D:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_UN_D_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::CMP_UN_S:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CMP_UN_S_MMR6:
    {
      dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::COPY_FD_PSEUDO:
    {
      dbgs() << "[(set FGR64:$wd, (vector_extract (v2f64 MSA128D:$ws), immZExt1Ptr:$n))]";
    case Mips::COPY_FW_PSEUDO:
    {
      dbgs() << "[(set FGR32:$wd, (vector_extract (v4f32 MSA128W:$ws), immZExt2Ptr:$n))]";
    case Mips::COPY_S_B:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (vextract_sext_i8 (v16i8 MSA128BOpnd:$ws), immZExt4Ptr:$n))]";
    case Mips::COPY_S_D:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (vextract_sext_i64 (v2i64 MSA128DOpnd:$ws), immZExt1Ptr:$n))]";
    case Mips::COPY_S_H:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (vextract_sext_i16 (v8i16 MSA128HOpnd:$ws), immZExt3Ptr:$n))]";
    case Mips::COPY_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (vextract_sext_i32 (v4i32 MSA128WOpnd:$ws), immZExt2Ptr:$n))]";
    case Mips::COPY_U_B:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (vextract_zext_i8 (v16i8 MSA128BOpnd:$ws), immZExt4Ptr:$n))]";
    case Mips::COPY_U_H:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (vextract_zext_i16 (v8i16 MSA128HOpnd:$ws), immZExt3Ptr:$n))]";
    case Mips::COPY_U_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (vextract_zext_i32 (v4i32 MSA128WOpnd:$ws), immZExt2Ptr:$n))]";
    case Mips::CTC1:
    {
      dbgs() << "[(set CCROpnd:$fs, (null_frag GPR32Opnd:$rt))]";
    case Mips::CTC1_MM:
    {
      dbgs() << "[(set CCROpnd:$fs, (null_frag GPR32Opnd:$rt))]";
    case Mips::CVT_D32_S:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D32_S_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D32_W:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D32_W_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D64_L:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_D64_S:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D64_S_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D64_W:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D64_W_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_D_L_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_L_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_L_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_L_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_L_S:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_L_S_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_L_S_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_PS_PW64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_PS_S64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::CVT_PW_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_S_D32:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CVT_S_D32_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CVT_S_D64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_S_D64_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_S_L:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_S_L_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_S_PL64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_S_PU64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_S_W:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_S_W_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_S_W_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_W_D32:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CVT_W_D32_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::CVT_W_D64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_W_D64_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::CVT_W_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_W_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::CVT_W_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::DADD:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DADDi:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, null_frag:$imm16))]";
    case Mips::DADDiu:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (add GPR64Opnd:$rs, immSExt16:$imm16))]";
    case Mips::DADDu:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (add GPR64Opnd:$rs, GPR64Opnd:$rt))]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::DCLO:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (ctlz (not GPR64Opnd:$rs)))]";
    case Mips::DCLO_R6:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (ctlz (not GPR64Opnd:$rs)))]";
    case Mips::DCLZ:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (ctlz GPR64Opnd:$rs))]";
    case Mips::DCLZ_R6:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (ctlz GPR64Opnd:$rs))]";
    case Mips::DDIV:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (sdiv GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DDIVU:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (udiv GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DEXT:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsExt GPR64Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size))]";
    case Mips::DEXTM:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsExt GPR64Opnd:$rs, immZExt5:$pos, immZExt5Plus33:$size))]";
    case Mips::DEXTU:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsExt GPR64Opnd:$rs, immZExt5Plus32:$pos, immZExt5Plus1:$size))]";
    case Mips::DINS:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size, GPR64Opnd:$src))]";
    case Mips::DINSM:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5:$pos, immZExtRange2To64:$size, GPR64Opnd:$src))]";
    case Mips::DINSU:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5Plus32:$pos, immZExt5Plus1:$size, GPR64Opnd:$src))]";
    case Mips::DIV:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sdiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::DIVU:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (udiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::DIVU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (udiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::DIV_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sdiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::DIV_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (sdiv MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DIV_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (sdiv MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::DIV_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (sdiv MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DIV_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (sdiv MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DIV_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (udiv MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DIV_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (udiv MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::DIV_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (udiv MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DIV_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (udiv MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DLSA:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (add GPR64Opnd:$rt, (shl GPR64Opnd:$rs, immZExt2Lsa:$sa)))]";
    case Mips::DMFC1:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (bitconvert FGR64Opnd:$fs))]";
    case Mips::DMOD:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (srem GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DMODU:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (urem GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DMTC1:
    {
      dbgs() << "[(set FGR64Opnd:$fs, (bitconvert GPR64Opnd:$rt))]";
    case Mips::DMUH:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (mulhs GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DMUHU:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (mulhu GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DMUL:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (mul GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DMULU:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DMUL_R6:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (mul GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DOTP_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dotp_s_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DOTP_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dotp_s_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DOTP_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dotp_s_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DOTP_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dotp_u_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DOTP_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dotp_u_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DOTP_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dotp_u_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DPADD_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpadd_s_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DPADD_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpadd_s_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DPADD_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpadd_s_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DPADD_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpadd_u_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DPADD_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpadd_u_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DPADD_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpadd_u_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DPAQX_SA_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQX_SA_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQX_S_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQX_S_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQ_SA_L_W:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQ_SA_L_W_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQ_S_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAQ_S_W_PH_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAU_H_QBL:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAU_H_QBL_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAU_H_QBR:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAU_H_QBR_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAX_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPAX_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPA_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPA_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPOP:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (ctpop GPR64Opnd:$rs))]";
    case Mips::DPSQX_SA_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQX_SA_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQX_S_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQX_S_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQ_SA_L_W:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQ_SA_L_W_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQ_S_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSQ_S_W_PH_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSUB_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpsub_s_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DPSUB_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpsub_s_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DPSUB_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpsub_s_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DPSUB_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpsub_u_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::DPSUB_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpsub_u_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::DPSUB_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpsub_u_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::DPSU_H_QBL:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSU_H_QBL_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSU_H_QBR:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSU_H_QBR_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSX_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPSX_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPS_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPS_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DPS_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPS_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::DROTR:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (rotr GPR64Opnd:$rt, immZExt6:$shamt))]";
    case Mips::DROTR32:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
    case Mips::DROTRV:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (rotr GPR64Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::DSLL:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (shl GPR64Opnd:$rt, immZExt6:$shamt))]";
    case Mips::DSLL32:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
    case Mips::DSLLV:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (shl GPR64Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::DSRA:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (sra GPR64Opnd:$rt, immZExt6:$shamt))]";
    case Mips::DSRA32:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
    case Mips::DSRAV:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (sra GPR64Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::DSRL:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (srl GPR64Opnd:$rt, immZExt6:$shamt))]";
    case Mips::DSRL32:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
    case Mips::DSRLV:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (srl GPR64Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::DSUB:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::DSUBu:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (sub GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::ERet:
    {
      dbgs() << "[(MipsERet)]";
    case Mips::EXT:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsExt GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size))]";
    case Mips::EXTS:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5:$pos, imm:$lenm1))]";
    case Mips::EXTS32:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5Plus32:$pos, imm:$lenm1))]";
    case Mips::EXT_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsExt GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size))]";
    case Mips::EXT_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsExt GPR32Opnd:$rs, imm:$pos, imm:$size))]";
    case Mips::ExtractElementF64:
    {
      dbgs() << "[(set GPR32Opnd:$dst, (MipsExtractElementF64 AFGR64Opnd:$src, imm:$n))]";
    case Mips::ExtractElementF64_64:
    {
      dbgs() << "[(set GPR32Opnd:$dst, (MipsExtractElementF64 FGR64Opnd:$src, imm:$n))]";
    case Mips::FABS_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fabs MSA128DOpnd:$ws))]";
    case Mips::FABS_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fabs AFGR64Opnd:$fs))]";
    case Mips::FABS_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fabs AFGR64Opnd:$fs))]";
    case Mips::FABS_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fabs FGR64Opnd:$fs))]";
    case Mips::FABS_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fabs FGR64Opnd:$fs))]";
    case Mips::FABS_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fabs FGR32Opnd:$fs))]";
    case Mips::FABS_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fabs FGR32Opnd:$fs))]";
    case Mips::FABS_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fabs MSA128WOpnd:$ws))]";
    case Mips::FADD_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fadd MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FADD_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fadd AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FADD_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fadd AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FADD_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fadd FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FADD_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fadd FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FADD_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fadd FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FADD_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fadd FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FADD_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fadd FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FADD_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fadd MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCAF_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fcaf_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCAF_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fcaf_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCEQ_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetoeq_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCEQ_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetoeq_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCLASS_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fclass_d MSA128DOpnd:$ws))]";
    case Mips::FCLASS_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fclass_w MSA128WOpnd:$ws))]";
    case Mips::FCLE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetole_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCLE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetole_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCLT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetolt_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCLT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetolt_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCMP_D32:
    {
      dbgs() << "[(MipsFPCmp AFGR64:$fs, AFGR64:$ft, imm:$cond)]";
    case Mips::FCMP_D32_MM:
    {
      dbgs() << "[(MipsFPCmp AFGR64:$fs, AFGR64:$ft, imm:$cond)]";
    case Mips::FCMP_D64:
    {
      dbgs() << "[(MipsFPCmp FGR64:$fs, FGR64:$ft, imm:$cond)]";
    case Mips::FCMP_S32:
    {
      dbgs() << "[(MipsFPCmp FGR32:$fs, FGR32:$ft, imm:$cond)]";
    case Mips::FCMP_S32_MM:
    {
      dbgs() << "[(MipsFPCmp FGR32:$fs, FGR32:$ft, imm:$cond)]";
    case Mips::FCNE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetone_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCNE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetone_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCOR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetord_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCOR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetord_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCUEQ_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetueq_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCUEQ_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetueq_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCULE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetule_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCULE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetule_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCULT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetult_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCULT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetult_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCUNE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetune_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCUNE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetune_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FCUN_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vfsetun_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FCUN_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vfsetun_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FDIV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fdiv MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FDIV_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fdiv AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FDIV_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fdiv AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FDIV_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fdiv FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FDIV_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fdiv FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FDIV_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fdiv FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FDIV_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fdiv FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FDIV_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fdiv FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FDIV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fdiv MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FEXDO_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_fexdo_h MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FEXDO_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fexdo_w MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FEXP2_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (mul_fexp2 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FEXP2_D_1_PSEUDO:
    {
      dbgs() << "[(set MSA128D:$wd, (fexp2 MSA128D:$ws))]";
    case Mips::FEXP2_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (mul_fexp2 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FEXP2_W_1_PSEUDO:
    {
      dbgs() << "[(set MSA128W:$wd, (fexp2 MSA128W:$ws))]";
    case Mips::FEXUPL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fexupl_d MSA128WOpnd:$ws))]";
    case Mips::FEXUPL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fexupl_w MSA128HOpnd:$ws))]";
    case Mips::FEXUPR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fexupr_d MSA128WOpnd:$ws))]";
    case Mips::FEXUPR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fexupr_w MSA128HOpnd:$ws))]";
    case Mips::FFINT_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (sint_to_fp MSA128DOpnd:$ws))]";
    case Mips::FFINT_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (sint_to_fp MSA128WOpnd:$ws))]";
    case Mips::FFINT_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (uint_to_fp MSA128DOpnd:$ws))]";
    case Mips::FFINT_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (uint_to_fp MSA128WOpnd:$ws))]";
    case Mips::FFQL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ffql_d MSA128WOpnd:$ws))]";
    case Mips::FFQL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ffql_w MSA128HOpnd:$ws))]";
    case Mips::FFQR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ffqr_d MSA128WOpnd:$ws))]";
    case Mips::FFQR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ffqr_w MSA128HOpnd:$ws))]";
    case Mips::FILL_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (v16i8 (vsplati8 GPR32Opnd:$rs)))]";
    case Mips::FILL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (v2i64 (vsplati64 GPR64Opnd:$rs)))]";
    case Mips::FILL_FD_PSEUDO:
    {
      dbgs() << "[(set MSA128D:$wd, (vsplatf64 FGR64:$fs))]";
    case Mips::FILL_FW_PSEUDO:
    {
      dbgs() << "[(set MSA128W:$wd, (vsplatf32 FGR32:$fs))]";
    case Mips::FILL_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (v8i16 (vsplati16 GPR32Opnd:$rs)))]";
    case Mips::FILL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (v4i32 (vsplati32 GPR32Opnd:$rs)))]";
    case Mips::FLOG2_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (flog2 MSA128DOpnd:$ws))]";
    case Mips::FLOG2_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (flog2 MSA128WOpnd:$ws))]";
    case Mips::FLOOR_L_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::FLOOR_L_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::FLOOR_L_S:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::FLOOR_L_S_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::FLOOR_W_D32:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::FLOOR_W_D64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::FLOOR_W_D_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag AFGR64Opnd:$fs))]";
    case Mips::FLOOR_W_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::FLOOR_W_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::FLOOR_W_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::FLOOR_W_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::FMADD_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fma MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMADD_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fma MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FMAX_A_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmax_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMAX_A_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmax_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FMAX_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmax_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMAX_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmax_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FMIN_A_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmin_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMIN_A_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmin_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FMIN_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmin_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMIN_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmin_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FMOV_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::FMOV_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::FMOV_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::FMOV_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::FMOV_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::FMOV_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::FMOV_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::FMOV_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::FMSUB_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsFMS MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMSUB_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsFMS MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FMUL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fmul MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FMUL_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FMUL_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FMUL_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fmul FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FMUL_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fmul FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FMUL_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fmul FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FMUL_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fmul FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FMUL_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fmul FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FMUL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fmul MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FNEG_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fneg AFGR64Opnd:$fs))]";
    case Mips::FNEG_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fneg AFGR64Opnd:$fs))]";
    case Mips::FNEG_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fneg FGR64Opnd:$fs))]";
    case Mips::FNEG_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fneg FGR64Opnd:$fs))]";
    case Mips::FNEG_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fneg FGR32Opnd:$fs))]";
    case Mips::FNEG_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fneg FGR32Opnd:$fs))]";
    case Mips::FNEG_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (fneg FGR32Opnd:$fs))]";
    case Mips::FRCP_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_frcp_d MSA128DOpnd:$ws))]";
    case Mips::FRCP_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_frcp_w MSA128WOpnd:$ws))]";
    case Mips::FRINT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (frint MSA128DOpnd:$ws))]";
    case Mips::FRINT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (frint MSA128WOpnd:$ws))]";
    case Mips::FRSQRT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_frsqrt_d MSA128DOpnd:$ws))]";
    case Mips::FRSQRT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_frsqrt_w MSA128WOpnd:$ws))]";
    case Mips::FSAF_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsaf_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSAF_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsaf_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSEQ_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fseq_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSEQ_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fseq_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSLE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsle_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSLE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsle_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSLT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fslt_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSLT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fslt_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSNE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsne_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSNE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsne_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSOR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsor_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSOR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsor_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSQRT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fsqrt MSA128DOpnd:$ws))]";
    case Mips::FSQRT_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsqrt AFGR64Opnd:$fs))]";
    case Mips::FSQRT_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsqrt AFGR64Opnd:$fs))]";
    case Mips::FSQRT_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsqrt FGR64Opnd:$fs))]";
    case Mips::FSQRT_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsqrt FGR64Opnd:$fs))]";
    case Mips::FSQRT_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsqrt FGR32Opnd:$fs))]";
    case Mips::FSQRT_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsqrt FGR32Opnd:$fs))]";
    case Mips::FSQRT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fsqrt MSA128WOpnd:$ws))]";
    case Mips::FSUB_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fsub MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSUB_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FSUB_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
    case Mips::FSUB_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsub FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FSUB_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsub FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::FSUB_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FSUB_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FSUB_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub FGR32Opnd:$fs, FGR32Opnd:$ft))]";
    case Mips::FSUB_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fsub MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSUEQ_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsueq_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSUEQ_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsueq_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSULE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsule_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSULE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsule_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSULT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsult_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSULT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsult_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSUNE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsune_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSUNE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsune_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FSUN_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsun_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FSUN_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsun_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FTINT_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ftint_s_d MSA128DOpnd:$ws))]";
    case Mips::FTINT_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ftint_s_w MSA128WOpnd:$ws))]";
    case Mips::FTINT_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ftint_u_d MSA128DOpnd:$ws))]";
    case Mips::FTINT_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ftint_u_w MSA128WOpnd:$ws))]";
    case Mips::FTQ_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_ftq_h MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::FTQ_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ftq_w MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::FTRUNC_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fp_to_sint MSA128DOpnd:$ws))]";
    case Mips::FTRUNC_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fp_to_sint MSA128WOpnd:$ws))]";
    case Mips::FTRUNC_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (fp_to_uint MSA128DOpnd:$ws))]";
    case Mips::FTRUNC_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (fp_to_uint MSA128WOpnd:$ws))]";
    case Mips::HADD_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hadd_s_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::HADD_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hadd_s_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::HADD_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hadd_s_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::HADD_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hadd_u_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::HADD_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hadd_u_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::HADD_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hadd_u_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::HSUB_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hsub_s_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::HSUB_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hsub_s_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::HSUB_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hsub_s_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::HSUB_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hsub_u_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::HSUB_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hsub_u_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::HSUB_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hsub_u_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ILVEV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVEV MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ILVEV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVEV MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ILVEV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVEV MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ILVEV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVEV MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ILVL_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVL MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ILVL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVL MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ILVL_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVL MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ILVL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVL MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ILVOD_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVOD MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ILVOD_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVOD MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ILVOD_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVOD MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ILVOD_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVOD MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ILVR_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVR MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::ILVR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVR MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::ILVR_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVR MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::ILVR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVR MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::INS:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size, GPR32Opnd:$src))]";
    case Mips::INSERT_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vinsert_v16i8 MSA128BOpnd:$wd_in, GPR32Opnd:$rs, immZExt4Ptr:$n))]";
    case Mips::INSERT_B_VIDX64_PSEUDO:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vector_insert (v16i8 MSA128BOpnd:$wd_in), GPR32Opnd:$fs, GPR64Opnd:$n))]";
    case Mips::INSERT_B_VIDX_PSEUDO:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vector_insert (v16i8 MSA128BOpnd:$wd_in), GPR32Opnd:$fs, GPR32Opnd:$n))]";
    case Mips::INSERT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vinsert_v2i64 MSA128DOpnd:$wd_in, GPR64Opnd:$rs, immZExt1Ptr:$n))]";
    case Mips::INSERT_D_VIDX64_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2i64 MSA128DOpnd:$wd_in), GPR64Opnd:$fs, GPR64Opnd:$n))]";
    case Mips::INSERT_D_VIDX_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2i64 MSA128DOpnd:$wd_in), GPR64Opnd:$fs, GPR32Opnd:$n))]";
    case Mips::INSERT_FD_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2f64 MSA128DOpnd:$wd_in), FGR64Opnd:$fs, immZExt1Ptr:$n))]";
    case Mips::INSERT_FD_VIDX64_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2f64 MSA128DOpnd:$wd_in), FGR64Opnd:$fs, GPR64Opnd:$n))]";
    case Mips::INSERT_FD_VIDX_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2f64 MSA128DOpnd:$wd_in), FGR64Opnd:$fs, GPR32Opnd:$n))]";
    case Mips::INSERT_FW_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4f32 MSA128WOpnd:$wd_in), FGR32Opnd:$fs, immZExt2Ptr:$n))]";
    case Mips::INSERT_FW_VIDX64_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4f32 MSA128WOpnd:$wd_in), FGR32Opnd:$fs, GPR64Opnd:$n))]";
    case Mips::INSERT_FW_VIDX_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4f32 MSA128WOpnd:$wd_in), FGR32Opnd:$fs, GPR32Opnd:$n))]";
    case Mips::INSERT_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vinsert_v8i16 MSA128HOpnd:$wd_in, GPR32Opnd:$rs, immZExt3Ptr:$n))]";
    case Mips::INSERT_H_VIDX64_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vector_insert (v8i16 MSA128HOpnd:$wd_in), GPR32Opnd:$fs, GPR64Opnd:$n))]";
    case Mips::INSERT_H_VIDX_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vector_insert (v8i16 MSA128HOpnd:$wd_in), GPR32Opnd:$fs, GPR32Opnd:$n))]";
    case Mips::INSERT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vinsert_v4i32 MSA128WOpnd:$wd_in, GPR32Opnd:$rs, immZExt2Ptr:$n))]";
    case Mips::INSERT_W_VIDX64_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4i32 MSA128WOpnd:$wd_in), GPR32Opnd:$fs, GPR64Opnd:$n))]";
    case Mips::INSERT_W_VIDX_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4i32 MSA128WOpnd:$wd_in), GPR32Opnd:$fs, GPR32Opnd:$n))]";
    case Mips::INSV:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_insv GPR32Opnd:$src, GPR32Opnd:$rs))]";
    case Mips::INSVE_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (insve_v16i8 MSA128BOpnd:$wd_in, timmZExt4:$n, MSA128BOpnd:$ws, immz:$n2))]";
    case Mips::INSVE_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (insve_v2i64 MSA128DOpnd:$wd_in, timmZExt1:$n, MSA128DOpnd:$ws, immz:$n2))]";
    case Mips::INSVE_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (insve_v8i16 MSA128HOpnd:$wd_in, timmZExt3:$n, MSA128HOpnd:$ws, immz:$n2))]";
    case Mips::INSVE_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (insve_v4i32 MSA128WOpnd:$wd_in, timmZExt2:$n, MSA128WOpnd:$ws, immz:$n2))]";
    case Mips::INSV_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_insv GPR32Opnd:$src, GPR32Opnd:$rs))]";
    case Mips::INS_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size, GPR32Opnd:$src))]";
    case Mips::INS_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsIns GPR32Opnd:$rs, imm:$pos, imm:$size, GPR32Opnd:$src))]";
    case Mips::J:
    {
      dbgs() << "[(br bb:$target)]";
    case Mips::JAL:
    {
      dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
    case Mips::JALR16_MM:
    {
      dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
    case Mips::JALR64Pseudo:
    {
      dbgs() << "[(MipsJmpLink GPR64Opnd:$rs)]";
    case Mips::JALRC16_MMR6:
    {
      dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
    case Mips::JALRHB64Pseudo:
    {
      dbgs() << "[(MipsJmpLink GPR64Opnd:$rs)]";
    case Mips::JALRHBPseudo:
    {
      dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
    case Mips::JALRPseudo:
    {
      dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
    case Mips::JALX:
    {
      dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
    case Mips::JALX_MM:
    {
      dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
    case Mips::JAL_MM:
    {
      dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
    case Mips::JR:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rs)]";
    case Mips::JR64:
    {
      dbgs() << "[(null_frag GPR64Opnd:$rs)]";
    case Mips::JR_MM:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rs)]";
    case Mips::J_MM:
    {
      dbgs() << "[(br bb:$target)]";
    case Mips::JumpLinkReg16:
    {
      dbgs() << "[(MipsJmpLink CPU16Regs:$rs)]";
    case Mips::LB:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (sextloadi8 addr:$addr))]";
    case Mips::LB64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (sextloadi8 addr:$addr))]";
    case Mips::LBE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
    case Mips::LBUX:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lbux iPTR:$base, iPTR:$index))]";
    case Mips::LBUX_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lbux iPTR:$base, iPTR:$index))]";
    case Mips::LB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (sextloadi8 addr:$addr))]";
    case Mips::LBu:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (zextloadi8 addrDefault:$addr))]";
    case Mips::LBu64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (zextloadi8 addr:$addr))]";
    case Mips::LBuE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
    case Mips::LBu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (zextloadi8 addr:$addr))]";
    case Mips::LD:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (load addr:$addr))]";
    case Mips::LDC1:
    {
      dbgs() << "[(set AFGR64Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LDC164:
    {
      dbgs() << "[(set FGR64Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LDC1_D64_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (load addrimm16:$addr))]";
    case Mips::LDC1_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LDC2:
    {
      dbgs() << "[(set COP2Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LDC2_MMR6:
    {
      dbgs() << "[(set COP2Opnd:$rt, (load addrimm11:$addr))]";
    case Mips::LDC3:
    {
      dbgs() << "[(set COP3Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LDL:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsLDL addr:$addr, GPR64Opnd:$src))]";
    case Mips::LDR:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsLDR addr:$addr, GPR64Opnd:$src))]";
    case Mips::LDR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$dst, (int_mips_ldr_d iPTR:$ptr, GPR32:$imm))]";
    case Mips::LDR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$dst, (int_mips_ldr_w iPTR:$ptr, GPR32:$imm))]";
    case Mips::LDXC1:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
    case Mips::LDXC164:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
    case Mips::LD_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (v16i8 (load addrimm10:$addr)))]";
    case Mips::LD_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (v2i64 (load addrimm10lsl3:$addr)))]";
    case Mips::LD_F16:
    {
      dbgs() << "[(set MSA128F16:$ws, (f16 (load addrimm10:$addr)))]";
    case Mips::LD_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (v8i16 (load addrimm10lsl1:$addr)))]";
    case Mips::LD_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (v4i32 (load addrimm10lsl2:$addr)))]";
    case Mips::LEA_ADDiu:
    {
      dbgs() << "[(set GPR32Opnd:$rt, addr:$addr)]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::LEA_ADDiu64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, addr:$addr)]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::LEA_ADDiu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, addr:$addr)]";
      MachineRegister TmpRes = SimAdd(Inst);
      break;
    }
    case Mips::LH:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (sextloadi16 addrDefault:$addr))]";
    case Mips::LH64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (sextloadi16 addr:$addr))]";
    case Mips::LHE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
    case Mips::LHX:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lhx iPTR:$base, iPTR:$index))]";
    case Mips::LHX_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lhx iPTR:$base, iPTR:$index))]";
    case Mips::LH_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (sextloadi16 addrDefault:$addr))]";
    case Mips::LHu:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (zextloadi16 addr:$addr))]";
    case Mips::LHu64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (zextloadi16 addr:$addr))]";
    case Mips::LHuE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
    case Mips::LHu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (zextloadi16 addr:$addr))]";
    case Mips::LOAD_ACC128:
    {
      dbgs() << "[(set ACC128:$rt, (null_frag addr:$addr))]";
    case Mips::LOAD_ACC64:
    {
      dbgs() << "[(set ACC64:$rt, (null_frag addr:$addr))]";
    case Mips::LOAD_ACC64DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$rt, (null_frag addr:$addr))]";
    case Mips::LOAD_CCOND_DSP:
    {
      dbgs() << "[(set DSPCC:$rt, (null_frag addr:$addr))]";
    case Mips::LSA:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (add GPR32Opnd:$rt, (shl GPR32Opnd:$rs, immZExt2Lsa:$sa)))]";
    case Mips::LUXC1:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag (add iPTR:$base, iPTR:$index)))]";
    case Mips::LUXC164:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag (add iPTR:$base, iPTR:$index)))]";
    case Mips::LUXC1_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag (add iPTR:$base, iPTR:$index)))]";
    case Mips::LW:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LW64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (sextloadi32 addr:$addr))]";
    case Mips::LWC1:
    {
      dbgs() << "[(set FGR32Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LWC1_MM:
    {
      dbgs() << "[(set FGR32Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LWC2:
    {
      dbgs() << "[(set COP2Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LWC2_MMR6:
    {
      dbgs() << "[(set COP2Opnd:$rt, (load addrimm11:$addr))]";
    case Mips::LWC3:
    {
      dbgs() << "[(set COP3Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LWDSP:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag addr:$addr))]";
    case Mips::LWDSP_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag addr:$addr))]";
    case Mips::LWE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
    case Mips::LWL:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsLWL addr:$addr, GPR32Opnd:$src))]";
    case Mips::LWL64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsLWL addr:$addr, GPR64Opnd:$src))]";
    case Mips::LWLE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsLWL addrimm12:$addr, GPR32Opnd:$src))]";
    case Mips::LWL_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsLWL addrimm12:$addr, GPR32Opnd:$src))]";
    case Mips::LWR:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsLWR addr:$addr, GPR32Opnd:$src))]";
    case Mips::LWR64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (MipsLWR addr:$addr, GPR64Opnd:$src))]";
    case Mips::LWRE_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsLWR addrimm12:$addr, GPR32Opnd:$src))]";
    case Mips::LWR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (MipsLWR addrimm12:$addr, GPR32Opnd:$src))]";
    case Mips::LWU_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (zextloadi32 addrimm12:$addr))]";
    case Mips::LWX:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lwx iPTR:$base, iPTR:$index))]";
    case Mips::LWXC1:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
    case Mips::LWXC1_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
    case Mips::LWX_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lwx iPTR:$base, iPTR:$index))]";
    case Mips::LW_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
    case Mips::LW_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (load addrDefault:$addr))]";
    case Mips::LWu:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (zextloadi32 addr:$addr))]";
    case Mips::MADDR_Q_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_maddr_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MADDR_Q_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_maddr_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MADDU_DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MADDU_DSP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MADDV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (muladd MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MADDV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (muladd MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MADDV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (muladd MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MADDV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (muladd MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MADD_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fadd (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
    case Mips::MADD_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
    case Mips::MADD_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fadd (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr))]";
    case Mips::MADD_DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MADD_DSP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MADD_Q_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_madd_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MADD_Q_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_madd_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MADD_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fadd (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
    case Mips::MADD_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
    case Mips::MAQ_SA_W_PHL:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_SA_W_PHL_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_SA_W_PHR:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_SA_W_PHR_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_S_W_PHL:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_S_W_PHL_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_S_W_PHR:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAQ_S_W_PHR_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MAXI_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (smax MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
    case Mips::MAXI_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (smax MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
    case Mips::MAXI_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (smax MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
    case Mips::MAXI_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (smax MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
    case Mips::MAXI_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (umax MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
    case Mips::MAXI_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (umax MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
    case Mips::MAXI_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (umax MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
    case Mips::MAXI_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (umax MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
    case Mips::MAX_A_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_max_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MAX_A_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_max_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MAX_A_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_max_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MAX_A_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_max_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MAX_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (smax MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MAX_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (smax MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MAX_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (smax MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MAX_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (smax MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MAX_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (umax MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MAX_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (umax MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MAX_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (umax MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MAX_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (umax MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MFC1:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (bitconvert FGR32Opnd:$fs))]";
    case Mips::MFC1_D64:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag FGR64Opnd:$fs))]";
    case Mips::MFC1_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (bitconvert FGR32Opnd:$fs))]";
    case Mips::MFC1_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (bitconvert FGR32Opnd:$fs))]";
    case Mips::MFHC1_D32:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag AFGR64Opnd:$fs))]";
    case Mips::MFHC1_D32_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag AFGR64Opnd:$fs))]";
    case Mips::MFHC1_D64:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag FGR64Opnd:$fs))]";
    case Mips::MFHC1_D64_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (null_frag FGR64Opnd:$fs))]";
    case Mips::MFHI_DSP:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (MipsMFHI ACC64DSPOpnd:$ac))]";
    case Mips::MFHI_DSP_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rs, (MipsMFHI ACC64DSPOpnd:$ac))]";
    case Mips::MFLO_DSP:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (MipsMFLO ACC64DSPOpnd:$ac))]";
    case Mips::MFLO_DSP_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rs, (MipsMFLO ACC64DSPOpnd:$ac))]";
    case Mips::MINI_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (smin MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
    case Mips::MINI_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (smin MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
    case Mips::MINI_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (smin MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
    case Mips::MINI_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (smin MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
    case Mips::MINI_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (umin MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
    case Mips::MINI_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (umin MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
    case Mips::MINI_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (umin MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
    case Mips::MINI_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (umin MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
    case Mips::MIN_A_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_min_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MIN_A_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_min_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MIN_A_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_min_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MIN_A_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_min_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MIN_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (smin MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MIN_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (smin MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MIN_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (smin MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MIN_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (smin MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MIN_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (umin MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MIN_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (umin MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MIN_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (umin MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MIN_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (umin MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MIPSeh_return32:
    {
      dbgs() << "[(MIPSehret GPR32:$spoff, GPR32:$dst)]";
    case Mips::MIPSeh_return64:
    {
      dbgs() << "[(MIPSehret GPR64:$spoff, GPR64:$dst)]";
    case Mips::MOD:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (srem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MODSUB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_modsub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MODSUB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_modsub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MODU:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (urem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MODU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (urem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MOD_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (srem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MOD_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (srem MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MOD_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (srem MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MOD_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (srem MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MOD_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (srem MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MOD_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (urem MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MOD_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (urem MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MOD_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (urem MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MOD_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (urem MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MOVF_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_F AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
    case Mips::MOVF_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_F AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
    case Mips::MOVF_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (MipsCMovFP_F FGR64Opnd:$fs, FCCRegsOpnd:$fcc, FGR64Opnd:$F))]";
    case Mips::MOVF_I:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_F GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
    case Mips::MOVF_I64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (MipsCMovFP_F GPR64Opnd:$rs, FCCRegsOpnd:$fcc, GPR64Opnd:$F))]";
    case Mips::MOVF_I_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_F GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
    case Mips::MOVF_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_F FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
    case Mips::MOVF_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_F FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
    case Mips::MOVT_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_T AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
    case Mips::MOVT_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_T AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
    case Mips::MOVT_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (MipsCMovFP_T FGR64Opnd:$fs, FCCRegsOpnd:$fcc, FGR64Opnd:$F))]";
    case Mips::MOVT_I:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_T GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
    case Mips::MOVT_I64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (MipsCMovFP_T GPR64Opnd:$rs, FCCRegsOpnd:$fcc, GPR64Opnd:$F))]";
    case Mips::MOVT_I_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_T GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
    case Mips::MOVT_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_T FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
    case Mips::MOVT_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_T FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
    case Mips::MSA_FP_EXTEND_D_PSEUDO:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (f64 (fpextend MSA128F16:$ws)))]";
    case Mips::MSA_FP_EXTEND_W_PSEUDO:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (f32 (fpextend MSA128F16:$ws)))]";
    case Mips::MSA_FP_ROUND_D_PSEUDO:
    {
      dbgs() << "[(set MSA128F16:$wd, (f16 (fpround FGR64Opnd:$fs)))]";
    case Mips::MSA_FP_ROUND_W_PSEUDO:
    {
      dbgs() << "[(set MSA128F16:$wd, (f16 (fpround FGR32Opnd:$fs)))]";
    case Mips::MSUBR_Q_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_msubr_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MSUBR_Q_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_msubr_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MSUBU_DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MSUBU_DSP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MSUBV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (mulsub MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MSUBV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (mulsub MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MSUBV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (mulsub MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MSUBV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (mulsub MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MSUB_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
    case Mips::MSUB_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
    case Mips::MSUB_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsub (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr))]";
    case Mips::MSUB_DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MSUB_DSP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MSUB_Q_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_msub_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MSUB_Q_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_msub_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MSUB_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
    case Mips::MSUB_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
    case Mips::MTC1:
    {
      dbgs() << "[(set FGR32Opnd:$fs, (bitconvert GPR32Opnd:$rt))]";
    case Mips::MTC1_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fs, (null_frag GPR32Opnd:$rt))]";
    case Mips::MTC1_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fs, (null_frag GPR32Opnd:$rt))]";
    case Mips::MTC1_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fs, (bitconvert GPR32Opnd:$rt))]";
    case Mips::MTC1_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$fs, (bitconvert GPR32Opnd:$rt))]";
    case Mips::MTHLIP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMTHLIP GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
    case Mips::MTHLIP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMTHLIP GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
    case Mips::MUH:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mulhs GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUHU:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mulhu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUHU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mulhu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUH_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mulhs GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUL:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULEQ_S_W_PHL:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phl DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEQ_S_W_PHL_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phl DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEQ_S_W_PHR:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phr DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEQ_S_W_PHR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phr DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEU_S_PH_QBL:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbl DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEU_S_PH_QBL_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbl DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEU_S_PH_QBR:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbr DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULEU_S_PH_QBR_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbr DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULQ_RS_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_rs_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULQ_RS_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_rs_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULQ_RS_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_rs_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULQ_RS_W_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_rs_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULQ_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULQ_S_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MULQ_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULQ_S_W_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULR_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::MULR_Q_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_mulr_q_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MULR_Q_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_mulr_q_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MULSAQ_S_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MULSAQ_S_W_PH_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MULSA_W_PH:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MULSA_W_PH_MMR2:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
    case Mips::MULTU_DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULTU_DSP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULT_DSP:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULT_DSP_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULU:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MULV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (mul MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::MULV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (mul MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::MULV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (mul MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MULV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (mul MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MUL_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUL_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUL_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MUL_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MUL_Q_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_mul_q_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::MUL_Q_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_mul_q_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::MUL_R6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::MUL_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_mul_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::MUL_S_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_mul_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::NLOC_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_nloc_b MSA128BOpnd:$ws))]";
    case Mips::NLOC_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_nloc_d MSA128DOpnd:$ws))]";
    case Mips::NLOC_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_nloc_h MSA128HOpnd:$ws))]";
    case Mips::NLOC_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_nloc_w MSA128WOpnd:$ws))]";
    case Mips::NLZC_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (ctlz MSA128BOpnd:$ws))]";
    case Mips::NLZC_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (ctlz MSA128DOpnd:$ws))]";
    case Mips::NLZC_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (ctlz MSA128HOpnd:$ws))]";
    case Mips::NLZC_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (ctlz MSA128WOpnd:$ws))]";
    case Mips::NMADD_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (fadd (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
    case Mips::NMADD_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
    case Mips::NMADD_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsub fpimm0, (fadd (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr)))]";
    case Mips::NMADD_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (fadd (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
    case Mips::NMADD_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
    case Mips::NMSUB_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (fsub (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
    case Mips::NMSUB_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
    case Mips::NMSUB_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (fsub fpimm0, (fsub (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr)))]";
    case Mips::NMSUB_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (fsub (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
    case Mips::NMSUB_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
    case Mips::NOR:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (not (or GPR32Opnd:$rs, GPR32Opnd:$rt)))]";
    case Mips::NOR64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (not (or GPR64Opnd:$rs, GPR64Opnd:$rt)))]";
    case Mips::NORI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsVNOR MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
    case Mips::NOR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (not (or GPR32Opnd:$rs, GPR32Opnd:$rt)))]";
    case Mips::NOR_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (not (or GPR32Opnd:$rs, GPR32Opnd:$rt)))]";
    case Mips::NOR_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsVNOR MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::NOR_V_D_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsVNOR MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::NOR_V_H_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsVNOR MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::NOR_V_W_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsVNOR MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::NOT16_MM:
    {
      dbgs() << "[(set GPRMM16Opnd:$rt, (not GPRMM16Opnd:$rs))]";
    case Mips::NOT16_MMR6:
    {
      dbgs() << "[(set GPRMM16Opnd:$rt, (not GPRMM16Opnd:$rs))]";
    case Mips::OR:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (or GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::OR16_MM:
    {
      dbgs() << "[(set GPRMM16Opnd:$dst, (or GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::OR16_MMR6:
    {
      dbgs() << "[(set GPRMM16Opnd:$dst, (null_frag GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::OR64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (or GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::ORI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (or MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
    case Mips::ORI_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (or GPR32Opnd:$rs, immZExt16:$imm16))]";
    case Mips::OR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (or GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::OR_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (or GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::OR_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (or MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::OR_V_D_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (or MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::OR_V_H_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (or MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::OR_V_W_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (or MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::ORi:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (or GPR32Opnd:$rs, imm32ZExt16:$imm16))]";
    case Mips::ORi64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (or GPR64Opnd:$rs, immZExt16:$imm16))]";
    case Mips::ORi_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (or GPR32Opnd:$rs, immZExt16:$imm16))]";
    case Mips::PACKRL_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_packrl_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PACKRL_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_packrl_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PCKEV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsPCKEV MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::PCKEV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsPCKEV MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::PCKEV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsPCKEV MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::PCKEV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsPCKEV MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::PCKOD_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsPCKOD MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::PCKOD_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsPCKOD MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::PCKOD_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsPCKOD MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::PCKOD_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsPCKOD MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::PCNT_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (ctpop MSA128BOpnd:$ws))]";
    case Mips::PCNT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (ctpop MSA128DOpnd:$ws))]";
    case Mips::PCNT_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (ctpop MSA128HOpnd:$ws))]";
    case Mips::PCNT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (ctpop MSA128WOpnd:$ws))]";
    case Mips::PICK_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PICK_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PICK_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PICK_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PLL_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::PLU_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::POP:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (ctpop GPR32Opnd:$rs))]";
    case Mips::PRECEQU_PH_QBL:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbl DSPROpnd:$rt))]";
    case Mips::PRECEQU_PH_QBLA:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbla DSPROpnd:$rt))]";
    case Mips::PRECEQU_PH_QBLA_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbla DSPROpnd:$rs))]";
    case Mips::PRECEQU_PH_QBL_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbl DSPROpnd:$rs))]";
    case Mips::PRECEQU_PH_QBR:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbr DSPROpnd:$rt))]";
    case Mips::PRECEQU_PH_QBRA:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbra DSPROpnd:$rt))]";
    case Mips::PRECEQU_PH_QBRA_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbra DSPROpnd:$rs))]";
    case Mips::PRECEQU_PH_QBR_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbr DSPROpnd:$rs))]";
    case Mips::PRECEQ_W_PHL:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_preceq_w_phl DSPROpnd:$rt))]";
    case Mips::PRECEQ_W_PHL_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_preceq_w_phl DSPROpnd:$rs))]";
    case Mips::PRECEQ_W_PHR:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_preceq_w_phr DSPROpnd:$rt))]";
    case Mips::PRECEQ_W_PHR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_preceq_w_phr DSPROpnd:$rs))]";
    case Mips::PRECEU_PH_QBL:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbl DSPROpnd:$rt))]";
    case Mips::PRECEU_PH_QBLA:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbla DSPROpnd:$rt))]";
    case Mips::PRECEU_PH_QBLA_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbla DSPROpnd:$rs))]";
    case Mips::PRECEU_PH_QBL_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbl DSPROpnd:$rs))]";
    case Mips::PRECEU_PH_QBR:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbr DSPROpnd:$rt))]";
    case Mips::PRECEU_PH_QBRA:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbra DSPROpnd:$rt))]";
    case Mips::PRECEU_PH_QBRA_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbra DSPROpnd:$rs))]";
    case Mips::PRECEU_PH_QBR_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbr DSPROpnd:$rs))]";
    case Mips::PRECRQU_S_QB_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrqu_s_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PRECRQU_S_QB_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrqu_s_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PRECRQ_PH_W:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PRECRQ_PH_W_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PRECRQ_QB_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PRECRQ_QB_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PRECRQ_RS_PH_W:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_rs_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PRECRQ_RS_PH_W_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_rs_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PRECR_QB_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precr_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PRECR_QB_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_precr_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::PRECR_SRA_PH_W:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::PRECR_SRA_PH_W_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::PRECR_SRA_R_PH_W:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_r_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::PRECR_SRA_R_PH_W_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_r_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::PREPEND:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_prepend GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::PREPEND_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_prepend GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
    case Mips::PUL_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::PUU_PS64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
    case Mips::PseudoCVT_D32_W:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag GPR32Opnd:$fs))]";
    case Mips::PseudoCVT_D64_L:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag GPR64Opnd:$fs))]";
    case Mips::PseudoCVT_D64_W:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag GPR32Opnd:$fs))]";
    case Mips::PseudoCVT_S_L:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag GPR64Opnd:$fs))]";
    case Mips::PseudoCVT_S_W:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag GPR32Opnd:$fs))]";
    case Mips::PseudoDMULT:
    {
      dbgs() << "[(set ACC128:$ac, (MipsMult GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::PseudoDMULTu:
    {
      dbgs() << "[(set ACC128:$ac, (MipsMultu GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::PseudoDSDIV:
    {
      dbgs() << "[(set ACC128:$ac, (MipsDivRem GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::PseudoDUDIV:
    {
      dbgs() << "[(set ACC128:$ac, (MipsDivRemU GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::PseudoIndirectBranch:
    {
      dbgs() << "[(brind GPR32Opnd:$rs)]";
    case Mips::PseudoIndirectBranch64:
    {
      dbgs() << "[(brind GPR64Opnd:$rs)]";
    case Mips::PseudoIndirectBranch64R6:
    {
      dbgs() << "[(brind GPR64Opnd:$rs)]";
    case Mips::PseudoIndirectBranchR6:
    {
      dbgs() << "[(brind GPR32Opnd:$rs)]";
    case Mips::PseudoIndirectBranch_MM:
    {
      dbgs() << "[(brind GPR32Opnd:$rs)]";
    case Mips::PseudoIndirectBranch_MMR6:
    {
      dbgs() << "[(brind GPR32Opnd:$rs)]";
    case Mips::PseudoIndirectHazardBranch:
    {
      dbgs() << "[(brind GPR32Opnd:$rs)]";
    case Mips::PseudoIndirectHazardBranch64:
    {
      dbgs() << "[(brind GPR64Opnd:$rs)]";
    case Mips::PseudoIndrectHazardBranch64R6:
    {
      dbgs() << "[(brind GPR64Opnd:$rs)]";
    case Mips::PseudoIndrectHazardBranchR6:
    {
      dbgs() << "[(brind GPR32Opnd:$rs)]";
    case Mips::PseudoMADD:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMADDU:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMADDU_MM:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMADD_MM:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMFHI:
    {
      dbgs() << "[(set GPR32:$rd, (MipsMFHI ACC64:$hilo))]";
    case Mips::PseudoMFHI64:
    {
      dbgs() << "[(set GPR64:$rd, (MipsMFHI ACC128:$hilo))]";
    case Mips::PseudoMFHI_MM:
    {
      dbgs() << "[(set GPR32:$rd, (MipsMFHI ACC64:$hilo))]";
    case Mips::PseudoMFLO:
    {
      dbgs() << "[(set GPR32:$rd, (MipsMFLO ACC64:$hilo))]";
    case Mips::PseudoMFLO64:
    {
      dbgs() << "[(set GPR64:$rd, (MipsMFLO ACC128:$hilo))]";
    case Mips::PseudoMFLO_MM:
    {
      dbgs() << "[(set GPR32:$rd, (MipsMFLO ACC64:$hilo))]";
    case Mips::PseudoMSUB:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMSUBU:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMSUBU_MM:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMSUB_MM:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
    case Mips::PseudoMTLOHI:
    {
      dbgs() << "[(set ACC64:$lohi, (MipsMTLOHI GPR32:$lo, GPR32:$hi))]";
    case Mips::PseudoMTLOHI64:
    {
      dbgs() << "[(set ACC128:$lohi, (MipsMTLOHI GPR64:$lo, GPR64:$hi))]";
    case Mips::PseudoMTLOHI_DSP:
    {
      dbgs() << "[(set ACC64DSP:$lohi, (MipsMTLOHI GPR32:$lo, GPR32:$hi))]";
    case Mips::PseudoMTLOHI_MM:
    {
      dbgs() << "[(set ACC64:$lohi, (MipsMTLOHI GPR32:$lo, GPR32:$hi))]";
    case Mips::PseudoMULT:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PseudoMULT_MM:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PseudoMULTu:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PseudoMULTu_MM:
    {
      dbgs() << "[(set ACC64:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PseudoSDIV:
    {
      dbgs() << "[(set ACC64:$ac, (MipsDivRem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::PseudoSELECTFP_F_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$dst, (MipsCMovFP_F AFGR64Opnd:$T, FCCRegsOpnd:$cond, AFGR64Opnd:$F))]";
    case Mips::PseudoSELECTFP_F_D64:
    {
      dbgs() << "[(set FGR64Opnd:$dst, (MipsCMovFP_F FGR64Opnd:$T, FCCRegsOpnd:$cond, FGR64Opnd:$F))]";
    case Mips::PseudoSELECTFP_F_I:
    {
      dbgs() << "[(set GPR32Opnd:$dst, (MipsCMovFP_F GPR32Opnd:$T, FCCRegsOpnd:$cond, GPR32Opnd:$F))]";
    case Mips::PseudoSELECTFP_F_I64:
    {
      dbgs() << "[(set GPR64Opnd:$dst, (MipsCMovFP_F GPR64Opnd:$T, FCCRegsOpnd:$cond, GPR64Opnd:$F))]";
    case Mips::PseudoSELECTFP_F_S:
    {
      dbgs() << "[(set FGR32Opnd:$dst, (MipsCMovFP_F FGR32Opnd:$T, FCCRegsOpnd:$cond, FGR32Opnd:$F))]";
    case Mips::PseudoSELECTFP_T_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$dst, (MipsCMovFP_T AFGR64Opnd:$T, FCCRegsOpnd:$cond, AFGR64Opnd:$F))]";
    case Mips::PseudoSELECTFP_T_D64:
    {
      dbgs() << "[(set FGR64Opnd:$dst, (MipsCMovFP_T FGR64Opnd:$T, FCCRegsOpnd:$cond, FGR64Opnd:$F))]";
    case Mips::PseudoSELECTFP_T_I:
    {
      dbgs() << "[(set GPR32Opnd:$dst, (MipsCMovFP_T GPR32Opnd:$T, FCCRegsOpnd:$cond, GPR32Opnd:$F))]";
    case Mips::PseudoSELECTFP_T_I64:
    {
      dbgs() << "[(set GPR64Opnd:$dst, (MipsCMovFP_T GPR64Opnd:$T, FCCRegsOpnd:$cond, GPR64Opnd:$F))]";
    case Mips::PseudoSELECTFP_T_S:
    {
      dbgs() << "[(set FGR32Opnd:$dst, (MipsCMovFP_T FGR32Opnd:$T, FCCRegsOpnd:$cond, FGR32Opnd:$F))]";
    case Mips::PseudoSELECT_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$dst, (select GPR32Opnd:$cond, AFGR64Opnd:$T, AFGR64Opnd:$F))]";
    case Mips::PseudoSELECT_D64:
    {
      dbgs() << "[(set FGR64Opnd:$dst, (select GPR32Opnd:$cond, FGR64Opnd:$T, FGR64Opnd:$F))]";
    case Mips::PseudoSELECT_I:
    {
      dbgs() << "[(set GPR32Opnd:$dst, (select GPR32Opnd:$cond, GPR32Opnd:$T, GPR32Opnd:$F))]";
    case Mips::PseudoSELECT_I64:
    {
      dbgs() << "[(set GPR64Opnd:$dst, (select GPR32Opnd:$cond, GPR64Opnd:$T, GPR64Opnd:$F))]";
    case Mips::PseudoSELECT_S:
    {
      dbgs() << "[(set FGR32Opnd:$dst, (select GPR32Opnd:$cond, FGR32Opnd:$T, FGR32Opnd:$F))]";
    case Mips::PseudoUDIV:
    {
      dbgs() << "[(set ACC64:$ac, (MipsDivRemU GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::RADDU_W_QB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_raddu_w_qb DSPROpnd:$rs))]";
    case Mips::RADDU_W_QB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_raddu_w_qb DSPROpnd:$rs))]";
    case Mips::RDDSP:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_rddsp timmZExt10:$mask))]";
    case Mips::RDDSP_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_rddsp timmZExt7:$mask))]";
    case Mips::RECIP_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::RECIP_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::RECIP_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::RECIP_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::RECIP_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::RECIP_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::REPLV_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_ph GPR32Opnd:$rt))]";
    case Mips::REPLV_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_repl_ph GPR32Opnd:$rs))]";
    case Mips::REPLV_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_qb GPR32Opnd:$rt))]";
    case Mips::REPLV_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_repl_qb GPR32Opnd:$rs))]";
    case Mips::REPL_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_ph immSExt10:$imm))]";
    case Mips::REPL_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_ph immSExt10:$imm))]";
    case Mips::REPL_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_qb immZExt8:$imm))]";
    case Mips::REPL_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_repl_qb immZExt8:$imm))]";
    case Mips::ROTR:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, immZExt5:$shamt))]";
    case Mips::ROTRV:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::ROTRV_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::ROTR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, immZExt5:$shamt))]";
    case Mips::ROUND_L_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::ROUND_L_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::ROUND_L_S:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::ROUND_L_S_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::ROUND_W_D32:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::ROUND_W_D64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::ROUND_W_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::ROUND_W_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::ROUND_W_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::ROUND_W_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::ROUND_W_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::RSQRT_D32:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::RSQRT_D32_MM:
    {
      dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::RSQRT_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::RSQRT_D64_MM:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::RSQRT_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::RSQRT_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::RetRA:
    {
      dbgs() << "[(MipsRet)]";
    case Mips::RetRA16:
    {
      dbgs() << "[(MipsRet)]";
    case Mips::SAT_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sat_s_b MSA128BOpnd:$ws, timmZExt3:$m))]";
    case Mips::SAT_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sat_s_d MSA128DOpnd:$ws, timmZExt6:$m))]";
    case Mips::SAT_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sat_s_h MSA128HOpnd:$ws, timmZExt4:$m))]";
    case Mips::SAT_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sat_s_w MSA128WOpnd:$ws, timmZExt5:$m))]";
    case Mips::SAT_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sat_u_b MSA128BOpnd:$ws, timmZExt3:$m))]";
    case Mips::SAT_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sat_u_d MSA128DOpnd:$ws, timmZExt6:$m))]";
    case Mips::SAT_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sat_u_h MSA128HOpnd:$ws, timmZExt4:$m))]";
    case Mips::SAT_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sat_u_w MSA128WOpnd:$ws, timmZExt5:$m))]";
    case Mips::SB:
    {
      dbgs() << "[(truncstorei8 GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SB64:
    {
      dbgs() << "[(truncstorei8 GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SBE_MM:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SB_MM:
    {
      dbgs() << "[(truncstorei8 GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SB_MMR6:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SD:
    {
      dbgs() << "[(store GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SDC1:
    {
      dbgs() << "[(store AFGR64Opnd:$rt, addrDefault:$addr)]";
    case Mips::SDC164:
    {
      dbgs() << "[(store FGR64Opnd:$rt, addrDefault:$addr)]";
    case Mips::SDC1_D64_MMR6:
    {
      dbgs() << "[(store FGR64Opnd:$ft, addrimm16:$addr)]";
    case Mips::SDC1_MM:
    {
      dbgs() << "[(store AFGR64Opnd:$rt, addrDefault:$addr)]";
    case Mips::SDC2:
    {
      dbgs() << "[(store COP2Opnd:$rt, addrDefault:$addr)]";
    case Mips::SDC2_MMR6:
    {
      dbgs() << "[(store COP2Opnd:$rt, addrimm11:$addr)]";
    case Mips::SDC3:
    {
      dbgs() << "[(store COP3Opnd:$rt, addrDefault:$addr)]";
    case Mips::SDIV_MM_Pseudo:
    {
      dbgs() << "[(set ACC64:$ac, (MipsDivRem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SDL:
    {
      dbgs() << "[(MipsSDL GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SDR:
    {
      dbgs() << "[(MipsSDR GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SDXC1:
    {
      dbgs() << "[(store AFGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SDXC164:
    {
      dbgs() << "[(store FGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SEB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i8))]";
    case Mips::SEB64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (sext_inreg GPR64Opnd:$rt, i8))]";
    case Mips::SEB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i8))]";
    case Mips::SEH:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i16))]";
    case Mips::SEH64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (sext_inreg GPR64Opnd:$rt, i16))]";
    case Mips::SEH_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i16))]";
    case Mips::SEL_D:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (MipsFSelect FGR64Opnd:$fd_in, FGR64Opnd:$ft, FGR64Opnd:$fs))]";
    case Mips::SEL_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (MipsFSelect FGR64Opnd:$fd_in, FGR64Opnd:$ft, FGR64Opnd:$fs))]";
    case Mips::SEL_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (select FGRCCOpnd:$fd_in, FGR32Opnd:$ft, FGR32Opnd:$fs))]";
    case Mips::SEL_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (select FGRCCOpnd:$fd_in, FGR32Opnd:$ft, FGR32Opnd:$fs))]";
    case Mips::SEQ:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (zext (seteq GPR64Opnd:$rs, GPR64Opnd:$rt)))]";
    case Mips::SEQi:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (zext (seteq GPR64Opnd:$rs, immSExt10_64:$imm10)))]";
    case Mips::SH:
    {
      dbgs() << "[(truncstorei16 GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SH64:
    {
      dbgs() << "[(truncstorei16 GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SHE_MM:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SHF_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsSHF timmZExt8:$u8, MSA128BOpnd:$ws))]";
    case Mips::SHF_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsSHF timmZExt8:$u8, MSA128HOpnd:$ws))]";
    case Mips::SHF_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsSHF timmZExt8:$u8, MSA128WOpnd:$ws))]";
    case Mips::SHILO:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO immSExt6:$shift, ACC64DSPOpnd:$acin))]";
    case Mips::SHILOV:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
    case Mips::SHILOV_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
    case Mips::SHILO_MM:
    {
      dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO immSExt6:$shift, ACC64DSPOpnd:$acin))]";
    case Mips::SHLLV_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHLLV_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHLLV_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHLLV_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHLLV_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_s_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHLLV_S_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_s_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHLLV_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shll_s_w GPR32Opnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHLLV_S_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shll_s_w GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHLL_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt4:$rs_sa))]";
    case Mips::SHLL_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt4:$sa))]";
    case Mips::SHLL_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt3:$rs_sa))]";
    case Mips::SHLL_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt3:$sa))]";
    case Mips::SHLL_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_s_ph DSPROpnd:$rt, immZExt4:$rs_sa))]";
    case Mips::SHLL_S_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_shll_s_ph DSPROpnd:$rs, immZExt4:$sa))]";
    case Mips::SHLL_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shll_s_w GPR32Opnd:$rt, immZExt5:$rs_sa))]";
    case Mips::SHLL_S_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_shll_s_w GPR32Opnd:$rs, immZExt5:$sa))]";
    case Mips::SHRAV_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRAV_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRAV_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRAV_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRAV_R_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRAV_R_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRAV_R_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRAV_R_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRAV_R_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shra_r_w GPR32Opnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRAV_R_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shra_r_w GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRA_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt4:$rs_sa))]";
    case Mips::SHRA_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt4:$sa))]";
    case Mips::SHRA_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt3:$rs_sa))]";
    case Mips::SHRA_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt3:$sa))]";
    case Mips::SHRA_R_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_ph DSPROpnd:$rt, immZExt4:$rs_sa))]";
    case Mips::SHRA_R_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_shra_r_ph DSPROpnd:$rs, immZExt4:$sa))]";
    case Mips::SHRA_R_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_qb DSPROpnd:$rt, immZExt3:$rs_sa))]";
    case Mips::SHRA_R_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rt, (int_mips_shra_r_qb DSPROpnd:$rs, immZExt3:$sa))]";
    case Mips::SHRA_R_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shra_r_w GPR32Opnd:$rt, immZExt5:$rs_sa))]";
    case Mips::SHRA_R_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (int_mips_shra_r_w GPR32Opnd:$rs, immZExt5:$sa))]";
    case Mips::SHRLV_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRLV_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRLV_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
    case Mips::SHRLV_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SHRL_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt4:$rs_sa))]";
    case Mips::SHRL_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt4:$sa))]";
    case Mips::SHRL_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt3:$rs_sa))]";
    case Mips::SHRL_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt3:$sa))]";
    case Mips::SH_MM:
    {
      dbgs() << "[(truncstorei16 GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SH_MMR6:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SLDI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sldi_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, timmZExt4:$n))]";
    case Mips::SLDI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sldi_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, timmZExt1:$n))]";
    case Mips::SLDI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sldi_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, timmZExt3:$n))]";
    case Mips::SLDI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sldi_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, timmZExt2:$n))]";
    case Mips::SLD_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sld_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SLD_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sld_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SLD_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sld_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SLD_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sld_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SLL:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (shl GPR32Opnd:$rt, immZExt5:$shamt))]";
    case Mips::SLLI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (shl MSA128BOpnd:$ws, vsplati8_uimm3:$m))]";
    case Mips::SLLI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (shl MSA128DOpnd:$ws, vsplati64_uimm6:$m))]";
    case Mips::SLLI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (shl MSA128HOpnd:$ws, vsplati16_uimm4:$m))]";
    case Mips::SLLI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (shl MSA128WOpnd:$ws, vsplati32_uimm5:$m))]";
    case Mips::SLLV:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (shl GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SLLV_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SLL_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (shl MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SLL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (shl MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SLL_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (shl MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SLL_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
    case Mips::SLL_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
    case Mips::SLL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (shl MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SLT:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (setlt GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SLT64:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (setlt GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::SLT_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (setlt GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SLTi:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (setlt GPR32Opnd:$rs, immSExt16:$imm16))]";
    case Mips::SLTi64:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (setlt GPR64Opnd:$rs, immSExt16:$imm16))]";
    case Mips::SLTi_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (setlt GPR32Opnd:$rs, immSExt16:$imm16))]";
    case Mips::SLTiu:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (setult GPR32Opnd:$rs, immSExt16:$imm16))]";
    case Mips::SLTiu64:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (setult GPR64Opnd:$rs, immSExt16:$imm16))]";
    case Mips::SLTiu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (setult GPR32Opnd:$rs, immSExt16:$imm16))]";
    case Mips::SLTu:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (setult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SLTu64:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (setult GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::SLTu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (setult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SNE:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (zext (setne GPR64Opnd:$rs, GPR64Opnd:$rt)))]";
    case Mips::SNEi:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (zext (setne GPR64Opnd:$rs, immSExt10_64:$imm10)))]";
    case Mips::SNZ_B_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v16i8 MSA128B:$ws)))]";
    case Mips::SNZ_D_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v2i64 MSA128D:$ws)))]";
    case Mips::SNZ_H_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v8i16 MSA128H:$ws)))]";
    case Mips::SNZ_V_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAnyNonZero (v16i8 MSA128B:$ws)))]";
    case Mips::SNZ_W_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v4i32 MSA128W:$ws)))]";
    case Mips::SPLATI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsVSHF vsplati8_uimm4:$n, MSA128BOpnd:$ws, MSA128BOpnd:$ws))]";
    case Mips::SPLATI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsVSHF vsplati64_uimm1:$n, MSA128DOpnd:$ws, MSA128DOpnd:$ws))]";
    case Mips::SPLATI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsVSHF vsplati16_uimm3:$n, MSA128HOpnd:$ws, MSA128HOpnd:$ws))]";
    case Mips::SPLATI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsVSHF vsplati32_uimm2:$n, MSA128WOpnd:$ws, MSA128WOpnd:$ws))]";
    case Mips::SPLAT_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (vsplati8_elt MSA128BOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SPLAT_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (vsplati64_elt MSA128DOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SPLAT_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (vsplati16_elt MSA128HOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SPLAT_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (vsplati32_elt MSA128WOpnd:$ws, GPR32Opnd:$rt))]";
    case Mips::SRA:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sra GPR32Opnd:$rt, immZExt5:$shamt))]";
    case Mips::SRAI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (sra MSA128BOpnd:$ws, vsplati8_uimm3:$m))]";
    case Mips::SRAI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (sra MSA128DOpnd:$ws, vsplati64_uimm6:$m))]";
    case Mips::SRAI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (sra MSA128HOpnd:$ws, vsplati16_uimm4:$m))]";
    case Mips::SRAI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (sra MSA128WOpnd:$ws, vsplati32_uimm5:$m))]";
    case Mips::SRARI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srari_b MSA128BOpnd:$ws, timmZExt3:$m))]";
    case Mips::SRARI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srari_d MSA128DOpnd:$ws, timmZExt6:$m))]";
    case Mips::SRARI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srari_h MSA128HOpnd:$ws, timmZExt4:$m))]";
    case Mips::SRARI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srari_w MSA128WOpnd:$ws, timmZExt5:$m))]";
    case Mips::SRAR_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srar_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SRAR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srar_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SRAR_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srar_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SRAR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srar_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SRAV:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sra GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SRAV_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SRA_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (sra MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SRA_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (sra MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SRA_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (sra MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SRA_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
    case Mips::SRA_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (sra MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SRL:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (srl GPR32Opnd:$rt, immZExt5:$shamt))]";
    case Mips::SRLI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (srl MSA128BOpnd:$ws, vsplati8_uimm3:$m))]";
    case Mips::SRLI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (srl MSA128DOpnd:$ws, vsplati64_uimm6:$m))]";
    case Mips::SRLI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (srl MSA128HOpnd:$ws, vsplati16_uimm4:$m))]";
    case Mips::SRLI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (srl MSA128WOpnd:$ws, vsplati32_uimm5:$m))]";
    case Mips::SRLRI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srlri_b MSA128BOpnd:$ws, timmZExt3:$m))]";
    case Mips::SRLRI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srlri_d MSA128DOpnd:$ws, timmZExt6:$m))]";
    case Mips::SRLRI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srlri_h MSA128HOpnd:$ws, timmZExt4:$m))]";
    case Mips::SRLRI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srlri_w MSA128WOpnd:$ws, timmZExt5:$m))]";
    case Mips::SRLR_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srlr_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SRLR_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srlr_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SRLR_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srlr_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SRLR_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srlr_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SRLV:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (srl GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SRLV_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, GPR32Opnd:$rs))]";
    case Mips::SRL_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (srl MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SRL_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (srl MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SRL_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (srl MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SRL_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
    case Mips::SRL_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (srl MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::STORE_ACC128:
    {
      dbgs() << "[(null_frag ACC128:$rt, addr:$addr)]";
    case Mips::STORE_ACC64:
    {
      dbgs() << "[(null_frag ACC64:$rt, addr:$addr)]";
    case Mips::STORE_ACC64DSP:
    {
      dbgs() << "[(null_frag ACC64DSPOpnd:$rt, addr:$addr)]";
    case Mips::STORE_CCOND_DSP:
    {
      dbgs() << "[(null_frag DSPCC:$rt, addr:$addr)]";
    case Mips::STR_D:
    {
      dbgs() << "[(int_mips_str_d MSA128DOpnd:$dst, iPTR:$ptr, GPR32:$imm)]";
    case Mips::STR_W:
    {
      dbgs() << "[(int_mips_str_w MSA128WOpnd:$dst, iPTR:$ptr, GPR32:$imm)]";
    case Mips::ST_B:
    {
      dbgs() << "[(store (v16i8 MSA128BOpnd:$wd), addrimm10:$addr)]";
    case Mips::ST_D:
    {
      dbgs() << "[(store (v2i64 MSA128DOpnd:$wd), addrimm10lsl3:$addr)]";
    case Mips::ST_F16:
    {
      dbgs() << "[(store (f16 MSA128F16:$ws), (addrimm10:addr))]";
    case Mips::ST_H:
    {
      dbgs() << "[(store (v8i16 MSA128HOpnd:$wd), addrimm10lsl1:$addr)]";
    case Mips::ST_W:
    {
      dbgs() << "[(store (v4i32 MSA128WOpnd:$wd), addrimm10lsl2:$addr)]";
    case Mips::SUB:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBQH_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQH_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQH_R_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQH_R_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQH_R_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBQH_R_W_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBQH_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBQH_W_MMR2:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBQ_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQ_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQ_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQ_S_PH_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBQ_S_W:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBQ_S_W_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBSUS_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subsus_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SUBSUS_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subsus_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SUBSUS_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subsus_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SUBSUS_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subsus_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SUBSUU_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subsuu_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SUBSUU_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subsuu_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SUBSUU_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subsuu_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SUBSUU_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subsuu_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SUBS_S_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subs_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SUBS_S_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subs_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SUBS_S_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subs_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SUBS_S_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subs_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SUBS_U_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subs_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SUBS_U_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subs_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SUBS_U_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subs_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SUBS_U_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subs_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SUBU16_MM:
    {
      dbgs() << "[(set GPRMM16Opnd:$rd, (sub GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::SUBU16_MMR6:
    {
      dbgs() << "[(set GPRMM16Opnd:$rd, (sub GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::SUBUH_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBUH_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBUH_R_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBUH_R_QB_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBU_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_S_PH:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_S_PH_MMR2:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_S_QB:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBU_S_QB_MM:
    {
      dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
    case Mips::SUBVI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (sub MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
    case Mips::SUBVI_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (sub MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
    case Mips::SUBVI_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (sub MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
    case Mips::SUBVI_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (sub MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
    case Mips::SUBV_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (sub MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::SUBV_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (sub MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::SUBV_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (sub MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::SUBV_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (sub MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::SUB_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUB_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBu:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUBu_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (sub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::SUXC1:
    {
      dbgs() << "[(null_frag AFGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SUXC164:
    {
      dbgs() << "[(null_frag FGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SUXC1_MM:
    {
      dbgs() << "[(null_frag FGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SW:
    {
      dbgs() << "[(store GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SW64:
    {
      dbgs() << "[(truncstorei32 GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SWC1:
    {
      dbgs() << "[(store FGR32Opnd:$rt, addrDefault:$addr)]";
    case Mips::SWC1_MM:
    {
      dbgs() << "[(store FGR32Opnd:$rt, addrDefault:$addr)]";
    case Mips::SWC2:
    {
      dbgs() << "[(store COP2Opnd:$rt, addrDefault:$addr)]";
    case Mips::SWC2_MMR6:
    {
      dbgs() << "[(store COP2Opnd:$rt, addrimm11:$addr)]";
    case Mips::SWC3:
    {
      dbgs() << "[(store COP3Opnd:$rt, addrDefault:$addr)]";
    case Mips::SWDSP:
    {
      dbgs() << "[(null_frag DSPROpnd:$rt, addr:$addr)]";
    case Mips::SWDSP_MM:
    {
      dbgs() << "[(null_frag DSPROpnd:$rt, addr:$addr)]";
    case Mips::SWE_MM:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SWL:
    {
      dbgs() << "[(MipsSWL GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SWL64:
    {
      dbgs() << "[(MipsSWL GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SWLE_MM:
    {
      dbgs() << "[(MipsSWL GPR32Opnd:$rt, addrimm12:$addr)]";
    case Mips::SWL_MM:
    {
      dbgs() << "[(MipsSWL GPR32Opnd:$rt, addrimm12:$addr)]";
    case Mips::SWR:
    {
      dbgs() << "[(MipsSWR GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SWR64:
    {
      dbgs() << "[(MipsSWR GPR64Opnd:$rt, addr:$addr)]";
    case Mips::SWRE_MM:
    {
      dbgs() << "[(MipsSWR GPR32Opnd:$rt, addrimm12:$addr)]";
    case Mips::SWR_MM:
    {
      dbgs() << "[(MipsSWR GPR32Opnd:$rt, addrimm12:$addr)]";
    case Mips::SWXC1:
    {
      dbgs() << "[(store FGR32Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SWXC1_MM:
    {
      dbgs() << "[(store FGR32Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
    case Mips::SW_MM:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SW_MMR6:
    {
      dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
    case Mips::SYNC:
    {
      dbgs() << "[(MipsSync immZExt5:$stype)]";
    case Mips::SYNC_MM:
    {
      dbgs() << "[(MipsSync immZExt5:$stype)]";
    case Mips::SYNC_MMR6:
    {
      dbgs() << "[(MipsSync immZExt5:$stype)]";
    case Mips::SZ_B_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v16i8 MSA128B:$ws)))]";
    case Mips::SZ_D_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v2i64 MSA128D:$ws)))]";
    case Mips::SZ_H_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v8i16 MSA128H:$ws)))]";
    case Mips::SZ_V_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAnyZero (v16i8 MSA128B:$ws)))]";
    case Mips::SZ_W_PSEUDO:
    {
      dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v4i32 MSA128W:$ws)))]";
    case Mips::TAILCALL64R6REG:
    {
      dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
    case Mips::TAILCALLHB64R6REG:
    {
      dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
    case Mips::TAILCALLHBR6REG:
    {
      dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
    case Mips::TAILCALLR6REG:
    {
      dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
    case Mips::TAILCALLREG:
    {
      dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
    case Mips::TAILCALLREG64:
    {
      dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
    case Mips::TAILCALLREGHB:
    {
      dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
    case Mips::TAILCALLREGHB64:
    {
      dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
    case Mips::TAILCALLREG_MM:
    {
      dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
    case Mips::TAILCALLREG_MMR6:
    {
      dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
    case Mips::TRAP:
    {
      dbgs() << "[(trap)]";
    case Mips::TRAP_MM:
    {
      dbgs() << "[(trap)]";
    case Mips::TRUNC_L_D64:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::TRUNC_L_D_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::TRUNC_L_S:
    {
      dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::TRUNC_L_S_MMR6:
    {
      dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::TRUNC_W_D32:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::TRUNC_W_D64:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
    case Mips::TRUNC_W_D_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
    case Mips::TRUNC_W_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
    case Mips::TRUNC_W_S:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::TRUNC_W_S_MM:
    {
      dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
    case Mips::TRUNC_W_S_MMR6:
    {
      dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
    case Mips::UDIV_MM_Pseudo:
    {
      dbgs() << "[(set ACC64:$ac, (MipsDivRemU GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::V3MULU:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::VMM0:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::VMULU:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::VSHF_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (MipsVSHF MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::VSHF_D:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (MipsVSHF MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::VSHF_H:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (MipsVSHF MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::VSHF_W:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (MipsVSHF MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::WRDSP:
    {
      dbgs() << "[(int_mips_wrdsp GPR32Opnd:$rs, timmZExt10:$mask)]";
    case Mips::WRDSP_MM:
    {
      dbgs() << "[(int_mips_wrdsp GPR32Opnd:$rt, timmZExt7:$mask)]";
    case Mips::XOR:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (xor GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::XOR16_MM:
    {
      dbgs() << "[(set GPRMM16Opnd:$dst, (xor GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::XOR16_MMR6:
    {
      dbgs() << "[(set GPRMM16Opnd:$dst, (null_frag GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
    case Mips::XOR64:
    {
      dbgs() << "[(set GPR64Opnd:$rd, (xor GPR64Opnd:$rs, GPR64Opnd:$rt))]";
    case Mips::XORI_B:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (xor MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
    case Mips::XORI_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (xor GPR32Opnd:$rs, immZExt16:$imm16))]";
    case Mips::XOR_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (xor GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::XOR_MMR6:
    {
      dbgs() << "[(set GPR32Opnd:$rd, (xor GPR32Opnd:$rs, GPR32Opnd:$rt))]";
    case Mips::XOR_V:
    {
      dbgs() << "[(set MSA128BOpnd:$wd, (xor MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
    case Mips::XOR_V_D_PSEUDO:
    {
      dbgs() << "[(set MSA128DOpnd:$wd, (xor MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
    case Mips::XOR_V_H_PSEUDO:
    {
      dbgs() << "[(set MSA128HOpnd:$wd, (xor MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
    case Mips::XOR_V_W_PSEUDO:
    {
      dbgs() << "[(set MSA128WOpnd:$wd, (xor MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
    case Mips::XORi:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (xor GPR32Opnd:$rs, imm32ZExt16:$imm16))]";
    case Mips::XORi64:
    {
      dbgs() << "[(set GPR64Opnd:$rt, (xor GPR64Opnd:$rs, immZExt16:$imm16))]";
    case Mips::XORi_MM:
    {
      dbgs() << "[(set GPR32Opnd:$rt, (xor GPR32Opnd:$rs, immZExt16:$imm16))]";


  }
  return Res;
}
