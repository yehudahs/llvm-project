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

case Mips::ABSMacro:
	dbgs() << "[]";
	break;
case Mips::ABSQ_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_absq_s_ph DSPROpnd:$rt))]";
	break;
case Mips::ABSQ_S_PH_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_absq_s_ph DSPROpnd:$rs))]";
	break;
case Mips::ABSQ_S_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_absq_s_qb DSPROpnd:$rt))]";
	break;
case Mips::ABSQ_S_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_absq_s_qb DSPROpnd:$rs))]";
	break;
case Mips::ABSQ_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_absq_s_w GPR32Opnd:$rt))]";
	break;
case Mips::ABSQ_S_W_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_absq_s_w GPR32Opnd:$rs))]";
	break;
case Mips::ADD:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDIUPC:
	dbgs() << "[]";
	break;
case Mips::ADDIUPC_MM:
	dbgs() << "[]";
	break;
case Mips::ADDIUPC_MMR6:
	dbgs() << "[]";
	break;
case Mips::ADDIUR1SP_MM:
	dbgs() << "[]";
	break;
case Mips::ADDIUR2_MM:
	dbgs() << "[]";
	break;
case Mips::ADDIUS5_MM:
	dbgs() << "[]";
	break;
case Mips::ADDIUSP_MM:
	dbgs() << "[]";
	break;
case Mips::ADDIU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (add GPR32Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::ADDQH_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQH_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQH_R_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQH_R_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQH_R_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDQH_R_W_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDQH_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDQH_W_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDQ_PH:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQ_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQ_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQ_S_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDQ_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDQ_S_W_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_addq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDR_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::ADDSC:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDSC_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDS_A_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_adds_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ADDS_A_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_adds_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ADDS_A_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_adds_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ADDS_A_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_adds_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ADDS_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_adds_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ADDS_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_adds_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ADDS_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_adds_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ADDS_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_adds_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ADDS_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_adds_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ADDS_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_adds_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ADDS_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_adds_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ADDS_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_adds_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ADDU16_MM:
	dbgs() << "[(set GPRMM16Opnd:$rd, (add GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::ADDU16_MMR6:
	dbgs() << "[(set GPRMM16Opnd:$rd, (add GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::ADDUH_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDUH_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDUH_R_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDUH_R_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_adduh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDU_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_QB:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_S_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_S_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDU_S_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_addu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::ADDVI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (add MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
	break;
case Mips::ADDVI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (add MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
	break;
case Mips::ADDVI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (add MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
	break;
case Mips::ADDVI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (add MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
	break;
case Mips::ADDV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (add MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ADDV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (add MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ADDV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (add MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ADDV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (add MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ADDWC:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDWC_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADD_A_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_add_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ADD_A_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_add_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ADD_A_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_add_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ADD_A_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_add_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ADD_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADD_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDi:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
	break;
case Mips::ADDi_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
	break;
case Mips::ADDiu:
	dbgs() << "[(set GPR32Opnd:$rt, (add GPR32Opnd:$rs, imm32SExt16:$imm16))]";
	break;
case Mips::ADDiu_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
	break;
case Mips::ADDu:
	dbgs() << "[(set GPR32Opnd:$rd, (add GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADDu_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (add GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::ADJCALLSTACKDOWN:
	dbgs() << "[(callseq_start timm:$amt1, timm:$amt2)]";
	break;
case Mips::ADJCALLSTACKUP:
	dbgs() << "[(callseq_end timm:$amt1, timm:$amt2)]";
	break;
case Mips::ALIGN:
	dbgs() << "[]";
	break;
case Mips::ALIGN_MMR6:
	dbgs() << "[]";
	break;
case Mips::ALUIPC:
	dbgs() << "[]";
	break;
case Mips::ALUIPC_MMR6:
	dbgs() << "[]";
	break;
case Mips::AND:
	dbgs() << "[(set GPR32Opnd:$rd, (and GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::AND16_MM:
	dbgs() << "[(set GPRMM16Opnd:$dst, (and GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::AND16_MMR6:
	dbgs() << "[(set GPRMM16Opnd:$dst, (null_frag GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::AND64:
	dbgs() << "[(set GPR64Opnd:$rd, (and GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::ANDI16_MM:
	dbgs() << "[]";
	break;
case Mips::ANDI16_MMR6:
	dbgs() << "[]";
	break;
case Mips::ANDI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (and MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
	break;
case Mips::ANDI_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
	break;
case Mips::AND_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (and GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::AND_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (and GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::AND_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (and MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::AND_V_D_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (and MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::AND_V_H_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (and MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::AND_V_W_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (and MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ANDi:
	dbgs() << "[(set GPR32Opnd:$rt, (and GPR32Opnd:$rs, imm32ZExt16:$imm16))]";
	break;
case Mips::ANDi64:
	dbgs() << "[(set GPR64Opnd:$rt, (and GPR64Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::ANDi_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, null_frag:$imm16))]";
	break;
case Mips::ANNOTATION_LABEL:

	break;
case Mips::APPEND:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_append GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::APPEND_MMR2:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_append GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::ASUB_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_asub_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ASUB_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_asub_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ASUB_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_asub_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ASUB_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_asub_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ASUB_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_asub_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ASUB_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_asub_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ASUB_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_asub_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ASUB_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_asub_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ATOMIC_CMP_SWAP_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_cmp_swap_16 iPTR:$ptr, GPR32:$cmp, GPR32:$swap))]";
	break;
case Mips::ATOMIC_CMP_SWAP_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_CMP_SWAP_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_cmp_swap_32 iPTR:$ptr, GPR32:$cmp, GPR32:$swap))]";
	break;
case Mips::ATOMIC_CMP_SWAP_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_CMP_SWAP_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_cmp_swap_64 iPTR:$ptr, GPR64:$cmp, GPR64:$swap))]";
	break;
case Mips::ATOMIC_CMP_SWAP_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_CMP_SWAP_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_cmp_swap_8 iPTR:$ptr, GPR32:$cmp, GPR32:$swap))]";
	break;
case Mips::ATOMIC_CMP_SWAP_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_ADD_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_add_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_ADD_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_ADD_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_add_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_ADD_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_ADD_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_add_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_ADD_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_ADD_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_add_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_ADD_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_AND_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_and_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_AND_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_AND_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_and_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_AND_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_AND_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_and_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_AND_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_AND_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_and_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_AND_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MAX_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_max_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MAX_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MAX_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_max_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MAX_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MAX_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_max_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MAX_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MAX_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_max_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MAX_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MIN_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_min_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MIN_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MIN_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_min_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MIN_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MIN_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_min_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MIN_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_MIN_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_min_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_MIN_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_NAND_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_nand_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_NAND_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_NAND_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_nand_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_NAND_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_NAND_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_nand_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_NAND_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_NAND_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_nand_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_NAND_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_OR_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_or_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_OR_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_OR_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_or_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_OR_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_OR_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_or_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_OR_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_OR_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_or_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_OR_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_SUB_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_sub_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_SUB_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_SUB_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_sub_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_SUB_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_SUB_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_sub_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_SUB_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_SUB_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_sub_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_SUB_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_umax_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_umax_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_umax_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_umax_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMAX_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_umin_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_umin_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_umin_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_umin_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_UMIN_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_XOR_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_load_xor_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_XOR_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_XOR_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_load_xor_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_XOR_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_XOR_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_load_xor_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_LOAD_XOR_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_LOAD_XOR_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_load_xor_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_LOAD_XOR_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_SWAP_I16:
	dbgs() << "[(set GPR32:$dst, (atomic_swap_16 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_SWAP_I16_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_SWAP_I32:
	dbgs() << "[(set GPR32:$dst, (atomic_swap_32 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_SWAP_I32_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_SWAP_I64:
	dbgs() << "[(set GPR64:$dst, (atomic_swap_64 iPTR:$ptr, GPR64:$incr))]";
	break;
case Mips::ATOMIC_SWAP_I64_POSTRA:
	dbgs() << "[]";
	break;
case Mips::ATOMIC_SWAP_I8:
	dbgs() << "[(set GPR32:$dst, (atomic_swap_8 iPTR:$ptr, GPR32:$incr))]";
	break;
case Mips::ATOMIC_SWAP_I8_POSTRA:
	dbgs() << "[]";
	break;
case Mips::AUI:
	dbgs() << "[]";
	break;
case Mips::AUIPC:
	dbgs() << "[]";
	break;
case Mips::AUIPC_MMR6:
	dbgs() << "[]";
	break;
case Mips::AUI_MMR6:
	dbgs() << "[]";
	break;
case Mips::AVER_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_aver_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::AVER_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_aver_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::AVER_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_aver_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::AVER_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_aver_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::AVER_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_aver_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::AVER_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_aver_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::AVER_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_aver_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::AVER_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_aver_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::AVE_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_ave_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::AVE_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ave_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::AVE_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_ave_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::AVE_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ave_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::AVE_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_ave_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::AVE_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ave_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::AVE_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_ave_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::AVE_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ave_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::AddiuRxImmX16:
	dbgs() << "[]";
	break;
case Mips::AddiuRxPcImmX16:
	dbgs() << "[]";
	break;
case Mips::AddiuRxRxImm16:
	dbgs() << "[]";
	break;
case Mips::AddiuRxRxImmX16:
	dbgs() << "[]";
	break;
case Mips::AddiuRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::AddiuSpImm16:
	dbgs() << "[]";
	break;
case Mips::AddiuSpImmX16:
	dbgs() << "[]";
	break;
case Mips::AdduRxRyRz16:
	dbgs() << "[]";
	break;
case Mips::AndRxRxRy16:
	dbgs() << "[]";
	break;
case Mips::B:
	dbgs() << "[(br bb:$offset)]";
	break;
case Mips::B16_MM:
	dbgs() << "[]";
	break;
case Mips::BADDu:
	dbgs() << "[(set GPR64Opnd:$rd, (and (add GPR64Opnd:$rs, GPR64Opnd:$rt), 255))]";
	break;
case Mips::BAL:
	dbgs() << "[]";
	break;
case Mips::BALC:
	dbgs() << "[]";
	break;
case Mips::BALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BALIGN:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_balign GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt2:$sa))]";
	break;
case Mips::BALIGN_MMR2:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_balign GPR32Opnd:$src, GPR32Opnd:$rs, immZExt2:$bp))]";
	break;
case Mips::BAL_BR:
	dbgs() << "[]";
	break;
case Mips::BAL_BR_MM:
	dbgs() << "[]";
	break;
case Mips::BBIT0:
	dbgs() << "[(brcond (i32 (seteq (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, immZExt5_64:$p)), 0)), bb:$offset)]";
	break;
case Mips::BBIT032:
	dbgs() << "[(brcond (i32 (seteq (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, immZExt5_64:$p)), 0)), bb:$offset)]";
	break;
case Mips::BBIT1:
	dbgs() << "[(brcond (i32 (setne (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }, immZExt5_64:$p)), 0)), bb:$offset)]";
	break;
case Mips::BBIT132:
	dbgs() << "[(brcond (i32 (setne (and GPR64Opnd:$rs, (shl { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, immZExt5_64:$p)), 0)), bb:$offset)]";
	break;
case Mips::BC:
	dbgs() << "[]";
	break;
case Mips::BC16_MMR6:
	dbgs() << "[]";
	break;
case Mips::BC1EQZ:
	dbgs() << "[]";
	break;
case Mips::BC1EQZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BC1F:
	dbgs() << "[(MipsFPBrcond MIPS_BRANCH_F, FCCRegsOpnd:$fcc, bb:$offset)]";
	break;
case Mips::BC1FL:
	dbgs() << "[]";
	break;
case Mips::BC1F_MM:
	dbgs() << "[(MipsFPBrcond MIPS_BRANCH_F, FCCRegsOpnd:$fcc, bb:$offset)]";
	break;
case Mips::BC1NEZ:
	dbgs() << "[]";
	break;
case Mips::BC1NEZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BC1T:
	dbgs() << "[(MipsFPBrcond MIPS_BRANCH_T, FCCRegsOpnd:$fcc, bb:$offset)]";
	break;
case Mips::BC1TL:
	dbgs() << "[]";
	break;
case Mips::BC1T_MM:
	dbgs() << "[(MipsFPBrcond MIPS_BRANCH_T, FCCRegsOpnd:$fcc, bb:$offset)]";
	break;
case Mips::BC2EQZ:
	dbgs() << "[]";
	break;
case Mips::BC2EQZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BC2NEZ:
	dbgs() << "[]";
	break;
case Mips::BC2NEZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BCLRI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (and MSA128BOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
	break;
case Mips::BCLRI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (and MSA128DOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
	break;
case Mips::BCLRI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (and MSA128HOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
	break;
case Mips::BCLRI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (and MSA128WOpnd:$ws, vsplat_uimm_inv_pow2:$m))]";
	break;
case Mips::BCLR_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vbclr_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::BCLR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vbclr_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::BCLR_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vbclr_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::BCLR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vbclr_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::BC_MMR6:
	dbgs() << "[(br bb:$offset)]";
	break;
case Mips::BEQ:
	dbgs() << "[(brcond (i32 (seteq GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
	break;
case Mips::BEQ64:
	dbgs() << "[(brcond (i32 (seteq GPR64Opnd:$rs, GPR64Opnd:$rt)), bb:$offset)]";
	break;
case Mips::BEQC:
	dbgs() << "[]";
	break;
case Mips::BEQC64:
	dbgs() << "[]";
	break;
case Mips::BEQC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BEQL:
	dbgs() << "[]";
	break;
case Mips::BEQLImmMacro:
	dbgs() << "[]";
	break;
case Mips::BEQZ16_MM:
	dbgs() << "[]";
	break;
case Mips::BEQZALC:
	dbgs() << "[]";
	break;
case Mips::BEQZALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BEQZC:
	dbgs() << "[]";
	break;
case Mips::BEQZC16_MMR6:
	dbgs() << "[]";
	break;
case Mips::BEQZC64:
	dbgs() << "[]";
	break;
case Mips::BEQZC_MM:
	dbgs() << "[]";
	break;
case Mips::BEQZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BEQ_MM:
	dbgs() << "[(brcond (i32 (seteq GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
	break;
case Mips::BGE:
	dbgs() << "[]";
	break;
case Mips::BGEC:
	dbgs() << "[]";
	break;
case Mips::BGEC64:
	dbgs() << "[]";
	break;
case Mips::BGEC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BGEImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGEL:
	dbgs() << "[]";
	break;
case Mips::BGELImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGEU:
	dbgs() << "[]";
	break;
case Mips::BGEUC:
	dbgs() << "[]";
	break;
case Mips::BGEUC64:
	dbgs() << "[]";
	break;
case Mips::BGEUC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BGEUImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGEUL:
	dbgs() << "[]";
	break;
case Mips::BGEULImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGEZ:
	dbgs() << "[(brcond (i32 (setge GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BGEZ64:
	dbgs() << "[(brcond (i32 (setge GPR64Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BGEZAL:
	dbgs() << "[]";
	break;
case Mips::BGEZALC:
	dbgs() << "[]";
	break;
case Mips::BGEZALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BGEZALL:
	dbgs() << "[]";
	break;
case Mips::BGEZALS_MM:
	dbgs() << "[]";
	break;
case Mips::BGEZAL_MM:
	dbgs() << "[]";
	break;
case Mips::BGEZC:
	dbgs() << "[]";
	break;
case Mips::BGEZC64:
	dbgs() << "[]";
	break;
case Mips::BGEZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BGEZL:
	dbgs() << "[]";
	break;
case Mips::BGEZ_MM:
	dbgs() << "[(brcond (i32 (setge GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BGT:
	dbgs() << "[]";
	break;
case Mips::BGTImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGTL:
	dbgs() << "[]";
	break;
case Mips::BGTLImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGTU:
	dbgs() << "[]";
	break;
case Mips::BGTUImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGTUL:
	dbgs() << "[]";
	break;
case Mips::BGTULImmMacro:
	dbgs() << "[]";
	break;
case Mips::BGTZ:
	dbgs() << "[(brcond (i32 (setgt GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BGTZ64:
	dbgs() << "[(brcond (i32 (setgt GPR64Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BGTZALC:
	dbgs() << "[]";
	break;
case Mips::BGTZALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BGTZC:
	dbgs() << "[]";
	break;
case Mips::BGTZC64:
	dbgs() << "[]";
	break;
case Mips::BGTZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BGTZL:
	dbgs() << "[]";
	break;
case Mips::BGTZ_MM:
	dbgs() << "[(brcond (i32 (setgt GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BINSLI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect (v16i8 vsplat_maskl_bits_uimm3:$m), (v16i8 MSA128BOpnd:$ws), MSA128BOpnd:$wd_in))]";
	break;
case Mips::BINSLI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vselect (v2i64 vsplat_maskl_bits_uimm6:$m), (v2i64 MSA128DOpnd:$ws), MSA128DOpnd:$wd_in))]";
	break;
case Mips::BINSLI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vselect (v8i16 vsplat_maskl_bits_uimm4:$m), (v8i16 MSA128HOpnd:$ws), MSA128HOpnd:$wd_in))]";
	break;
case Mips::BINSLI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vselect (v4i32 vsplat_maskl_bits_uimm5:$m), (v4i32 MSA128WOpnd:$ws), MSA128WOpnd:$wd_in))]";
	break;
case Mips::BINSL_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_binsl_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::BINSL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_binsl_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::BINSL_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_binsl_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::BINSL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_binsl_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::BINSRI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect (v16i8 vsplat_maskr_bits_uimm3:$m), (v16i8 MSA128BOpnd:$ws), MSA128BOpnd:$wd_in))]";
	break;
case Mips::BINSRI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vselect (v2i64 vsplat_maskr_bits_uimm6:$m), (v2i64 MSA128DOpnd:$ws), MSA128DOpnd:$wd_in))]";
	break;
case Mips::BINSRI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vselect (v8i16 vsplat_maskr_bits_uimm4:$m), (v8i16 MSA128HOpnd:$ws), MSA128HOpnd:$wd_in))]";
	break;
case Mips::BINSRI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vselect (v4i32 vsplat_maskr_bits_uimm5:$m), (v4i32 MSA128WOpnd:$ws), MSA128WOpnd:$wd_in))]";
	break;
case Mips::BINSR_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_binsr_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::BINSR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_binsr_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::BINSR_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_binsr_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::BINSR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_binsr_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::BITREV:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_bitrev GPR32Opnd:$rt))]";
	break;
case Mips::BITREV_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_bitrev GPR32Opnd:$rs))]";
	break;
case Mips::BITSWAP:
	dbgs() << "[]";
	break;
case Mips::BITSWAP_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLE:
	dbgs() << "[]";
	break;
case Mips::BLEImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLEL:
	dbgs() << "[]";
	break;
case Mips::BLELImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLEU:
	dbgs() << "[]";
	break;
case Mips::BLEUImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLEUL:
	dbgs() << "[]";
	break;
case Mips::BLEULImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLEZ:
	dbgs() << "[(brcond (i32 (setle GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BLEZ64:
	dbgs() << "[(brcond (i32 (setle GPR64Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BLEZALC:
	dbgs() << "[]";
	break;
case Mips::BLEZALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLEZC:
	dbgs() << "[]";
	break;
case Mips::BLEZC64:
	dbgs() << "[]";
	break;
case Mips::BLEZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLEZL:
	dbgs() << "[]";
	break;
case Mips::BLEZ_MM:
	dbgs() << "[(brcond (i32 (setle GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BLT:
	dbgs() << "[]";
	break;
case Mips::BLTC:
	dbgs() << "[]";
	break;
case Mips::BLTC64:
	dbgs() << "[]";
	break;
case Mips::BLTC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLTImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLTL:
	dbgs() << "[]";
	break;
case Mips::BLTLImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLTU:
	dbgs() << "[]";
	break;
case Mips::BLTUC:
	dbgs() << "[]";
	break;
case Mips::BLTUC64:
	dbgs() << "[]";
	break;
case Mips::BLTUC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLTUImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLTUL:
	dbgs() << "[]";
	break;
case Mips::BLTULImmMacro:
	dbgs() << "[]";
	break;
case Mips::BLTZ:
	dbgs() << "[(brcond (i32 (setlt GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BLTZ64:
	dbgs() << "[(brcond (i32 (setlt GPR64Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BLTZAL:
	dbgs() << "[]";
	break;
case Mips::BLTZALC:
	dbgs() << "[]";
	break;
case Mips::BLTZALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLTZALL:
	dbgs() << "[]";
	break;
case Mips::BLTZALS_MM:
	dbgs() << "[]";
	break;
case Mips::BLTZAL_MM:
	dbgs() << "[]";
	break;
case Mips::BLTZC:
	dbgs() << "[]";
	break;
case Mips::BLTZC64:
	dbgs() << "[]";
	break;
case Mips::BLTZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BLTZL:
	dbgs() << "[]";
	break;
case Mips::BLTZ_MM:
	dbgs() << "[(brcond (i32 (setlt GPR32Opnd:$rs, 0)), bb:$offset)]";
	break;
case Mips::BMNZI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect vsplati8_uimm8:$u8, MSA128BOpnd:$ws, MSA128BOpnd:$wd_in))]";
	break;
case Mips::BMNZ_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wt, MSA128BOpnd:$ws, MSA128BOpnd:$wd_in))]";
	break;
case Mips::BMZI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect vsplati8_uimm8:$u8, MSA128BOpnd:$wd_in, MSA128BOpnd:$ws))]";
	break;
case Mips::BMZ_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wt, MSA128BOpnd:$wd_in, MSA128BOpnd:$ws))]";
	break;
case Mips::BNE:
	dbgs() << "[(brcond (i32 (setne GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
	break;
case Mips::BNE64:
	dbgs() << "[(brcond (i32 (setne GPR64Opnd:$rs, GPR64Opnd:$rt)), bb:$offset)]";
	break;
case Mips::BNEC:
	dbgs() << "[]";
	break;
case Mips::BNEC64:
	dbgs() << "[]";
	break;
case Mips::BNEC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BNEGI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (xor MSA128BOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BNEGI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (xor MSA128DOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BNEGI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (xor MSA128HOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BNEGI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (xor MSA128WOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BNEG_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vbneg_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::BNEG_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vbneg_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::BNEG_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vbneg_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::BNEG_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vbneg_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::BNEL:
	dbgs() << "[]";
	break;
case Mips::BNELImmMacro:
	dbgs() << "[]";
	break;
case Mips::BNEZ16_MM:
	dbgs() << "[]";
	break;
case Mips::BNEZALC:
	dbgs() << "[]";
	break;
case Mips::BNEZALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BNEZC:
	dbgs() << "[]";
	break;
case Mips::BNEZC16_MMR6:
	dbgs() << "[]";
	break;
case Mips::BNEZC64:
	dbgs() << "[]";
	break;
case Mips::BNEZC_MM:
	dbgs() << "[]";
	break;
case Mips::BNEZC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BNE_MM:
	dbgs() << "[(brcond (i32 (setne GPR32Opnd:$rs, GPR32Opnd:$rt)), bb:$offset)]";
	break;
case Mips::BNVC:
	dbgs() << "[]";
	break;
case Mips::BNVC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BNZ_B:
	dbgs() << "[]";
	break;
case Mips::BNZ_D:
	dbgs() << "[]";
	break;
case Mips::BNZ_H:
	dbgs() << "[]";
	break;
case Mips::BNZ_V:
	dbgs() << "[]";
	break;
case Mips::BNZ_W:
	dbgs() << "[]";
	break;
case Mips::BOVC:
	dbgs() << "[]";
	break;
case Mips::BOVC_MMR6:
	dbgs() << "[]";
	break;
case Mips::BPOSGE32:
	dbgs() << "[]";
	break;
case Mips::BPOSGE32C_MMR3:
	dbgs() << "[]";
	break;
case Mips::BPOSGE32_MM:
	dbgs() << "[]";
	break;
case Mips::BPOSGE32_PSEUDO:
	dbgs() << "[(set GPR32Opnd:$dst, (int_mips_bposge32))]";
	break;
case Mips::BREAK:
	dbgs() << "[]";
	break;
case Mips::BREAK16_MM:
	dbgs() << "[]";
	break;
case Mips::BREAK16_MMR6:
	dbgs() << "[]";
	break;
case Mips::BREAK_MM:
	dbgs() << "[]";
	break;
case Mips::BREAK_MMR6:
	dbgs() << "[]";
	break;
case Mips::BSELI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wd_in, vsplati8_uimm8:$u8, MSA128BOpnd:$ws))]";
	break;
case Mips::BSEL_D_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (v2i64 (vselect MSA128DOpnd:$wd_in, MSA128DOpnd:$wt, MSA128DOpnd:$ws)))]";
	break;
case Mips::BSEL_FD_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (v2f64 (vselect MSA128DOpnd:$wd_in, MSA128DOpnd:$wt, MSA128DOpnd:$ws)))]";
	break;
case Mips::BSEL_FW_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (v4f32 (vselect MSA128WOpnd:$wd_in, MSA128WOpnd:$wt, MSA128WOpnd:$ws)))]";
	break;
case Mips::BSEL_H_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (v8i16 (vselect MSA128HOpnd:$wd_in, MSA128HOpnd:$wt, MSA128HOpnd:$ws)))]";
	break;
case Mips::BSEL_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (vselect MSA128BOpnd:$wd_in, MSA128BOpnd:$wt, MSA128BOpnd:$ws))]";
	break;
case Mips::BSEL_W_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (v4i32 (vselect MSA128WOpnd:$wd_in, MSA128WOpnd:$wt, MSA128WOpnd:$ws)))]";
	break;
case Mips::BSETI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (or MSA128BOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BSETI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (or MSA128DOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BSETI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (or MSA128HOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BSETI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (or MSA128WOpnd:$ws, vsplat_uimm_pow2:$m))]";
	break;
case Mips::BSET_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vbset_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::BSET_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vbset_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::BSET_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vbset_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::BSET_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vbset_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::BUNDLE:

	break;
case Mips::BZ_B:
	dbgs() << "[]";
	break;
case Mips::BZ_D:
	dbgs() << "[]";
	break;
case Mips::BZ_H:
	dbgs() << "[]";
	break;
case Mips::BZ_V:
	dbgs() << "[]";
	break;
case Mips::BZ_W:
	dbgs() << "[]";
	break;
case Mips::B_MM:
	dbgs() << "[(br bb:$offset)]";
	break;
case Mips::B_MMR6_Pseudo:
	dbgs() << "[]";
	break;
case Mips::B_MM_Pseudo:
	dbgs() << "[]";
	break;
case Mips::BeqImm:
	dbgs() << "[]";
	break;
case Mips::BeqzRxImm16:
	dbgs() << "[]";
	break;
case Mips::BeqzRxImmX16:
	dbgs() << "[]";
	break;
case Mips::Bimm16:
	dbgs() << "[]";
	break;
case Mips::BimmX16:
	dbgs() << "[]";
	break;
case Mips::BneImm:
	dbgs() << "[]";
	break;
case Mips::BnezRxImm16:
	dbgs() << "[]";
	break;
case Mips::BnezRxImmX16:
	dbgs() << "[]";
	break;
case Mips::Break16:
	dbgs() << "[]";
	break;
case Mips::Bteqz16:
	dbgs() << "[]";
	break;
case Mips::BteqzT8CmpX16:
	dbgs() << "[]";
	break;
case Mips::BteqzT8CmpiX16:
	dbgs() << "[]";
	break;
case Mips::BteqzT8SltX16:
	dbgs() << "[]";
	break;
case Mips::BteqzT8SltiX16:
	dbgs() << "[]";
	break;
case Mips::BteqzT8SltiuX16:
	dbgs() << "[]";
	break;
case Mips::BteqzT8SltuX16:
	dbgs() << "[]";
	break;
case Mips::BteqzX16:
	dbgs() << "[]";
	break;
case Mips::Btnez16:
	dbgs() << "[]";
	break;
case Mips::BtnezT8CmpX16:
	dbgs() << "[]";
	break;
case Mips::BtnezT8CmpiX16:
	dbgs() << "[]";
	break;
case Mips::BtnezT8SltX16:
	dbgs() << "[]";
	break;
case Mips::BtnezT8SltiX16:
	dbgs() << "[]";
	break;
case Mips::BtnezT8SltiuX16:
	dbgs() << "[]";
	break;
case Mips::BtnezT8SltuX16:
	dbgs() << "[]";
	break;
case Mips::BtnezX16:
	dbgs() << "[]";
	break;
case Mips::BuildPairF64:
	dbgs() << "[(set AFGR64Opnd:$dst, (MipsBuildPairF64 GPR32Opnd:$lo, GPR32Opnd:$hi))]";
	break;
case Mips::BuildPairF64_64:
	dbgs() << "[(set FGR64Opnd:$dst, (MipsBuildPairF64 GPR32Opnd:$lo, GPR32Opnd:$hi))]";
	break;
case Mips::CACHE:
	dbgs() << "[]";
	break;
case Mips::CACHEE:
	dbgs() << "[]";
	break;
case Mips::CACHEE_MM:
	dbgs() << "[]";
	break;
case Mips::CACHE_MM:
	dbgs() << "[]";
	break;
case Mips::CACHE_MMR6:
	dbgs() << "[]";
	break;
case Mips::CACHE_R6:
	dbgs() << "[]";
	break;
case Mips::CEIL_L_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CEIL_L_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CEIL_L_S:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CEIL_L_S_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CEIL_W_D32:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CEIL_W_D64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CEIL_W_D_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CEIL_W_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CEIL_W_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CEIL_W_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CEIL_W_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CEQI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vseteq_v16i8 MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
	break;
case Mips::CEQI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vseteq_v2i64 MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
	break;
case Mips::CEQI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vseteq_v8i16 MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
	break;
case Mips::CEQI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vseteq_v4i32 MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
	break;
case Mips::CEQ_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vseteq_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::CEQ_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vseteq_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::CEQ_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vseteq_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::CEQ_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vseteq_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::CFC1:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag CCROpnd:$fs))]";
	break;
case Mips::CFC1_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag CCROpnd:$fs))]";
	break;
case Mips::CFC2_MM:
	dbgs() << "[]";
	break;
case Mips::CFCMSA:
	dbgs() << "[]";
	break;
case Mips::CFI_INSTRUCTION:

	break;
case Mips::CFTC1:
	dbgs() << "[]";
	break;
case Mips::CINS:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsCIns GPR64Opnd:$rs, immZExt5:$pos, imm:$lenm1))]";
	break;
case Mips::CINS32:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsCIns GPR64Opnd:$rs, immZExt5Plus32:$pos, imm:$lenm1))]";
	break;
case Mips::CINS64_32:
	dbgs() << "[]";
	break;
case Mips::CINS_i32:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsCIns GPR32Opnd:$rs, immZExt5:$pos, imm:$lenm1))]";
	break;
case Mips::CLASS_D:
	dbgs() << "[]";
	break;
case Mips::CLASS_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::CLASS_S:
	dbgs() << "[]";
	break;
case Mips::CLASS_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::CLEI_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetle_v16i8 MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
	break;
case Mips::CLEI_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetle_v2i64 MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
	break;
case Mips::CLEI_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetle_v8i16 MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
	break;
case Mips::CLEI_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetle_v4i32 MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
	break;
case Mips::CLEI_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetule_v16i8 MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
	break;
case Mips::CLEI_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetule_v2i64 MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
	break;
case Mips::CLEI_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetule_v8i16 MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
	break;
case Mips::CLEI_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetule_v4i32 MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
	break;
case Mips::CLE_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetle_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::CLE_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetle_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::CLE_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetle_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::CLE_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetle_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::CLE_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetule_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::CLE_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetule_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::CLE_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetule_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::CLE_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetule_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::CLO:
	dbgs() << "[(set GPR32Opnd:$rd, (ctlz (not GPR32Opnd:$rs)))]";
	break;
case Mips::CLO_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (ctlz (not GPR32Opnd:$rs)))]";
	break;
case Mips::CLO_MMR6:
	dbgs() << "[]";
	break;
case Mips::CLO_R6:
	dbgs() << "[(set GPR32Opnd:$rd, (ctlz (not GPR32Opnd:$rs)))]";
	break;
case Mips::CLTI_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetlt_v16i8 MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
	break;
case Mips::CLTI_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetlt_v2i64 MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
	break;
case Mips::CLTI_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetlt_v8i16 MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
	break;
case Mips::CLTI_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetlt_v4i32 MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
	break;
case Mips::CLTI_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetult_v16i8 MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
	break;
case Mips::CLTI_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetult_v2i64 MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
	break;
case Mips::CLTI_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetult_v8i16 MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
	break;
case Mips::CLTI_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetult_v4i32 MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
	break;
case Mips::CLT_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetlt_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::CLT_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetlt_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::CLT_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetlt_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::CLT_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetlt_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::CLT_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsetult_v16i8 MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::CLT_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsetult_v2i64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::CLT_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsetult_v8i16 MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::CLT_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsetult_v4i32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::CLZ:
	dbgs() << "[(set GPR32Opnd:$rd, (ctlz GPR32Opnd:$rs))]";
	break;
case Mips::CLZ_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (ctlz GPR32Opnd:$rs))]";
	break;
case Mips::CLZ_MMR6:
	dbgs() << "[]";
	break;
case Mips::CLZ_R6:
	dbgs() << "[(set GPR32Opnd:$rd, (ctlz GPR32Opnd:$rs))]";
	break;
case Mips::CMPGDU_EQ_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGDU_EQ_QB_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGDU_LE_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGDU_LE_QB_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGDU_LT_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGDU_LT_QB_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgdu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGU_EQ_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGU_EQ_QB_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGU_LE_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGU_LE_QB_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_le_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGU_LT_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPGU_LT_QB_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_cmpgu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::CMPU_EQ_QB:
	dbgs() << "[(int_mips_cmpu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMPU_EQ_QB_MM:
	dbgs() << "[(int_mips_cmpu_eq_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMPU_LE_QB:
	dbgs() << "[(int_mips_cmpu_le_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMPU_LE_QB_MM:
	dbgs() << "[(int_mips_cmpu_le_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMPU_LT_QB:
	dbgs() << "[(int_mips_cmpu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMPU_LT_QB_MM:
	dbgs() << "[(int_mips_cmpu_lt_qb DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_AF_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_AF_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_EQ_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_EQ_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_EQ_PH:
	dbgs() << "[(int_mips_cmp_eq_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_EQ_PH_MM:
	dbgs() << "[(int_mips_cmp_eq_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_EQ_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_EQ_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setoeq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_F_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_F_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_LE_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_LE_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_LE_PH:
	dbgs() << "[(int_mips_cmp_le_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_LE_PH_MM:
	dbgs() << "[(int_mips_cmp_le_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_LE_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_LE_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setole FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_LT_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_LT_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_LT_PH:
	dbgs() << "[(int_mips_cmp_lt_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_LT_PH_MM:
	dbgs() << "[(int_mips_cmp_lt_ph DSPROpnd:$rs, DSPROpnd:$rt)]";
	break;
case Mips::CMP_LT_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_LT_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setolt FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SAF_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SAF_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SAF_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SAF_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SEQ_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SEQ_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SEQ_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SEQ_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SLE_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SLE_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SLE_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SLE_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SLT_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SLT_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SLT_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SLT_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SUEQ_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SUEQ_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SUEQ_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SUEQ_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SULE_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SULE_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SULE_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SULE_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SULT_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SULT_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SULT_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SULT_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SUN_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SUN_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_SUN_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_SUN_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_UEQ_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_UEQ_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_UEQ_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_UEQ_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setueq FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_ULE_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_ULE_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_ULE_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_ULE_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setule FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_ULT_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_ULT_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_ULT_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_ULT_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setult FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_UN_D:
	dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_UN_D_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::CMP_UN_S:
	dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CMP_UN_S_MMR6:
	dbgs() << "[(set FGRCCOpnd:$fd, (setuo FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CONSTPOOL_ENTRY:
	dbgs() << "[]";
	break;
case Mips::COPY:

	break;
case Mips::COPY_FD_PSEUDO:
	dbgs() << "[(set FGR64:$wd, (vector_extract (v2f64 MSA128D:$ws), immZExt1Ptr:$n))]";
	break;
case Mips::COPY_FW_PSEUDO:
	dbgs() << "[(set FGR32:$wd, (vector_extract (v4f32 MSA128W:$ws), immZExt2Ptr:$n))]";
	break;
case Mips::COPY_S_B:
	dbgs() << "[(set GPR32Opnd:$rd, (vextract_sext_i8 (v16i8 MSA128BOpnd:$ws), immZExt4Ptr:$n))]";
	break;
case Mips::COPY_S_D:
	dbgs() << "[(set GPR64Opnd:$rd, (vextract_sext_i64 (v2i64 MSA128DOpnd:$ws), immZExt1Ptr:$n))]";
	break;
case Mips::COPY_S_H:
	dbgs() << "[(set GPR32Opnd:$rd, (vextract_sext_i16 (v8i16 MSA128HOpnd:$ws), immZExt3Ptr:$n))]";
	break;
case Mips::COPY_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (vextract_sext_i32 (v4i32 MSA128WOpnd:$ws), immZExt2Ptr:$n))]";
	break;
case Mips::COPY_TO_REGCLASS:

	break;
case Mips::COPY_U_B:
	dbgs() << "[(set GPR32Opnd:$rd, (vextract_zext_i8 (v16i8 MSA128BOpnd:$ws), immZExt4Ptr:$n))]";
	break;
case Mips::COPY_U_H:
	dbgs() << "[(set GPR32Opnd:$rd, (vextract_zext_i16 (v8i16 MSA128HOpnd:$ws), immZExt3Ptr:$n))]";
	break;
case Mips::COPY_U_W:
	dbgs() << "[(set GPR32Opnd:$rd, (vextract_zext_i32 (v4i32 MSA128WOpnd:$ws), immZExt2Ptr:$n))]";
	break;
case Mips::CRC32B:
	dbgs() << "[]";
	break;
case Mips::CRC32CB:
	dbgs() << "[]";
	break;
case Mips::CRC32CD:
	dbgs() << "[]";
	break;
case Mips::CRC32CH:
	dbgs() << "[]";
	break;
case Mips::CRC32CW:
	dbgs() << "[]";
	break;
case Mips::CRC32D:
	dbgs() << "[]";
	break;
case Mips::CRC32H:
	dbgs() << "[]";
	break;
case Mips::CRC32W:
	dbgs() << "[]";
	break;
case Mips::CTC1:
	dbgs() << "[(set CCROpnd:$fs, (null_frag GPR32Opnd:$rt))]";
	break;
case Mips::CTC1_MM:
	dbgs() << "[(set CCROpnd:$fs, (null_frag GPR32Opnd:$rt))]";
	break;
case Mips::CTC2_MM:
	dbgs() << "[]";
	break;
case Mips::CTCMSA:
	dbgs() << "[]";
	break;
case Mips::CTTC1:
	dbgs() << "[]";
	break;
case Mips::CVT_D32_S:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D32_S_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D32_W:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D32_W_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D64_L:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_D64_S:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D64_S_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D64_W:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D64_W_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_D_L_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_L_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_L_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_L_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_L_S:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_L_S_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_L_S_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_PS_PW64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_PS_S64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::CVT_PW_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_D32:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_D32_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_D64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_D64_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_L:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_L_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_S_PL64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_PU64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_S_W:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_S_W_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_S_W_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_W_D32:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CVT_W_D32_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::CVT_W_D64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_W_D64_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::CVT_W_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_W_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::CVT_W_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::C_EQ_D32:
	dbgs() << "[]";
	break;
case Mips::C_EQ_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_EQ_D64:
	dbgs() << "[]";
	break;
case Mips::C_EQ_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_EQ_S:
	dbgs() << "[]";
	break;
case Mips::C_EQ_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_F_D32:
	dbgs() << "[]";
	break;
case Mips::C_F_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_F_D64:
	dbgs() << "[]";
	break;
case Mips::C_F_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_F_S:
	dbgs() << "[]";
	break;
case Mips::C_F_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_LE_D32:
	dbgs() << "[]";
	break;
case Mips::C_LE_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_LE_D64:
	dbgs() << "[]";
	break;
case Mips::C_LE_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_LE_S:
	dbgs() << "[]";
	break;
case Mips::C_LE_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_LT_D32:
	dbgs() << "[]";
	break;
case Mips::C_LT_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_LT_D64:
	dbgs() << "[]";
	break;
case Mips::C_LT_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_LT_S:
	dbgs() << "[]";
	break;
case Mips::C_LT_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGE_D32:
	dbgs() << "[]";
	break;
case Mips::C_NGE_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGE_D64:
	dbgs() << "[]";
	break;
case Mips::C_NGE_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGE_S:
	dbgs() << "[]";
	break;
case Mips::C_NGE_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGLE_D32:
	dbgs() << "[]";
	break;
case Mips::C_NGLE_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGLE_D64:
	dbgs() << "[]";
	break;
case Mips::C_NGLE_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGLE_S:
	dbgs() << "[]";
	break;
case Mips::C_NGLE_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGL_D32:
	dbgs() << "[]";
	break;
case Mips::C_NGL_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGL_D64:
	dbgs() << "[]";
	break;
case Mips::C_NGL_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGL_S:
	dbgs() << "[]";
	break;
case Mips::C_NGL_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGT_D32:
	dbgs() << "[]";
	break;
case Mips::C_NGT_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGT_D64:
	dbgs() << "[]";
	break;
case Mips::C_NGT_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_NGT_S:
	dbgs() << "[]";
	break;
case Mips::C_NGT_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_OLE_D32:
	dbgs() << "[]";
	break;
case Mips::C_OLE_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_OLE_D64:
	dbgs() << "[]";
	break;
case Mips::C_OLE_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_OLE_S:
	dbgs() << "[]";
	break;
case Mips::C_OLE_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_OLT_D32:
	dbgs() << "[]";
	break;
case Mips::C_OLT_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_OLT_D64:
	dbgs() << "[]";
	break;
case Mips::C_OLT_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_OLT_S:
	dbgs() << "[]";
	break;
case Mips::C_OLT_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_SEQ_D32:
	dbgs() << "[]";
	break;
case Mips::C_SEQ_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_SEQ_D64:
	dbgs() << "[]";
	break;
case Mips::C_SEQ_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_SEQ_S:
	dbgs() << "[]";
	break;
case Mips::C_SEQ_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_SF_D32:
	dbgs() << "[]";
	break;
case Mips::C_SF_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_SF_D64:
	dbgs() << "[]";
	break;
case Mips::C_SF_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_SF_S:
	dbgs() << "[]";
	break;
case Mips::C_SF_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_UEQ_D32:
	dbgs() << "[]";
	break;
case Mips::C_UEQ_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_UEQ_D64:
	dbgs() << "[]";
	break;
case Mips::C_UEQ_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_UEQ_S:
	dbgs() << "[]";
	break;
case Mips::C_UEQ_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_ULE_D32:
	dbgs() << "[]";
	break;
case Mips::C_ULE_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_ULE_D64:
	dbgs() << "[]";
	break;
case Mips::C_ULE_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_ULE_S:
	dbgs() << "[]";
	break;
case Mips::C_ULE_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_ULT_D32:
	dbgs() << "[]";
	break;
case Mips::C_ULT_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_ULT_D64:
	dbgs() << "[]";
	break;
case Mips::C_ULT_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_ULT_S:
	dbgs() << "[]";
	break;
case Mips::C_ULT_S_MM:
	dbgs() << "[]";
	break;
case Mips::C_UN_D32:
	dbgs() << "[]";
	break;
case Mips::C_UN_D32_MM:
	dbgs() << "[]";
	break;
case Mips::C_UN_D64:
	dbgs() << "[]";
	break;
case Mips::C_UN_D64_MM:
	dbgs() << "[]";
	break;
case Mips::C_UN_S:
	dbgs() << "[]";
	break;
case Mips::C_UN_S_MM:
	dbgs() << "[]";
	break;
case Mips::CmpRxRy16:
	dbgs() << "[]";
	break;
case Mips::CmpiRxImm16:
	dbgs() << "[]";
	break;
case Mips::CmpiRxImmX16:
	dbgs() << "[]";
	break;
case Mips::Constant32:
	dbgs() << "[]";
	break;
case Mips::DADD:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DADDi:
	dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, null_frag:$imm16))]";
	break;
case Mips::DADDiu:
	dbgs() << "[(set GPR64Opnd:$rt, (add GPR64Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::DADDu:
	dbgs() << "[(set GPR64Opnd:$rd, (add GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DAHI:
	dbgs() << "[]";
	break;
case Mips::DALIGN:
	dbgs() << "[]";
	break;
case Mips::DATI:
	dbgs() << "[]";
	break;
case Mips::DAUI:
	dbgs() << "[]";
	break;
case Mips::DBG_LABEL:

	break;
case Mips::DBG_VALUE:

	break;
case Mips::DBITSWAP:
	dbgs() << "[]";
	break;
case Mips::DCLO:
	dbgs() << "[(set GPR64Opnd:$rd, (ctlz (not GPR64Opnd:$rs)))]";
	break;
case Mips::DCLO_R6:
	dbgs() << "[(set GPR64Opnd:$rd, (ctlz (not GPR64Opnd:$rs)))]";
	break;
case Mips::DCLZ:
	dbgs() << "[(set GPR64Opnd:$rd, (ctlz GPR64Opnd:$rs))]";
	break;
case Mips::DCLZ_R6:
	dbgs() << "[(set GPR64Opnd:$rd, (ctlz GPR64Opnd:$rs))]";
	break;
case Mips::DDIV:
	dbgs() << "[(set GPR64Opnd:$rd, (sdiv GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DDIVU:
	dbgs() << "[(set GPR64Opnd:$rd, (udiv GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DERET:
	dbgs() << "[]";
	break;
case Mips::DERET_MM:
	dbgs() << "[]";
	break;
case Mips::DERET_MMR6:
	dbgs() << "[]";
	break;
case Mips::DEXT:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsExt GPR64Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size))]";
	break;
case Mips::DEXT64_32:
	dbgs() << "[]";
	break;
case Mips::DEXTM:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsExt GPR64Opnd:$rs, immZExt5:$pos, immZExt5Plus33:$size))]";
	break;
case Mips::DEXTU:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsExt GPR64Opnd:$rs, immZExt5Plus32:$pos, immZExt5Plus1:$size))]";
	break;
case Mips::DI:
	dbgs() << "[]";
	break;
case Mips::DINS:
	dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size, GPR64Opnd:$src))]";
	break;
case Mips::DINSM:
	dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5:$pos, immZExtRange2To64:$size, GPR64Opnd:$src))]";
	break;
case Mips::DINSU:
	dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5Plus32:$pos, immZExt5Plus1:$size, GPR64Opnd:$src))]";
	break;
case Mips::DIV:
	dbgs() << "[(set GPR32Opnd:$rd, (sdiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::DIVU:
	dbgs() << "[(set GPR32Opnd:$rd, (udiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::DIVU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (udiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::DIV_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (sdiv GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::DIV_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (sdiv MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DIV_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (sdiv MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::DIV_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (sdiv MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DIV_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (sdiv MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DIV_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (udiv MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DIV_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (udiv MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::DIV_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (udiv MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DIV_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (udiv MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DI_MM:
	dbgs() << "[]";
	break;
case Mips::DI_MMR6:
	dbgs() << "[]";
	break;
case Mips::DLSA:
	dbgs() << "[(set GPR64Opnd:$rd, (add GPR64Opnd:$rt, (shl GPR64Opnd:$rs, immZExt2Lsa:$sa)))]";
	break;
case Mips::DLSA_R6:
	dbgs() << "[]";
	break;
case Mips::DMFC0:
	dbgs() << "[]";
	break;
case Mips::DMFC1:
	dbgs() << "[(set GPR64Opnd:$rt, (bitconvert FGR64Opnd:$fs))]";
	break;
case Mips::DMFC2:
	dbgs() << "[]";
	break;
case Mips::DMFC2_OCTEON:
	dbgs() << "[]";
	break;
case Mips::DMFGC0:
	dbgs() << "[]";
	break;
case Mips::DMOD:
	dbgs() << "[(set GPR64Opnd:$rd, (srem GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DMODU:
	dbgs() << "[(set GPR64Opnd:$rd, (urem GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DMT:
	dbgs() << "[]";
	break;
case Mips::DMTC0:
	dbgs() << "[]";
	break;
case Mips::DMTC1:
	dbgs() << "[(set FGR64Opnd:$fs, (bitconvert GPR64Opnd:$rt))]";
	break;
case Mips::DMTC2:
	dbgs() << "[]";
	break;
case Mips::DMTC2_OCTEON:
	dbgs() << "[]";
	break;
case Mips::DMTGC0:
	dbgs() << "[]";
	break;
case Mips::DMUH:
	dbgs() << "[(set GPR64Opnd:$rd, (mulhs GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DMUHU:
	dbgs() << "[(set GPR64Opnd:$rd, (mulhu GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DMUL:
	dbgs() << "[(set GPR64Opnd:$rd, (mul GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DMULImmMacro:
	dbgs() << "[]";
	break;
case Mips::DMULMacro:
	dbgs() << "[]";
	break;
case Mips::DMULOMacro:
	dbgs() << "[]";
	break;
case Mips::DMULOUMacro:
	dbgs() << "[]";
	break;
case Mips::DMULT:
	dbgs() << "[]";
	break;
case Mips::DMULTu:
	dbgs() << "[]";
	break;
case Mips::DMULU:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DMUL_R6:
	dbgs() << "[(set GPR64Opnd:$rd, (mul GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DOTP_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dotp_s_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DOTP_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dotp_s_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DOTP_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dotp_s_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DOTP_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dotp_u_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DOTP_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dotp_u_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DOTP_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dotp_u_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DPADD_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpadd_s_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DPADD_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpadd_s_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DPADD_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpadd_s_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DPADD_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpadd_u_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DPADD_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpadd_u_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DPADD_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpadd_u_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DPAQX_SA_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQX_SA_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQX_S_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQX_S_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQ_SA_L_W:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQ_SA_L_W_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQ_S_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAQ_S_W_PH_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAU_H_QBL:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAU_H_QBL_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAU_H_QBR:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAU_H_QBR_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAX_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPAX_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPAX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPA_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPA_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPOP:
	dbgs() << "[(set GPR64Opnd:$rd, (ctpop GPR64Opnd:$rs))]";
	break;
case Mips::DPSQX_SA_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQX_SA_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_SA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQX_S_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQX_S_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQX_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQ_SA_L_W:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQ_SA_L_W_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_SA_L_W GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQ_S_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSQ_S_W_PH_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSUB_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpsub_s_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DPSUB_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpsub_s_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DPSUB_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpsub_s_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DPSUB_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_dpsub_u_d MSA128DOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::DPSUB_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_dpsub_u_h MSA128HOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::DPSUB_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_dpsub_u_w MSA128WOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::DPSU_H_QBL:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSU_H_QBL_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSU_H_QBR:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSU_H_QBR_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSU_H_QBR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSX_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPSX_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPSX_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPS_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPS_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DPS_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsDPS_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::DROL:
	dbgs() << "[]";
	break;
case Mips::DROLImm:
	dbgs() << "[]";
	break;
case Mips::DROR:
	dbgs() << "[]";
	break;
case Mips::DRORImm:
	dbgs() << "[]";
	break;
case Mips::DROTR:
	dbgs() << "[(set GPR64Opnd:$rd, (rotr GPR64Opnd:$rt, immZExt6:$shamt))]";
	break;
case Mips::DROTR32:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::DROTRV:
	dbgs() << "[(set GPR64Opnd:$rd, (rotr GPR64Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::DSBH:
	dbgs() << "[]";
	break;
case Mips::DSDIV:
	dbgs() << "[]";
	break;
case Mips::DSDivIMacro:
	dbgs() << "[]";
	break;
case Mips::DSDivMacro:
	dbgs() << "[]";
	break;
case Mips::DSHD:
	dbgs() << "[]";
	break;
case Mips::DSLL:
	dbgs() << "[(set GPR64Opnd:$rd, (shl GPR64Opnd:$rt, immZExt6:$shamt))]";
	break;
case Mips::DSLL32:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::DSLL64_32:
	dbgs() << "[]";
	break;
case Mips::DSLLV:
	dbgs() << "[(set GPR64Opnd:$rd, (shl GPR64Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::DSRA:
	dbgs() << "[(set GPR64Opnd:$rd, (sra GPR64Opnd:$rt, immZExt6:$shamt))]";
	break;
case Mips::DSRA32:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::DSRAV:
	dbgs() << "[(set GPR64Opnd:$rd, (sra GPR64Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::DSRL:
	dbgs() << "[(set GPR64Opnd:$rd, (srl GPR64Opnd:$rt, immZExt6:$shamt))]";
	break;
case Mips::DSRL32:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::DSRLV:
	dbgs() << "[(set GPR64Opnd:$rd, (srl GPR64Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::DSRemIMacro:
	dbgs() << "[]";
	break;
case Mips::DSRemMacro:
	dbgs() << "[]";
	break;
case Mips::DSUB:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DSUBu:
	dbgs() << "[(set GPR64Opnd:$rd, (sub GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::DUDIV:
	dbgs() << "[]";
	break;
case Mips::DUDivIMacro:
	dbgs() << "[]";
	break;
case Mips::DUDivMacro:
	dbgs() << "[]";
	break;
case Mips::DURemIMacro:
	dbgs() << "[]";
	break;
case Mips::DURemMacro:
	dbgs() << "[]";
	break;
case Mips::DVP:
	dbgs() << "[]";
	break;
case Mips::DVPE:
	dbgs() << "[]";
	break;
case Mips::DVP_MMR6:
	dbgs() << "[]";
	break;
case Mips::DivRxRy16:
	dbgs() << "[]";
	break;
case Mips::DivuRxRy16:
	dbgs() << "[]";
	break;
case Mips::EHB:
	dbgs() << "[]";
	break;
case Mips::EHB_MM:
	dbgs() << "[]";
	break;
case Mips::EHB_MMR6:
	dbgs() << "[]";
	break;
case Mips::EH_LABEL:

	break;
case Mips::EI:
	dbgs() << "[]";
	break;
case Mips::EI_MM:
	dbgs() << "[]";
	break;
case Mips::EI_MMR6:
	dbgs() << "[]";
	break;
case Mips::EMT:
	dbgs() << "[]";
	break;
case Mips::ERET:
	dbgs() << "[]";
	break;
case Mips::ERETNC:
	dbgs() << "[]";
	break;
case Mips::ERETNC_MMR6:
	dbgs() << "[]";
	break;
case Mips::ERET_MM:
	dbgs() << "[]";
	break;
case Mips::ERET_MMR6:
	dbgs() << "[]";
	break;
case Mips::ERet:
	dbgs() << "[(MipsERet)]";
	break;
case Mips::EVP:
	dbgs() << "[]";
	break;
case Mips::EVPE:
	dbgs() << "[]";
	break;
case Mips::EVP_MMR6:
	dbgs() << "[]";
	break;
case Mips::EXT:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsExt GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size))]";
	break;
case Mips::EXTP:
	dbgs() << "[]";
	break;
case Mips::EXTPDP:
	dbgs() << "[]";
	break;
case Mips::EXTPDPV:
	dbgs() << "[]";
	break;
case Mips::EXTPDPV_MM:
	dbgs() << "[]";
	break;
case Mips::EXTPDP_MM:
	dbgs() << "[]";
	break;
case Mips::EXTPV:
	dbgs() << "[]";
	break;
case Mips::EXTPV_MM:
	dbgs() << "[]";
	break;
case Mips::EXTP_MM:
	dbgs() << "[]";
	break;
case Mips::EXTRACT_SUBREG:

	break;
case Mips::EXTRV_RS_W:
	dbgs() << "[]";
	break;
case Mips::EXTRV_RS_W_MM:
	dbgs() << "[]";
	break;
case Mips::EXTRV_R_W:
	dbgs() << "[]";
	break;
case Mips::EXTRV_R_W_MM:
	dbgs() << "[]";
	break;
case Mips::EXTRV_S_H:
	dbgs() << "[]";
	break;
case Mips::EXTRV_S_H_MM:
	dbgs() << "[]";
	break;
case Mips::EXTRV_W:
	dbgs() << "[]";
	break;
case Mips::EXTRV_W_MM:
	dbgs() << "[]";
	break;
case Mips::EXTR_RS_W:
	dbgs() << "[]";
	break;
case Mips::EXTR_RS_W_MM:
	dbgs() << "[]";
	break;
case Mips::EXTR_R_W:
	dbgs() << "[]";
	break;
case Mips::EXTR_R_W_MM:
	dbgs() << "[]";
	break;
case Mips::EXTR_S_H:
	dbgs() << "[]";
	break;
case Mips::EXTR_S_H_MM:
	dbgs() << "[]";
	break;
case Mips::EXTR_W:
	dbgs() << "[]";
	break;
case Mips::EXTR_W_MM:
	dbgs() << "[]";
	break;
case Mips::EXTS:
	dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5:$pos, imm:$lenm1))]";
	break;
case Mips::EXTS32:
	dbgs() << "[(set GPR64Opnd:$rt, (null_frag GPR64Opnd:$rs, immZExt5Plus32:$pos, imm:$lenm1))]";
	break;
case Mips::EXT_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsExt GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size))]";
	break;
case Mips::EXT_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsExt GPR32Opnd:$rs, imm:$pos, imm:$size))]";
	break;
case Mips::ExtractElementF64:
	dbgs() << "[(set GPR32Opnd:$dst, (MipsExtractElementF64 AFGR64Opnd:$src, imm:$n))]";
	break;
case Mips::ExtractElementF64_64:
	dbgs() << "[(set GPR32Opnd:$dst, (MipsExtractElementF64 FGR64Opnd:$src, imm:$n))]";
	break;
case Mips::FABS_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fabs MSA128DOpnd:$ws))]";
	break;
case Mips::FABS_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fabs AFGR64Opnd:$fs))]";
	break;
case Mips::FABS_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fabs AFGR64Opnd:$fs))]";
	break;
case Mips::FABS_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fabs FGR64Opnd:$fs))]";
	break;
case Mips::FABS_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fabs FGR64Opnd:$fs))]";
	break;
case Mips::FABS_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fabs FGR32Opnd:$fs))]";
	break;
case Mips::FABS_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fabs FGR32Opnd:$fs))]";
	break;
case Mips::FABS_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fabs MSA128WOpnd:$ws))]";
	break;
case Mips::FADD_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fadd MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FADD_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fadd AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FADD_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fadd AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FADD_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fadd FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FADD_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fadd FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FADD_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fadd FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FADD_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fadd FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FADD_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$fd, (fadd FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FADD_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fadd MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FAULTING_OP:

	break;
case Mips::FCAF_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fcaf_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCAF_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fcaf_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCEQ_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetoeq_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCEQ_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetoeq_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCLASS_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fclass_d MSA128DOpnd:$ws))]";
	break;
case Mips::FCLASS_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fclass_w MSA128WOpnd:$ws))]";
	break;
case Mips::FCLE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetole_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCLE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetole_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCLT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetolt_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCLT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetolt_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCMP_D32:
	dbgs() << "[(MipsFPCmp AFGR64:$fs, AFGR64:$ft, imm:$cond)]";
	break;
case Mips::FCMP_D32_MM:
	dbgs() << "[(MipsFPCmp AFGR64:$fs, AFGR64:$ft, imm:$cond)]";
	break;
case Mips::FCMP_D64:
	dbgs() << "[(MipsFPCmp FGR64:$fs, FGR64:$ft, imm:$cond)]";
	break;
case Mips::FCMP_S32:
	dbgs() << "[(MipsFPCmp FGR32:$fs, FGR32:$ft, imm:$cond)]";
	break;
case Mips::FCMP_S32_MM:
	dbgs() << "[(MipsFPCmp FGR32:$fs, FGR32:$ft, imm:$cond)]";
	break;
case Mips::FCNE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetone_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCNE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetone_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCOR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetord_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCOR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetord_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCUEQ_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetueq_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCUEQ_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetueq_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCULE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetule_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCULE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetule_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCULT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetult_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCULT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetult_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCUNE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetune_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCUNE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetune_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FCUN_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vfsetun_v2f64 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FCUN_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vfsetun_v4f32 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FDIV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fdiv MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FDIV_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fdiv AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FDIV_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fdiv AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FDIV_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fdiv FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FDIV_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fdiv FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FDIV_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fdiv FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FDIV_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fdiv FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FDIV_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$fd, (fdiv FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FDIV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fdiv MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FENTRY_CALL:

	break;
case Mips::FEXDO_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_fexdo_h MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FEXDO_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fexdo_w MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FEXP2_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (mul_fexp2 MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FEXP2_D_1_PSEUDO:
	dbgs() << "[(set MSA128D:$wd, (fexp2 MSA128D:$ws))]";
	break;
case Mips::FEXP2_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (mul_fexp2 MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FEXP2_W_1_PSEUDO:
	dbgs() << "[(set MSA128W:$wd, (fexp2 MSA128W:$ws))]";
	break;
case Mips::FEXUPL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fexupl_d MSA128WOpnd:$ws))]";
	break;
case Mips::FEXUPL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fexupl_w MSA128HOpnd:$ws))]";
	break;
case Mips::FEXUPR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fexupr_d MSA128WOpnd:$ws))]";
	break;
case Mips::FEXUPR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fexupr_w MSA128HOpnd:$ws))]";
	break;
case Mips::FFINT_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (sint_to_fp MSA128DOpnd:$ws))]";
	break;
case Mips::FFINT_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (sint_to_fp MSA128WOpnd:$ws))]";
	break;
case Mips::FFINT_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (uint_to_fp MSA128DOpnd:$ws))]";
	break;
case Mips::FFINT_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (uint_to_fp MSA128WOpnd:$ws))]";
	break;
case Mips::FFQL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ffql_d MSA128WOpnd:$ws))]";
	break;
case Mips::FFQL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ffql_w MSA128HOpnd:$ws))]";
	break;
case Mips::FFQR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ffqr_d MSA128WOpnd:$ws))]";
	break;
case Mips::FFQR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ffqr_w MSA128HOpnd:$ws))]";
	break;
case Mips::FILL_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (v16i8 (vsplati8 GPR32Opnd:$rs)))]";
	break;
case Mips::FILL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (v2i64 (vsplati64 GPR64Opnd:$rs)))]";
	break;
case Mips::FILL_FD_PSEUDO:
	dbgs() << "[(set MSA128D:$wd, (vsplatf64 FGR64:$fs))]";
	break;
case Mips::FILL_FW_PSEUDO:
	dbgs() << "[(set MSA128W:$wd, (vsplatf32 FGR32:$fs))]";
	break;
case Mips::FILL_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (v8i16 (vsplati16 GPR32Opnd:$rs)))]";
	break;
case Mips::FILL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (v4i32 (vsplati32 GPR32Opnd:$rs)))]";
	break;
case Mips::FLOG2_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (flog2 MSA128DOpnd:$ws))]";
	break;
case Mips::FLOG2_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (flog2 MSA128WOpnd:$ws))]";
	break;
case Mips::FLOOR_L_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::FLOOR_L_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::FLOOR_L_S:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FLOOR_L_S_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FLOOR_W_D32:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::FLOOR_W_D64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::FLOOR_W_D_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::FLOOR_W_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::FLOOR_W_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FLOOR_W_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FLOOR_W_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FMADD_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fma MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMADD_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fma MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FMAX_A_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmax_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMAX_A_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmax_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FMAX_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmax_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMAX_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmax_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FMIN_A_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmin_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMIN_A_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmin_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FMIN_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fmin_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMIN_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fmin_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FMOV_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::FMOV_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::FMOV_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::FMOV_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::FMOV_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::FMOV_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FMOV_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FMOV_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::FMSUB_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsFMS MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMSUB_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsFMS MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FMUL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fmul MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FMUL_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FMUL_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FMUL_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fmul FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FMUL_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fmul FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FMUL_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fmul FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FMUL_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fmul FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FMUL_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$fd, (fmul FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FMUL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fmul MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FNEG_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fneg AFGR64Opnd:$fs))]";
	break;
case Mips::FNEG_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fneg AFGR64Opnd:$fs))]";
	break;
case Mips::FNEG_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fneg FGR64Opnd:$fs))]";
	break;
case Mips::FNEG_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fneg FGR64Opnd:$fs))]";
	break;
case Mips::FNEG_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fneg FGR32Opnd:$fs))]";
	break;
case Mips::FNEG_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fneg FGR32Opnd:$fs))]";
	break;
case Mips::FNEG_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (fneg FGR32Opnd:$fs))]";
	break;
case Mips::FORK:
	dbgs() << "[]";
	break;
case Mips::FRCP_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_frcp_d MSA128DOpnd:$ws))]";
	break;
case Mips::FRCP_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_frcp_w MSA128WOpnd:$ws))]";
	break;
case Mips::FRINT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (frint MSA128DOpnd:$ws))]";
	break;
case Mips::FRINT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (frint MSA128WOpnd:$ws))]";
	break;
case Mips::FRSQRT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_frsqrt_d MSA128DOpnd:$ws))]";
	break;
case Mips::FRSQRT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_frsqrt_w MSA128WOpnd:$ws))]";
	break;
case Mips::FSAF_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsaf_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSAF_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsaf_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSEQ_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fseq_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSEQ_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fseq_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSLE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsle_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSLE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsle_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSLT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fslt_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSLT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fslt_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSNE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsne_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSNE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsne_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSOR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsor_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSOR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsor_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSQRT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fsqrt MSA128DOpnd:$ws))]";
	break;
case Mips::FSQRT_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsqrt AFGR64Opnd:$fs))]";
	break;
case Mips::FSQRT_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsqrt AFGR64Opnd:$fs))]";
	break;
case Mips::FSQRT_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fsqrt FGR64Opnd:$fs))]";
	break;
case Mips::FSQRT_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fsqrt FGR64Opnd:$fs))]";
	break;
case Mips::FSQRT_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fsqrt FGR32Opnd:$fs))]";
	break;
case Mips::FSQRT_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fsqrt FGR32Opnd:$fs))]";
	break;
case Mips::FSQRT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fsqrt MSA128WOpnd:$ws))]";
	break;
case Mips::FSUB_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fsub MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSUB_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FSUB_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub AFGR64Opnd:$fs, AFGR64Opnd:$ft))]";
	break;
case Mips::FSUB_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fsub FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FSUB_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (fsub FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::FSUB_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FSUB_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FSUB_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub FGR32Opnd:$fs, FGR32Opnd:$ft))]";
	break;
case Mips::FSUB_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fsub MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSUEQ_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsueq_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSUEQ_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsueq_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSULE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsule_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSULE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsule_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSULT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsult_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSULT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsult_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSUNE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsune_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSUNE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsune_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FSUN_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_fsun_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FSUN_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_fsun_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FTINT_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ftint_s_d MSA128DOpnd:$ws))]";
	break;
case Mips::FTINT_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ftint_s_w MSA128WOpnd:$ws))]";
	break;
case Mips::FTINT_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_ftint_u_d MSA128DOpnd:$ws))]";
	break;
case Mips::FTINT_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ftint_u_w MSA128WOpnd:$ws))]";
	break;
case Mips::FTQ_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_ftq_h MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::FTQ_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_ftq_w MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::FTRUNC_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fp_to_sint MSA128DOpnd:$ws))]";
	break;
case Mips::FTRUNC_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fp_to_sint MSA128WOpnd:$ws))]";
	break;
case Mips::FTRUNC_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (fp_to_uint MSA128DOpnd:$ws))]";
	break;
case Mips::FTRUNC_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (fp_to_uint MSA128WOpnd:$ws))]";
	break;
case Mips::GC_LABEL:

	break;
case Mips::GINVI:
	dbgs() << "[]";
	break;
case Mips::GINVI_MMR6:
	dbgs() << "[]";
	break;
case Mips::GINVT:
	dbgs() << "[]";
	break;
case Mips::GINVT_MMR6:
	dbgs() << "[]";
	break;
case Mips::G_ADD:

	break;
case Mips::G_ADDRSPACE_CAST:

	break;
case Mips::G_AND:

	break;
case Mips::G_ANYEXT:

	break;
case Mips::G_ASHR:

	break;
case Mips::G_ATOMICRMW_ADD:

	break;
case Mips::G_ATOMICRMW_AND:

	break;
case Mips::G_ATOMICRMW_FADD:

	break;
case Mips::G_ATOMICRMW_FSUB:

	break;
case Mips::G_ATOMICRMW_MAX:

	break;
case Mips::G_ATOMICRMW_MIN:

	break;
case Mips::G_ATOMICRMW_NAND:

	break;
case Mips::G_ATOMICRMW_OR:

	break;
case Mips::G_ATOMICRMW_SUB:

	break;
case Mips::G_ATOMICRMW_UMAX:

	break;
case Mips::G_ATOMICRMW_UMIN:

	break;
case Mips::G_ATOMICRMW_XCHG:

	break;
case Mips::G_ATOMICRMW_XOR:

	break;
case Mips::G_ATOMIC_CMPXCHG:

	break;
case Mips::G_ATOMIC_CMPXCHG_WITH_SUCCESS:

	break;
case Mips::G_BITCAST:

	break;
case Mips::G_BITREVERSE:

	break;
case Mips::G_BLOCK_ADDR:

	break;
case Mips::G_BR:

	break;
case Mips::G_BRCOND:

	break;
case Mips::G_BRINDIRECT:

	break;
case Mips::G_BRJT:

	break;
case Mips::G_BSWAP:

	break;
case Mips::G_BUILD_VECTOR:

	break;
case Mips::G_BUILD_VECTOR_TRUNC:

	break;
case Mips::G_CONCAT_VECTORS:

	break;
case Mips::G_CONSTANT:

	break;
case Mips::G_CTLZ:

	break;
case Mips::G_CTLZ_ZERO_UNDEF:

	break;
case Mips::G_CTPOP:

	break;
case Mips::G_CTTZ:

	break;
case Mips::G_CTTZ_ZERO_UNDEF:

	break;
case Mips::G_DYN_STACKALLOC:

	break;
case Mips::G_EXTRACT:

	break;
case Mips::G_EXTRACT_VECTOR_ELT:

	break;
case Mips::G_FABS:

	break;
case Mips::G_FADD:

	break;
case Mips::G_FCANONICALIZE:

	break;
case Mips::G_FCEIL:

	break;
case Mips::G_FCMP:

	break;
case Mips::G_FCONSTANT:

	break;
case Mips::G_FCOPYSIGN:

	break;
case Mips::G_FCOS:

	break;
case Mips::G_FDIV:

	break;
case Mips::G_FENCE:

	break;
case Mips::G_FEXP:

	break;
case Mips::G_FEXP2:

	break;
case Mips::G_FFLOOR:

	break;
case Mips::G_FLOG:

	break;
case Mips::G_FLOG10:

	break;
case Mips::G_FLOG2:

	break;
case Mips::G_FMA:

	break;
case Mips::G_FMAD:

	break;
case Mips::G_FMAXIMUM:

	break;
case Mips::G_FMAXNUM:

	break;
case Mips::G_FMAXNUM_IEEE:

	break;
case Mips::G_FMINIMUM:

	break;
case Mips::G_FMINNUM:

	break;
case Mips::G_FMINNUM_IEEE:

	break;
case Mips::G_FMUL:

	break;
case Mips::G_FNEARBYINT:

	break;
case Mips::G_FNEG:

	break;
case Mips::G_FPEXT:

	break;
case Mips::G_FPOW:

	break;
case Mips::G_FPTOSI:

	break;
case Mips::G_FPTOUI:

	break;
case Mips::G_FPTRUNC:

	break;
case Mips::G_FRAME_INDEX:

	break;
case Mips::G_FREEZE:

	break;
case Mips::G_FREM:

	break;
case Mips::G_FRINT:

	break;
case Mips::G_FSHL:

	break;
case Mips::G_FSHR:

	break;
case Mips::G_FSIN:

	break;
case Mips::G_FSQRT:

	break;
case Mips::G_FSUB:

	break;
case Mips::G_GLOBAL_VALUE:

	break;
case Mips::G_ICMP:

	break;
case Mips::G_IMPLICIT_DEF:

	break;
case Mips::G_INDEXED_LOAD:

	break;
case Mips::G_INDEXED_SEXTLOAD:

	break;
case Mips::G_INDEXED_STORE:

	break;
case Mips::G_INDEXED_ZEXTLOAD:

	break;
case Mips::G_INSERT:

	break;
case Mips::G_INSERT_VECTOR_ELT:

	break;
case Mips::G_INTRINSIC:

	break;
case Mips::G_INTRINSIC_ROUND:

	break;
case Mips::G_INTRINSIC_TRUNC:

	break;
case Mips::G_INTRINSIC_W_SIDE_EFFECTS:

	break;
case Mips::G_INTTOPTR:

	break;
case Mips::G_JUMP_TABLE:

	break;
case Mips::G_LOAD:

	break;
case Mips::G_LSHR:

	break;
case Mips::G_MERGE_VALUES:

	break;
case Mips::G_MUL:

	break;
case Mips::G_OR:

	break;
case Mips::G_PHI:

	break;
case Mips::G_PTRMASK:

	break;
case Mips::G_PTRTOINT:

	break;
case Mips::G_PTR_ADD:

	break;
case Mips::G_READCYCLECOUNTER:

	break;
case Mips::G_READ_REGISTER:

	break;
case Mips::G_SADDE:

	break;
case Mips::G_SADDO:

	break;
case Mips::G_SADDSAT:

	break;
case Mips::G_SDIV:

	break;
case Mips::G_SELECT:

	break;
case Mips::G_SEXT:

	break;
case Mips::G_SEXTLOAD:

	break;
case Mips::G_SEXT_INREG:

	break;
case Mips::G_SHL:

	break;
case Mips::G_SHUFFLE_VECTOR:

	break;
case Mips::G_SITOFP:

	break;
case Mips::G_SMAX:

	break;
case Mips::G_SMIN:

	break;
case Mips::G_SMULH:

	break;
case Mips::G_SMULO:

	break;
case Mips::G_SREM:

	break;
case Mips::G_SSUBE:

	break;
case Mips::G_SSUBO:

	break;
case Mips::G_SSUBSAT:

	break;
case Mips::G_STORE:

	break;
case Mips::G_STRICT_FADD:

	break;
case Mips::G_STRICT_FDIV:

	break;
case Mips::G_STRICT_FMA:

	break;
case Mips::G_STRICT_FMUL:

	break;
case Mips::G_STRICT_FREM:

	break;
case Mips::G_STRICT_FSQRT:

	break;
case Mips::G_STRICT_FSUB:

	break;
case Mips::G_SUB:

	break;
case Mips::G_TRUNC:

	break;
case Mips::G_UADDE:

	break;
case Mips::G_UADDO:

	break;
case Mips::G_UADDSAT:

	break;
case Mips::G_UDIV:

	break;
case Mips::G_UITOFP:

	break;
case Mips::G_UMAX:

	break;
case Mips::G_UMIN:

	break;
case Mips::G_UMULH:

	break;
case Mips::G_UMULO:

	break;
case Mips::G_UNMERGE_VALUES:

	break;
case Mips::G_UREM:

	break;
case Mips::G_USUBE:

	break;
case Mips::G_USUBO:

	break;
case Mips::G_USUBSAT:

	break;
case Mips::G_VAARG:

	break;
case Mips::G_VASTART:

	break;
case Mips::G_WRITE_REGISTER:

	break;
case Mips::G_XOR:

	break;
case Mips::G_ZEXT:

	break;
case Mips::G_ZEXTLOAD:

	break;
case Mips::GotPrologue16:
	dbgs() << "[]";
	break;
case Mips::HADD_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hadd_s_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::HADD_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hadd_s_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::HADD_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hadd_s_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::HADD_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hadd_u_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::HADD_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hadd_u_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::HADD_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hadd_u_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::HSUB_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hsub_s_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::HSUB_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hsub_s_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::HSUB_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hsub_s_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::HSUB_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_hsub_u_d MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::HSUB_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_hsub_u_h MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::HSUB_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_hsub_u_w MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::HYPCALL:
	dbgs() << "[]";
	break;
case Mips::HYPCALL_MM:
	dbgs() << "[]";
	break;
case Mips::ICALL_BRANCH_FUNNEL:

	break;
case Mips::ILVEV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVEV MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ILVEV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVEV MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ILVEV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVEV MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ILVEV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVEV MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ILVL_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVL MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ILVL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVL MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ILVL_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVL MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ILVL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVL MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ILVOD_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVOD MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ILVOD_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVOD MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ILVOD_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVOD MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ILVOD_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVOD MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ILVR_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsILVR MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::ILVR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsILVR MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::ILVR_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsILVR MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::ILVR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsILVR MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::IMPLICIT_DEF:

	break;
case Mips::INLINEASM:

	break;
case Mips::INLINEASM_BR:

	break;
case Mips::INS:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size, GPR32Opnd:$src))]";
	break;
case Mips::INSERT_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vinsert_v16i8 MSA128BOpnd:$wd_in, GPR32Opnd:$rs, immZExt4Ptr:$n))]";
	break;
case Mips::INSERT_B_VIDX64_PSEUDO:
	dbgs() << "[(set MSA128BOpnd:$wd, (vector_insert (v16i8 MSA128BOpnd:$wd_in), GPR32Opnd:$fs, GPR64Opnd:$n))]";
	break;
case Mips::INSERT_B_VIDX_PSEUDO:
	dbgs() << "[(set MSA128BOpnd:$wd, (vector_insert (v16i8 MSA128BOpnd:$wd_in), GPR32Opnd:$fs, GPR32Opnd:$n))]";
	break;
case Mips::INSERT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vinsert_v2i64 MSA128DOpnd:$wd_in, GPR64Opnd:$rs, immZExt1Ptr:$n))]";
	break;
case Mips::INSERT_D_VIDX64_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2i64 MSA128DOpnd:$wd_in), GPR64Opnd:$fs, GPR64Opnd:$n))]";
	break;
case Mips::INSERT_D_VIDX_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2i64 MSA128DOpnd:$wd_in), GPR64Opnd:$fs, GPR32Opnd:$n))]";
	break;
case Mips::INSERT_FD_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2f64 MSA128DOpnd:$wd_in), FGR64Opnd:$fs, immZExt1Ptr:$n))]";
	break;
case Mips::INSERT_FD_VIDX64_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2f64 MSA128DOpnd:$wd_in), FGR64Opnd:$fs, GPR64Opnd:$n))]";
	break;
case Mips::INSERT_FD_VIDX_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (vector_insert (v2f64 MSA128DOpnd:$wd_in), FGR64Opnd:$fs, GPR32Opnd:$n))]";
	break;
case Mips::INSERT_FW_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4f32 MSA128WOpnd:$wd_in), FGR32Opnd:$fs, immZExt2Ptr:$n))]";
	break;
case Mips::INSERT_FW_VIDX64_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4f32 MSA128WOpnd:$wd_in), FGR32Opnd:$fs, GPR64Opnd:$n))]";
	break;
case Mips::INSERT_FW_VIDX_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4f32 MSA128WOpnd:$wd_in), FGR32Opnd:$fs, GPR32Opnd:$n))]";
	break;
case Mips::INSERT_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vinsert_v8i16 MSA128HOpnd:$wd_in, GPR32Opnd:$rs, immZExt3Ptr:$n))]";
	break;
case Mips::INSERT_H_VIDX64_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (vector_insert (v8i16 MSA128HOpnd:$wd_in), GPR32Opnd:$fs, GPR64Opnd:$n))]";
	break;
case Mips::INSERT_H_VIDX_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (vector_insert (v8i16 MSA128HOpnd:$wd_in), GPR32Opnd:$fs, GPR32Opnd:$n))]";
	break;
case Mips::INSERT_SUBREG:

	break;
case Mips::INSERT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vinsert_v4i32 MSA128WOpnd:$wd_in, GPR32Opnd:$rs, immZExt2Ptr:$n))]";
	break;
case Mips::INSERT_W_VIDX64_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4i32 MSA128WOpnd:$wd_in), GPR32Opnd:$fs, GPR64Opnd:$n))]";
	break;
case Mips::INSERT_W_VIDX_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (vector_insert (v4i32 MSA128WOpnd:$wd_in), GPR32Opnd:$fs, GPR32Opnd:$n))]";
	break;
case Mips::INSV:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_insv GPR32Opnd:$src, GPR32Opnd:$rs))]";
	break;
case Mips::INSVE_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (insve_v16i8 MSA128BOpnd:$wd_in, timmZExt4:$n, MSA128BOpnd:$ws, immz:$n2))]";
	break;
case Mips::INSVE_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (insve_v2i64 MSA128DOpnd:$wd_in, timmZExt1:$n, MSA128DOpnd:$ws, immz:$n2))]";
	break;
case Mips::INSVE_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (insve_v8i16 MSA128HOpnd:$wd_in, timmZExt3:$n, MSA128HOpnd:$ws, immz:$n2))]";
	break;
case Mips::INSVE_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (insve_v4i32 MSA128WOpnd:$wd_in, timmZExt2:$n, MSA128WOpnd:$ws, immz:$n2))]";
	break;
case Mips::INSV_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_insv GPR32Opnd:$src, GPR32Opnd:$rs))]";
	break;
case Mips::INS_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag GPR32Opnd:$rs, immZExt5:$pos, immZExt5Plus1:$size, GPR32Opnd:$src))]";
	break;
case Mips::INS_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsIns GPR32Opnd:$rs, imm:$pos, imm:$size, GPR32Opnd:$src))]";
	break;
case Mips::J:
	dbgs() << "[(br bb:$target)]";
	break;
case Mips::JAL:
	dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
	break;
case Mips::JALR:
	dbgs() << "[]";
	break;
case Mips::JALR16_MM:
	dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
	break;
case Mips::JALR64:
	dbgs() << "[]";
	break;
case Mips::JALR64Pseudo:
	dbgs() << "[(MipsJmpLink GPR64Opnd:$rs)]";
	break;
case Mips::JALRC16_MMR6:
	dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
	break;
case Mips::JALRC_HB_MMR6:
	dbgs() << "[]";
	break;
case Mips::JALRC_MMR6:
	dbgs() << "[]";
	break;
case Mips::JALRHB64Pseudo:
	dbgs() << "[(MipsJmpLink GPR64Opnd:$rs)]";
	break;
case Mips::JALRHBPseudo:
	dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
	break;
case Mips::JALRPseudo:
	dbgs() << "[(MipsJmpLink GPR32Opnd:$rs)]";
	break;
case Mips::JALRS16_MM:
	dbgs() << "[]";
	break;
case Mips::JALRS_MM:
	dbgs() << "[]";
	break;
case Mips::JALR_HB:
	dbgs() << "[]";
	break;
case Mips::JALR_HB64:
	dbgs() << "[]";
	break;
case Mips::JALR_MM:
	dbgs() << "[]";
	break;
case Mips::JALS_MM:
	dbgs() << "[]";
	break;
case Mips::JALX:
	dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
	break;
case Mips::JALX_MM:
	dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
	break;
case Mips::JAL_MM:
	dbgs() << "[(MipsJmpLink tglobaladdr:$target)]";
	break;
case Mips::JAL_MMR6:
	dbgs() << "[]";
	break;
case Mips::JIALC:
	dbgs() << "[]";
	break;
case Mips::JIALC64:
	dbgs() << "[]";
	break;
case Mips::JIALC_MMR6:
	dbgs() << "[]";
	break;
case Mips::JIC:
	dbgs() << "[]";
	break;
case Mips::JIC64:
	dbgs() << "[]";
	break;
case Mips::JIC_MMR6:
	dbgs() << "[]";
	break;
case Mips::JR:
	dbgs() << "[(null_frag GPR32Opnd:$rs)]";
	break;
case Mips::JR16_MM:
	dbgs() << "[]";
	break;
case Mips::JR64:
	dbgs() << "[(null_frag GPR64Opnd:$rs)]";
	break;
case Mips::JRADDIUSP:
	dbgs() << "[]";
	break;
case Mips::JRC16_MM:
	dbgs() << "[]";
	break;
case Mips::JRC16_MMR6:
	dbgs() << "[]";
	break;
case Mips::JRCADDIUSP_MMR6:
	dbgs() << "[]";
	break;
case Mips::JR_HB:
	dbgs() << "[]";
	break;
case Mips::JR_HB64:
	dbgs() << "[]";
	break;
case Mips::JR_HB64_R6:
	dbgs() << "[]";
	break;
case Mips::JR_HB_R6:
	dbgs() << "[]";
	break;
case Mips::JR_MM:
	dbgs() << "[(null_frag GPR32Opnd:$rs)]";
	break;
case Mips::J_MM:
	dbgs() << "[(br bb:$target)]";
	break;
case Mips::Jal16:
	dbgs() << "[]";
	break;
case Mips::JalB16:
	dbgs() << "[]";
	break;
case Mips::JalOneReg:
	dbgs() << "[]";
	break;
case Mips::JalTwoReg:
	dbgs() << "[]";
	break;
case Mips::JrRa16:
	dbgs() << "[]";
	break;
case Mips::JrcRa16:
	dbgs() << "[]";
	break;
case Mips::JrcRx16:
	dbgs() << "[]";
	break;
case Mips::JumpLinkReg16:
	dbgs() << "[(MipsJmpLink CPU16Regs:$rs)]";
	break;
case Mips::KILL:

	break;
case Mips::LB:
	dbgs() << "[(set GPR32Opnd:$rt, (sextloadi8 addr:$addr))]";
	break;
case Mips::LB64:
	dbgs() << "[(set GPR64Opnd:$rt, (sextloadi8 addr:$addr))]";
	break;
case Mips::LBE:
	dbgs() << "[]";
	break;
case Mips::LBE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LBU16_MM:
	dbgs() << "[]";
	break;
case Mips::LBUX:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lbux iPTR:$base, iPTR:$index))]";
	break;
case Mips::LBUX_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lbux iPTR:$base, iPTR:$index))]";
	break;
case Mips::LBU_MMR6:
	dbgs() << "[]";
	break;
case Mips::LB_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (sextloadi8 addr:$addr))]";
	break;
case Mips::LB_MMR6:
	dbgs() << "[]";
	break;
case Mips::LBu:
	dbgs() << "[(set GPR32Opnd:$rt, (zextloadi8 addrDefault:$addr))]";
	break;
case Mips::LBu64:
	dbgs() << "[(set GPR64Opnd:$rt, (zextloadi8 addr:$addr))]";
	break;
case Mips::LBuE:
	dbgs() << "[]";
	break;
case Mips::LBuE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LBu_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (zextloadi8 addr:$addr))]";
	break;
case Mips::LD:
	dbgs() << "[(set GPR64Opnd:$rt, (load addr:$addr))]";
	break;
case Mips::LDC1:
	dbgs() << "[(set AFGR64Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LDC164:
	dbgs() << "[(set FGR64Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LDC1_D64_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (load addrimm16:$addr))]";
	break;
case Mips::LDC1_MM:
	dbgs() << "[(set AFGR64Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LDC2:
	dbgs() << "[(set COP2Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LDC2_MMR6:
	dbgs() << "[(set COP2Opnd:$rt, (load addrimm11:$addr))]";
	break;
case Mips::LDC2_R6:
	dbgs() << "[]";
	break;
case Mips::LDC3:
	dbgs() << "[(set COP3Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LDI_B:
	dbgs() << "[]";
	break;
case Mips::LDI_D:
	dbgs() << "[]";
	break;
case Mips::LDI_H:
	dbgs() << "[]";
	break;
case Mips::LDI_W:
	dbgs() << "[]";
	break;
case Mips::LDL:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsLDL addr:$addr, GPR64Opnd:$src))]";
	break;
case Mips::LDMacro:
	dbgs() << "[]";
	break;
case Mips::LDPC:
	dbgs() << "[]";
	break;
case Mips::LDR:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsLDR addr:$addr, GPR64Opnd:$src))]";
	break;
case Mips::LDR_D:
	dbgs() << "[(set MSA128DOpnd:$dst, (int_mips_ldr_d iPTR:$ptr, GPR32:$imm))]";
	break;
case Mips::LDR_W:
	dbgs() << "[(set MSA128WOpnd:$dst, (int_mips_ldr_w iPTR:$ptr, GPR32:$imm))]";
	break;
case Mips::LDXC1:
	dbgs() << "[(set AFGR64Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LDXC164:
	dbgs() << "[(set FGR64Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LD_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (v16i8 (load addrimm10:$addr)))]";
	break;
case Mips::LD_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (v2i64 (load addrimm10lsl3:$addr)))]";
	break;
case Mips::LD_F16:
	dbgs() << "[(set MSA128F16:$ws, (f16 (load addrimm10:$addr)))]";
	break;
case Mips::LD_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (v8i16 (load addrimm10lsl1:$addr)))]";
	break;
case Mips::LD_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (v4i32 (load addrimm10lsl2:$addr)))]";
	break;
case Mips::LEA_ADDiu:
	dbgs() << "[(set GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::LEA_ADDiu64:
	dbgs() << "[(set GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::LEA_ADDiu_MM:
	dbgs() << "[(set GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::LH:
	dbgs() << "[(set GPR32Opnd:$rt, (sextloadi16 addrDefault:$addr))]";
	break;
case Mips::LH64:
	dbgs() << "[(set GPR64Opnd:$rt, (sextloadi16 addr:$addr))]";
	break;
case Mips::LHE:
	dbgs() << "[]";
	break;
case Mips::LHE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LHU16_MM:
	dbgs() << "[]";
	break;
case Mips::LHX:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lhx iPTR:$base, iPTR:$index))]";
	break;
case Mips::LHX_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lhx iPTR:$base, iPTR:$index))]";
	break;
case Mips::LH_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (sextloadi16 addrDefault:$addr))]";
	break;
case Mips::LHu:
	dbgs() << "[(set GPR32Opnd:$rt, (zextloadi16 addr:$addr))]";
	break;
case Mips::LHu64:
	dbgs() << "[(set GPR64Opnd:$rt, (zextloadi16 addr:$addr))]";
	break;
case Mips::LHuE:
	dbgs() << "[]";
	break;
case Mips::LHuE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LHu_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (zextloadi16 addr:$addr))]";
	break;
case Mips::LI16_MM:
	dbgs() << "[]";
	break;
case Mips::LI16_MMR6:
	dbgs() << "[]";
	break;
case Mips::LIFETIME_END:

	break;
case Mips::LIFETIME_START:

	break;
case Mips::LL:
	dbgs() << "[]";
	break;
case Mips::LL64:
	dbgs() << "[]";
	break;
case Mips::LL64_R6:
	dbgs() << "[]";
	break;
case Mips::LLD:
	dbgs() << "[]";
	break;
case Mips::LLD_R6:
	dbgs() << "[]";
	break;
case Mips::LLE:
	dbgs() << "[]";
	break;
case Mips::LLE_MM:
	dbgs() << "[]";
	break;
case Mips::LL_MM:
	dbgs() << "[]";
	break;
case Mips::LL_MMR6:
	dbgs() << "[]";
	break;
case Mips::LL_R6:
	dbgs() << "[]";
	break;
case Mips::LOAD_ACC128:
	dbgs() << "[(set ACC128:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LOAD_ACC64:
	dbgs() << "[(set ACC64:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LOAD_ACC64DSP:
	dbgs() << "[(set ACC64DSPOpnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LOAD_CCOND_DSP:
	dbgs() << "[(set DSPCC:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LOAD_STACK_GUARD:

	break;
case Mips::LOCAL_ESCAPE:

	break;
case Mips::LONG_BRANCH_ADDiu:
	dbgs() << "[]";
	break;
case Mips::LONG_BRANCH_ADDiu2Op:
	dbgs() << "[]";
	break;
case Mips::LONG_BRANCH_DADDiu:
	dbgs() << "[]";
	break;
case Mips::LONG_BRANCH_DADDiu2Op:
	dbgs() << "[]";
	break;
case Mips::LONG_BRANCH_LUi:
	dbgs() << "[]";
	break;
case Mips::LONG_BRANCH_LUi2Op:
	dbgs() << "[]";
	break;
case Mips::LONG_BRANCH_LUi2Op_64:
	dbgs() << "[]";
	break;
case Mips::LSA:
	dbgs() << "[(set GPR32Opnd:$rd, (add GPR32Opnd:$rt, (shl GPR32Opnd:$rs, immZExt2Lsa:$sa)))]";
	break;
case Mips::LSA_MMR6:
	dbgs() << "[]";
	break;
case Mips::LSA_R6:
	dbgs() << "[]";
	break;
case Mips::LUI_MMR6:
	dbgs() << "[]";
	break;
case Mips::LUXC1:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LUXC164:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LUXC1_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LUi:
	dbgs() << "[]";
	break;
case Mips::LUi64:
	dbgs() << "[]";
	break;
case Mips::LUi_MM:
	dbgs() << "[]";
	break;
case Mips::LW:
	dbgs() << "[(set GPR32Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LW16_MM:
	dbgs() << "[]";
	break;
case Mips::LW64:
	dbgs() << "[(set GPR64Opnd:$rt, (sextloadi32 addr:$addr))]";
	break;
case Mips::LWC1:
	dbgs() << "[(set FGR32Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LWC1_MM:
	dbgs() << "[(set FGR32Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LWC2:
	dbgs() << "[(set COP2Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LWC2_MMR6:
	dbgs() << "[(set COP2Opnd:$rt, (load addrimm11:$addr))]";
	break;
case Mips::LWC2_R6:
	dbgs() << "[]";
	break;
case Mips::LWC3:
	dbgs() << "[(set COP3Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LWDSP:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LWDSP_MM:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LWE:
	dbgs() << "[]";
	break;
case Mips::LWE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LWGP_MM:
	dbgs() << "[]";
	break;
case Mips::LWL:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsLWL addr:$addr, GPR32Opnd:$src))]";
	break;
case Mips::LWL64:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsLWL addr:$addr, GPR64Opnd:$src))]";
	break;
case Mips::LWLE:
	dbgs() << "[]";
	break;
case Mips::LWLE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsLWL addrimm12:$addr, GPR32Opnd:$src))]";
	break;
case Mips::LWL_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsLWL addrimm12:$addr, GPR32Opnd:$src))]";
	break;
case Mips::LWM16_MM:
	dbgs() << "[]";
	break;
case Mips::LWM16_MMR6:
	dbgs() << "[]";
	break;
case Mips::LWM32_MM:
	dbgs() << "[]";
	break;
case Mips::LWM_MM:
	dbgs() << "[]";
	break;
case Mips::LWPC:
	dbgs() << "[]";
	break;
case Mips::LWPC_MMR6:
	dbgs() << "[]";
	break;
case Mips::LWP_MM:
	dbgs() << "[]";
	break;
case Mips::LWR:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsLWR addr:$addr, GPR32Opnd:$src))]";
	break;
case Mips::LWR64:
	dbgs() << "[(set GPR64Opnd:$rt, (MipsLWR addr:$addr, GPR64Opnd:$src))]";
	break;
case Mips::LWRE:
	dbgs() << "[]";
	break;
case Mips::LWRE_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsLWR addrimm12:$addr, GPR32Opnd:$src))]";
	break;
case Mips::LWR_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (MipsLWR addrimm12:$addr, GPR32Opnd:$src))]";
	break;
case Mips::LWSP_MM:
	dbgs() << "[]";
	break;
case Mips::LWUPC:
	dbgs() << "[]";
	break;
case Mips::LWU_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (zextloadi32 addrimm12:$addr))]";
	break;
case Mips::LWX:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lwx iPTR:$base, iPTR:$index))]";
	break;
case Mips::LWXC1:
	dbgs() << "[(set FGR32Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LWXC1_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (load (add iPTR:$base, iPTR:$index)))]";
	break;
case Mips::LWXS_MM:
	dbgs() << "[]";
	break;
case Mips::LWX_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_lwx iPTR:$base, iPTR:$index))]";
	break;
case Mips::LW_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag addr:$addr))]";
	break;
case Mips::LW_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (load addrDefault:$addr))]";
	break;
case Mips::LWu:
	dbgs() << "[(set GPR64Opnd:$rt, (zextloadi32 addr:$addr))]";
	break;
case Mips::LbRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::LbuRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::LhRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::LhuRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::LiRxImm16:
	dbgs() << "[]";
	break;
case Mips::LiRxImmAlignX16:
	dbgs() << "[]";
	break;
case Mips::LiRxImmX16:
	dbgs() << "[]";
	break;
case Mips::LoadAddrImm32:
	dbgs() << "[]";
	break;
case Mips::LoadAddrImm64:
	dbgs() << "[]";
	break;
case Mips::LoadAddrReg32:
	dbgs() << "[]";
	break;
case Mips::LoadAddrReg64:
	dbgs() << "[]";
	break;
case Mips::LoadImm32:
	dbgs() << "[]";
	break;
case Mips::LoadImm64:
	dbgs() << "[]";
	break;
case Mips::LoadImmDoubleFGR:
	dbgs() << "[]";
	break;
case Mips::LoadImmDoubleFGR_32:
	dbgs() << "[]";
	break;
case Mips::LoadImmDoubleGPR:
	dbgs() << "[]";
	break;
case Mips::LoadImmSingleFGR:
	dbgs() << "[]";
	break;
case Mips::LoadImmSingleGPR:
	dbgs() << "[]";
	break;
case Mips::LwConstant32:
	dbgs() << "[]";
	break;
case Mips::LwRxPcTcp16:
	dbgs() << "[]";
	break;
case Mips::LwRxPcTcpX16:
	dbgs() << "[]";
	break;
case Mips::LwRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::LwRxSpImmX16:
	dbgs() << "[]";
	break;
case Mips::MADD:
	dbgs() << "[]";
	break;
case Mips::MADDF_D:
	dbgs() << "[]";
	break;
case Mips::MADDF_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::MADDF_S:
	dbgs() << "[]";
	break;
case Mips::MADDF_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::MADDR_Q_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_maddr_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MADDR_Q_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_maddr_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MADDU:
	dbgs() << "[]";
	break;
case Mips::MADDU_DSP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MADDU_DSP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MADDU_MM:
	dbgs() << "[]";
	break;
case Mips::MADDV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (muladd MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MADDV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (muladd MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MADDV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (muladd MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MADDV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (muladd MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MADD_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fadd (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
	break;
case Mips::MADD_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
	break;
case Mips::MADD_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fadd (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr))]";
	break;
case Mips::MADD_DSP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MADD_DSP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MADD_MM:
	dbgs() << "[]";
	break;
case Mips::MADD_Q_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_madd_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MADD_Q_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_madd_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MADD_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fadd (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
	break;
case Mips::MADD_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
	break;
case Mips::MAQ_SA_W_PHL:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_SA_W_PHL_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_SA_W_PHR:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_SA_W_PHR_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_SA_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_S_W_PHL:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_S_W_PHL_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHL GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_S_W_PHR:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAQ_S_W_PHR_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMAQ_S_W_PHR GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MAXA_D:
	dbgs() << "[]";
	break;
case Mips::MAXA_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::MAXA_S:
	dbgs() << "[]";
	break;
case Mips::MAXA_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::MAXI_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (smax MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
	break;
case Mips::MAXI_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (smax MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
	break;
case Mips::MAXI_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (smax MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
	break;
case Mips::MAXI_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (smax MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
	break;
case Mips::MAXI_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (umax MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
	break;
case Mips::MAXI_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (umax MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
	break;
case Mips::MAXI_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (umax MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
	break;
case Mips::MAXI_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (umax MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
	break;
case Mips::MAX_A_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_max_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MAX_A_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_max_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MAX_A_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_max_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MAX_A_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_max_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MAX_D:
	dbgs() << "[]";
	break;
case Mips::MAX_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::MAX_S:
	dbgs() << "[]";
	break;
case Mips::MAX_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (smax MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MAX_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (smax MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MAX_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (smax MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MAX_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::MAX_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (smax MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MAX_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (umax MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MAX_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (umax MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MAX_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (umax MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MAX_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (umax MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MFC0:
	dbgs() << "[]";
	break;
case Mips::MFC0_MMR6:
	dbgs() << "[]";
	break;
case Mips::MFC1:
	dbgs() << "[(set GPR32Opnd:$rt, (bitconvert FGR32Opnd:$fs))]";
	break;
case Mips::MFC1_D64:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::MFC1_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (bitconvert FGR32Opnd:$fs))]";
	break;
case Mips::MFC1_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (bitconvert FGR32Opnd:$fs))]";
	break;
case Mips::MFC2:
	dbgs() << "[]";
	break;
case Mips::MFC2_MMR6:
	dbgs() << "[]";
	break;
case Mips::MFGC0:
	dbgs() << "[]";
	break;
case Mips::MFGC0_MM:
	dbgs() << "[]";
	break;
case Mips::MFHC0_MMR6:
	dbgs() << "[]";
	break;
case Mips::MFHC1_D32:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::MFHC1_D32_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::MFHC1_D64:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::MFHC1_D64_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::MFHC2_MMR6:
	dbgs() << "[]";
	break;
case Mips::MFHGC0:
	dbgs() << "[]";
	break;
case Mips::MFHGC0_MM:
	dbgs() << "[]";
	break;
case Mips::MFHI:
	dbgs() << "[]";
	break;
case Mips::MFHI16_MM:
	dbgs() << "[]";
	break;
case Mips::MFHI64:
	dbgs() << "[]";
	break;
case Mips::MFHI_DSP:
	dbgs() << "[(set GPR32Opnd:$rd, (MipsMFHI ACC64DSPOpnd:$ac))]";
	break;
case Mips::MFHI_DSP_MM:
	dbgs() << "[(set GPR32Opnd:$rs, (MipsMFHI ACC64DSPOpnd:$ac))]";
	break;
case Mips::MFHI_MM:
	dbgs() << "[]";
	break;
case Mips::MFLO:
	dbgs() << "[]";
	break;
case Mips::MFLO16_MM:
	dbgs() << "[]";
	break;
case Mips::MFLO64:
	dbgs() << "[]";
	break;
case Mips::MFLO_DSP:
	dbgs() << "[(set GPR32Opnd:$rd, (MipsMFLO ACC64DSPOpnd:$ac))]";
	break;
case Mips::MFLO_DSP_MM:
	dbgs() << "[(set GPR32Opnd:$rs, (MipsMFLO ACC64DSPOpnd:$ac))]";
	break;
case Mips::MFLO_MM:
	dbgs() << "[]";
	break;
case Mips::MFTACX:
	dbgs() << "[]";
	break;
case Mips::MFTC0:
	dbgs() << "[]";
	break;
case Mips::MFTC1:
	dbgs() << "[]";
	break;
case Mips::MFTDSP:
	dbgs() << "[]";
	break;
case Mips::MFTGPR:
	dbgs() << "[]";
	break;
case Mips::MFTHC1:
	dbgs() << "[]";
	break;
case Mips::MFTHI:
	dbgs() << "[]";
	break;
case Mips::MFTLO:
	dbgs() << "[]";
	break;
case Mips::MFTR:
	dbgs() << "[]";
	break;
case Mips::MINA_D:
	dbgs() << "[]";
	break;
case Mips::MINA_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::MINA_S:
	dbgs() << "[]";
	break;
case Mips::MINA_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::MINI_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (smin MSA128BOpnd:$ws, vsplati8_simm5:$imm))]";
	break;
case Mips::MINI_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (smin MSA128DOpnd:$ws, vsplati64_simm5:$imm))]";
	break;
case Mips::MINI_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (smin MSA128HOpnd:$ws, vsplati16_simm5:$imm))]";
	break;
case Mips::MINI_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (smin MSA128WOpnd:$ws, vsplati32_simm5:$imm))]";
	break;
case Mips::MINI_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (umin MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
	break;
case Mips::MINI_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (umin MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
	break;
case Mips::MINI_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (umin MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
	break;
case Mips::MINI_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (umin MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
	break;
case Mips::MIN_A_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_min_a_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MIN_A_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_min_a_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MIN_A_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_min_a_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MIN_A_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_min_a_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MIN_D:
	dbgs() << "[]";
	break;
case Mips::MIN_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::MIN_S:
	dbgs() << "[]";
	break;
case Mips::MIN_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (smin MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MIN_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (smin MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MIN_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (smin MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MIN_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::MIN_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (smin MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MIN_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (umin MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MIN_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (umin MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MIN_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (umin MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MIN_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (umin MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MIPSeh_return32:
	dbgs() << "[(MIPSehret GPR32:$spoff, GPR32:$dst)]";
	break;
case Mips::MIPSeh_return64:
	dbgs() << "[(MIPSehret GPR64:$spoff, GPR64:$dst)]";
	break;
case Mips::MOD:
	dbgs() << "[(set GPR32Opnd:$rd, (srem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MODSUB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_modsub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MODSUB_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_modsub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MODU:
	dbgs() << "[(set GPR32Opnd:$rd, (urem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MODU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (urem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MOD_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (srem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MOD_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (srem MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MOD_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (srem MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MOD_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (srem MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MOD_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (srem MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MOD_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (urem MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MOD_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (urem MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MOD_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (urem MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MOD_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (urem MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MOVE16_MM:
	dbgs() << "[]";
	break;
case Mips::MOVE16_MMR6:
	dbgs() << "[]";
	break;
case Mips::MOVEP_MM:
	dbgs() << "[]";
	break;
case Mips::MOVEP_MMR6:
	dbgs() << "[]";
	break;
case Mips::MOVE_V:
	dbgs() << "[]";
	break;
case Mips::MOVF_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_F AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
	break;
case Mips::MOVF_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_F AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
	break;
case Mips::MOVF_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (MipsCMovFP_F FGR64Opnd:$fs, FCCRegsOpnd:$fcc, FGR64Opnd:$F))]";
	break;
case Mips::MOVF_I:
	dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_F GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
	break;
case Mips::MOVF_I64:
	dbgs() << "[(set GPR64Opnd:$rd, (MipsCMovFP_F GPR64Opnd:$rs, FCCRegsOpnd:$fcc, GPR64Opnd:$F))]";
	break;
case Mips::MOVF_I_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_F GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
	break;
case Mips::MOVF_S:
	dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_F FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
	break;
case Mips::MOVF_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_F FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
	break;
case Mips::MOVN_I64_D64:
	dbgs() << "[]";
	break;
case Mips::MOVN_I64_I:
	dbgs() << "[]";
	break;
case Mips::MOVN_I64_I64:
	dbgs() << "[]";
	break;
case Mips::MOVN_I64_S:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_D32:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_D32_MM:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_D64:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_I:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_I64:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_MM:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_S:
	dbgs() << "[]";
	break;
case Mips::MOVN_I_S_MM:
	dbgs() << "[]";
	break;
case Mips::MOVT_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_T AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
	break;
case Mips::MOVT_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (MipsCMovFP_T AFGR64Opnd:$fs, FCCRegsOpnd:$fcc, AFGR64Opnd:$F))]";
	break;
case Mips::MOVT_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (MipsCMovFP_T FGR64Opnd:$fs, FCCRegsOpnd:$fcc, FGR64Opnd:$F))]";
	break;
case Mips::MOVT_I:
	dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_T GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
	break;
case Mips::MOVT_I64:
	dbgs() << "[(set GPR64Opnd:$rd, (MipsCMovFP_T GPR64Opnd:$rs, FCCRegsOpnd:$fcc, GPR64Opnd:$F))]";
	break;
case Mips::MOVT_I_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (MipsCMovFP_T GPR32Opnd:$rs, FCCRegsOpnd:$fcc, GPR32Opnd:$F))]";
	break;
case Mips::MOVT_S:
	dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_T FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
	break;
case Mips::MOVT_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (MipsCMovFP_T FGR32Opnd:$fs, FCCRegsOpnd:$fcc, FGR32Opnd:$F))]";
	break;
case Mips::MOVZ_I64_D64:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I64_I:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I64_I64:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I64_S:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_D32:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_D32_MM:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_D64:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_I:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_I64:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_MM:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_S:
	dbgs() << "[]";
	break;
case Mips::MOVZ_I_S_MM:
	dbgs() << "[]";
	break;
case Mips::MSA_FP_EXTEND_D_PSEUDO:
	dbgs() << "[(set FGR64Opnd:$fd, (f64 (fpextend MSA128F16:$ws)))]";
	break;
case Mips::MSA_FP_EXTEND_W_PSEUDO:
	dbgs() << "[(set FGR32Opnd:$fd, (f32 (fpextend MSA128F16:$ws)))]";
	break;
case Mips::MSA_FP_ROUND_D_PSEUDO:
	dbgs() << "[(set MSA128F16:$wd, (f16 (fpround FGR64Opnd:$fs)))]";
	break;
case Mips::MSA_FP_ROUND_W_PSEUDO:
	dbgs() << "[(set MSA128F16:$wd, (f16 (fpround FGR32Opnd:$fs)))]";
	break;
case Mips::MSUB:
	dbgs() << "[]";
	break;
case Mips::MSUBF_D:
	dbgs() << "[]";
	break;
case Mips::MSUBF_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::MSUBF_S:
	dbgs() << "[]";
	break;
case Mips::MSUBF_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::MSUBR_Q_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_msubr_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MSUBR_Q_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_msubr_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MSUBU:
	dbgs() << "[]";
	break;
case Mips::MSUBU_DSP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MSUBU_DSP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MSUBU_MM:
	dbgs() << "[]";
	break;
case Mips::MSUBV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (mulsub MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MSUBV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (mulsub MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MSUBV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (mulsub MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MSUBV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (mulsub MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MSUB_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
	break;
case Mips::MSUB_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr))]";
	break;
case Mips::MSUB_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fsub (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr))]";
	break;
case Mips::MSUB_DSP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MSUB_DSP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MSUB_MM:
	dbgs() << "[]";
	break;
case Mips::MSUB_Q_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_msub_q_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MSUB_Q_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_msub_q_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MSUB_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
	break;
case Mips::MSUB_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr))]";
	break;
case Mips::MTC0:
	dbgs() << "[]";
	break;
case Mips::MTC0_MMR6:
	dbgs() << "[]";
	break;
case Mips::MTC1:
	dbgs() << "[(set FGR32Opnd:$fs, (bitconvert GPR32Opnd:$rt))]";
	break;
case Mips::MTC1_D64:
	dbgs() << "[(set FGR64Opnd:$fs, (null_frag GPR32Opnd:$rt))]";
	break;
case Mips::MTC1_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fs, (null_frag GPR32Opnd:$rt))]";
	break;
case Mips::MTC1_MM:
	dbgs() << "[(set FGR32Opnd:$fs, (bitconvert GPR32Opnd:$rt))]";
	break;
case Mips::MTC1_MMR6:
	dbgs() << "[(set FGR32Opnd:$fs, (bitconvert GPR32Opnd:$rt))]";
	break;
case Mips::MTC2:
	dbgs() << "[]";
	break;
case Mips::MTC2_MMR6:
	dbgs() << "[]";
	break;
case Mips::MTGC0:
	dbgs() << "[]";
	break;
case Mips::MTGC0_MM:
	dbgs() << "[]";
	break;
case Mips::MTHC0_MMR6:
	dbgs() << "[]";
	break;
case Mips::MTHC1_D32:
	dbgs() << "[]";
	break;
case Mips::MTHC1_D32_MM:
	dbgs() << "[]";
	break;
case Mips::MTHC1_D64:
	dbgs() << "[]";
	break;
case Mips::MTHC1_D64_MM:
	dbgs() << "[]";
	break;
case Mips::MTHC2_MMR6:
	dbgs() << "[]";
	break;
case Mips::MTHGC0:
	dbgs() << "[]";
	break;
case Mips::MTHGC0_MM:
	dbgs() << "[]";
	break;
case Mips::MTHI:
	dbgs() << "[]";
	break;
case Mips::MTHI64:
	dbgs() << "[]";
	break;
case Mips::MTHI_DSP:
	dbgs() << "[]";
	break;
case Mips::MTHI_DSP_MM:
	dbgs() << "[]";
	break;
case Mips::MTHI_MM:
	dbgs() << "[]";
	break;
case Mips::MTHLIP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMTHLIP GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MTHLIP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMTHLIP GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MTLO:
	dbgs() << "[]";
	break;
case Mips::MTLO64:
	dbgs() << "[]";
	break;
case Mips::MTLO_DSP:
	dbgs() << "[]";
	break;
case Mips::MTLO_DSP_MM:
	dbgs() << "[]";
	break;
case Mips::MTLO_MM:
	dbgs() << "[]";
	break;
case Mips::MTM0:
	dbgs() << "[]";
	break;
case Mips::MTM1:
	dbgs() << "[]";
	break;
case Mips::MTM2:
	dbgs() << "[]";
	break;
case Mips::MTP0:
	dbgs() << "[]";
	break;
case Mips::MTP1:
	dbgs() << "[]";
	break;
case Mips::MTP2:
	dbgs() << "[]";
	break;
case Mips::MTTACX:
	dbgs() << "[]";
	break;
case Mips::MTTC0:
	dbgs() << "[]";
	break;
case Mips::MTTC1:
	dbgs() << "[]";
	break;
case Mips::MTTDSP:
	dbgs() << "[]";
	break;
case Mips::MTTGPR:
	dbgs() << "[]";
	break;
case Mips::MTTHC1:
	dbgs() << "[]";
	break;
case Mips::MTTHI:
	dbgs() << "[]";
	break;
case Mips::MTTLO:
	dbgs() << "[]";
	break;
case Mips::MTTR:
	dbgs() << "[]";
	break;
case Mips::MUH:
	dbgs() << "[(set GPR32Opnd:$rd, (mulhs GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUHU:
	dbgs() << "[(set GPR32Opnd:$rd, (mulhu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUHU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (mulhu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUH_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (mulhs GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUL:
	dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULEQ_S_W_PHL:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phl DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEQ_S_W_PHL_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phl DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEQ_S_W_PHR:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phr DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEQ_S_W_PHR_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_muleq_s_w_phr DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEU_S_PH_QBL:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbl DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEU_S_PH_QBL_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbl DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEU_S_PH_QBR:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbr DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULEU_S_PH_QBR_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_muleu_s_ph_qbr DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULImmMacro:
	dbgs() << "[]";
	break;
case Mips::MULOMacro:
	dbgs() << "[]";
	break;
case Mips::MULOUMacro:
	dbgs() << "[]";
	break;
case Mips::MULQ_RS_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_rs_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULQ_RS_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_rs_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULQ_RS_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_rs_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULQ_RS_W_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_rs_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULQ_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULQ_S_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_mulq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MULQ_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULQ_S_W_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_mulq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULR_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::MULR_Q_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_mulr_q_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MULR_Q_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_mulr_q_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MULSAQ_S_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MULSAQ_S_W_PH_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSAQ_S_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MULSA_W_PH:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MULSA_W_PH_MMR2:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMULSA_W_PH GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64DSPOpnd:$acin))]";
	break;
case Mips::MULT:
	dbgs() << "[]";
	break;
case Mips::MULTU_DSP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULTU_DSP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULT_DSP:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULT_DSP_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULT_MM:
	dbgs() << "[]";
	break;
case Mips::MULTu:
	dbgs() << "[]";
	break;
case Mips::MULTu_MM:
	dbgs() << "[]";
	break;
case Mips::MULU:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MULV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (mul MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::MULV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (mul MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::MULV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (mul MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MULV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (mul MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MUL_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUL_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUL_PH:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MUL_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MUL_Q_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_mul_q_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::MUL_Q_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_mul_q_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::MUL_R6:
	dbgs() << "[(set GPR32Opnd:$rd, (mul GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::MUL_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_mul_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::MUL_S_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_mul_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::Mfhi16:
	dbgs() << "[]";
	break;
case Mips::Mflo16:
	dbgs() << "[]";
	break;
case Mips::Move32R16:
	dbgs() << "[]";
	break;
case Mips::MoveR3216:
	dbgs() << "[]";
	break;
case Mips::MultRxRy16:
	dbgs() << "[]";
	break;
case Mips::MultRxRyRz16:
	dbgs() << "[]";
	break;
case Mips::MultuRxRy16:
	dbgs() << "[]";
	break;
case Mips::MultuRxRyRz16:
	dbgs() << "[]";
	break;
case Mips::NLOC_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_nloc_b MSA128BOpnd:$ws))]";
	break;
case Mips::NLOC_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_nloc_d MSA128DOpnd:$ws))]";
	break;
case Mips::NLOC_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_nloc_h MSA128HOpnd:$ws))]";
	break;
case Mips::NLOC_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_nloc_w MSA128WOpnd:$ws))]";
	break;
case Mips::NLZC_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (ctlz MSA128BOpnd:$ws))]";
	break;
case Mips::NLZC_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (ctlz MSA128DOpnd:$ws))]";
	break;
case Mips::NLZC_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (ctlz MSA128HOpnd:$ws))]";
	break;
case Mips::NLZC_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (ctlz MSA128WOpnd:$ws))]";
	break;
case Mips::NMADD_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (fadd (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
	break;
case Mips::NMADD_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
	break;
case Mips::NMADD_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fsub fpimm0, (fadd (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr)))]";
	break;
case Mips::NMADD_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (fadd (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
	break;
case Mips::NMADD_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
	break;
case Mips::NMSUB_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (fsub (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
	break;
case Mips::NMSUB_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (fsub fpimm0, (null_frag (fmul AFGR64Opnd:$fs, AFGR64Opnd:$ft), AFGR64Opnd:$fr)))]";
	break;
case Mips::NMSUB_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (fsub fpimm0, (fsub (fmul FGR64Opnd:$fs, FGR64Opnd:$ft), FGR64Opnd:$fr)))]";
	break;
case Mips::NMSUB_S:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (fsub (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
	break;
case Mips::NMSUB_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (fsub fpimm0, (null_frag (fmul FGR32Opnd:$fs, FGR32Opnd:$ft), FGR32Opnd:$fr)))]";
	break;
case Mips::NOP:
	dbgs() << "[]";
	break;
case Mips::NOR:
	dbgs() << "[(set GPR32Opnd:$rd, (not (or GPR32Opnd:$rs, GPR32Opnd:$rt)))]";
	break;
case Mips::NOR64:
	dbgs() << "[(set GPR64Opnd:$rd, (not (or GPR64Opnd:$rs, GPR64Opnd:$rt)))]";
	break;
case Mips::NORI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsVNOR MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
	break;
case Mips::NORImm:
	dbgs() << "[]";
	break;
case Mips::NORImm64:
	dbgs() << "[]";
	break;
case Mips::NOR_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (not (or GPR32Opnd:$rs, GPR32Opnd:$rt)))]";
	break;
case Mips::NOR_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (not (or GPR32Opnd:$rs, GPR32Opnd:$rt)))]";
	break;
case Mips::NOR_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsVNOR MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::NOR_V_D_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsVNOR MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::NOR_V_H_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsVNOR MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::NOR_V_W_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsVNOR MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::NOT16_MM:
	dbgs() << "[(set GPRMM16Opnd:$rt, (not GPRMM16Opnd:$rs))]";
	break;
case Mips::NOT16_MMR6:
	dbgs() << "[(set GPRMM16Opnd:$rt, (not GPRMM16Opnd:$rs))]";
	break;
case Mips::NegRxRy16:
	dbgs() << "[]";
	break;
case Mips::NotRxRy16:
	dbgs() << "[]";
	break;
case Mips::OR:
	dbgs() << "[(set GPR32Opnd:$rd, (or GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::OR16_MM:
	dbgs() << "[(set GPRMM16Opnd:$dst, (or GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::OR16_MMR6:
	dbgs() << "[(set GPRMM16Opnd:$dst, (null_frag GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::OR64:
	dbgs() << "[(set GPR64Opnd:$rd, (or GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::ORI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (or MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
	break;
case Mips::ORI_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (or GPR32Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::OR_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (or GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::OR_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (or GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::OR_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (or MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::OR_V_D_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (or MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::OR_V_H_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (or MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::OR_V_W_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (or MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::ORi:
	dbgs() << "[(set GPR32Opnd:$rt, (or GPR32Opnd:$rs, imm32ZExt16:$imm16))]";
	break;
case Mips::ORi64:
	dbgs() << "[(set GPR64Opnd:$rt, (or GPR64Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::ORi_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (or GPR32Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::OrRxRxRy16:
	dbgs() << "[]";
	break;
case Mips::PACKRL_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_packrl_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PACKRL_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_packrl_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PATCHABLE_EVENT_CALL:

	break;
case Mips::PATCHABLE_FUNCTION_ENTER:

	break;
case Mips::PATCHABLE_FUNCTION_EXIT:

	break;
case Mips::PATCHABLE_OP:

	break;
case Mips::PATCHABLE_RET:

	break;
case Mips::PATCHABLE_TAIL_CALL:

	break;
case Mips::PATCHABLE_TYPED_EVENT_CALL:

	break;
case Mips::PATCHPOINT:

	break;
case Mips::PAUSE:
	dbgs() << "[]";
	break;
case Mips::PAUSE_MM:
	dbgs() << "[]";
	break;
case Mips::PAUSE_MMR6:
	dbgs() << "[]";
	break;
case Mips::PCKEV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsPCKEV MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::PCKEV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsPCKEV MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::PCKEV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsPCKEV MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::PCKEV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsPCKEV MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::PCKOD_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsPCKOD MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::PCKOD_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsPCKOD MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::PCKOD_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsPCKOD MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::PCKOD_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsPCKOD MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::PCNT_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (ctpop MSA128BOpnd:$ws))]";
	break;
case Mips::PCNT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (ctpop MSA128DOpnd:$ws))]";
	break;
case Mips::PCNT_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (ctpop MSA128HOpnd:$ws))]";
	break;
case Mips::PCNT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (ctpop MSA128WOpnd:$ws))]";
	break;
case Mips::PHI:

	break;
case Mips::PICK_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PICK_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PICK_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PICK_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_pick_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PLL_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::PLU_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::POP:
	dbgs() << "[(set GPR32Opnd:$rd, (ctpop GPR32Opnd:$rs))]";
	break;
case Mips::PREALLOCATED_ARG:

	break;
case Mips::PREALLOCATED_SETUP:

	break;
case Mips::PRECEQU_PH_QBL:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbl DSPROpnd:$rt))]";
	break;
case Mips::PRECEQU_PH_QBLA:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbla DSPROpnd:$rt))]";
	break;
case Mips::PRECEQU_PH_QBLA_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbla DSPROpnd:$rs))]";
	break;
case Mips::PRECEQU_PH_QBL_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbl DSPROpnd:$rs))]";
	break;
case Mips::PRECEQU_PH_QBR:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbr DSPROpnd:$rt))]";
	break;
case Mips::PRECEQU_PH_QBRA:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precequ_ph_qbra DSPROpnd:$rt))]";
	break;
case Mips::PRECEQU_PH_QBRA_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbra DSPROpnd:$rs))]";
	break;
case Mips::PRECEQU_PH_QBR_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precequ_ph_qbr DSPROpnd:$rs))]";
	break;
case Mips::PRECEQ_W_PHL:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_preceq_w_phl DSPROpnd:$rt))]";
	break;
case Mips::PRECEQ_W_PHL_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_preceq_w_phl DSPROpnd:$rs))]";
	break;
case Mips::PRECEQ_W_PHR:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_preceq_w_phr DSPROpnd:$rt))]";
	break;
case Mips::PRECEQ_W_PHR_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_preceq_w_phr DSPROpnd:$rs))]";
	break;
case Mips::PRECEU_PH_QBL:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbl DSPROpnd:$rt))]";
	break;
case Mips::PRECEU_PH_QBLA:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbla DSPROpnd:$rt))]";
	break;
case Mips::PRECEU_PH_QBLA_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbla DSPROpnd:$rs))]";
	break;
case Mips::PRECEU_PH_QBL_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbl DSPROpnd:$rs))]";
	break;
case Mips::PRECEU_PH_QBR:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbr DSPROpnd:$rt))]";
	break;
case Mips::PRECEU_PH_QBRA:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_preceu_ph_qbra DSPROpnd:$rt))]";
	break;
case Mips::PRECEU_PH_QBRA_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbra DSPROpnd:$rs))]";
	break;
case Mips::PRECEU_PH_QBR_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_preceu_ph_qbr DSPROpnd:$rs))]";
	break;
case Mips::PRECRQU_S_QB_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrqu_s_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PRECRQU_S_QB_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrqu_s_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PRECRQ_PH_W:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PRECRQ_PH_W_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PRECRQ_QB_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PRECRQ_QB_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PRECRQ_RS_PH_W:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_rs_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PRECRQ_RS_PH_W_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precrq_rs_ph_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PRECR_QB_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precr_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PRECR_QB_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_precr_qb_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::PRECR_SRA_PH_W:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::PRECR_SRA_PH_W_MMR2:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::PRECR_SRA_R_PH_W:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_r_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::PRECR_SRA_R_PH_W_MMR2:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_precr_sra_r_ph_w GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::PREF:
	dbgs() << "[]";
	break;
case Mips::PREFE:
	dbgs() << "[]";
	break;
case Mips::PREFE_MM:
	dbgs() << "[]";
	break;
case Mips::PREFX_MM:
	dbgs() << "[]";
	break;
case Mips::PREF_MM:
	dbgs() << "[]";
	break;
case Mips::PREF_MMR6:
	dbgs() << "[]";
	break;
case Mips::PREF_R6:
	dbgs() << "[]";
	break;
case Mips::PREPEND:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_prepend GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::PREPEND_MMR2:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_prepend GPR32Opnd:$src, GPR32Opnd:$rs, timmZExt5:$sa))]";
	break;
case Mips::PUL_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::PUU_PS64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs, FGR64Opnd:$ft))]";
	break;
case Mips::PseudoCMPU_EQ_QB:
	dbgs() << "[]";
	break;
case Mips::PseudoCMPU_LE_QB:
	dbgs() << "[]";
	break;
case Mips::PseudoCMPU_LT_QB:
	dbgs() << "[]";
	break;
case Mips::PseudoCMP_EQ_PH:
	dbgs() << "[]";
	break;
case Mips::PseudoCMP_LE_PH:
	dbgs() << "[]";
	break;
case Mips::PseudoCMP_LT_PH:
	dbgs() << "[]";
	break;
case Mips::PseudoCVT_D32_W:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag GPR32Opnd:$fs))]";
	break;
case Mips::PseudoCVT_D64_L:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag GPR64Opnd:$fs))]";
	break;
case Mips::PseudoCVT_D64_W:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag GPR32Opnd:$fs))]";
	break;
case Mips::PseudoCVT_S_L:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag GPR64Opnd:$fs))]";
	break;
case Mips::PseudoCVT_S_W:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag GPR32Opnd:$fs))]";
	break;
case Mips::PseudoDMULT:
	dbgs() << "[(set ACC128:$ac, (MipsMult GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::PseudoDMULTu:
	dbgs() << "[(set ACC128:$ac, (MipsMultu GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::PseudoDSDIV:
	dbgs() << "[(set ACC128:$ac, (MipsDivRem GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::PseudoDUDIV:
	dbgs() << "[(set ACC128:$ac, (MipsDivRemU GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::PseudoD_SELECT_I:
	dbgs() << "[]";
	break;
case Mips::PseudoD_SELECT_I64:
	dbgs() << "[]";
	break;
case Mips::PseudoIndirectBranch:
	dbgs() << "[(brind GPR32Opnd:$rs)]";
	break;
case Mips::PseudoIndirectBranch64:
	dbgs() << "[(brind GPR64Opnd:$rs)]";
	break;
case Mips::PseudoIndirectBranch64R6:
	dbgs() << "[(brind GPR64Opnd:$rs)]";
	break;
case Mips::PseudoIndirectBranchR6:
	dbgs() << "[(brind GPR32Opnd:$rs)]";
	break;
case Mips::PseudoIndirectBranch_MM:
	dbgs() << "[(brind GPR32Opnd:$rs)]";
	break;
case Mips::PseudoIndirectBranch_MMR6:
	dbgs() << "[(brind GPR32Opnd:$rs)]";
	break;
case Mips::PseudoIndirectHazardBranch:
	dbgs() << "[(brind GPR32Opnd:$rs)]";
	break;
case Mips::PseudoIndirectHazardBranch64:
	dbgs() << "[(brind GPR64Opnd:$rs)]";
	break;
case Mips::PseudoIndrectHazardBranch64R6:
	dbgs() << "[(brind GPR64Opnd:$rs)]";
	break;
case Mips::PseudoIndrectHazardBranchR6:
	dbgs() << "[(brind GPR32Opnd:$rs)]";
	break;
case Mips::PseudoMADD:
	dbgs() << "[(set ACC64:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMADDU:
	dbgs() << "[(set ACC64:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMADDU_MM:
	dbgs() << "[(set ACC64:$ac, (MipsMAddu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMADD_MM:
	dbgs() << "[(set ACC64:$ac, (MipsMAdd GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMFHI:
	dbgs() << "[(set GPR32:$rd, (MipsMFHI ACC64:$hilo))]";
	break;
case Mips::PseudoMFHI64:
	dbgs() << "[(set GPR64:$rd, (MipsMFHI ACC128:$hilo))]";
	break;
case Mips::PseudoMFHI_MM:
	dbgs() << "[(set GPR32:$rd, (MipsMFHI ACC64:$hilo))]";
	break;
case Mips::PseudoMFLO:
	dbgs() << "[(set GPR32:$rd, (MipsMFLO ACC64:$hilo))]";
	break;
case Mips::PseudoMFLO64:
	dbgs() << "[(set GPR64:$rd, (MipsMFLO ACC128:$hilo))]";
	break;
case Mips::PseudoMFLO_MM:
	dbgs() << "[(set GPR32:$rd, (MipsMFLO ACC64:$hilo))]";
	break;
case Mips::PseudoMSUB:
	dbgs() << "[(set ACC64:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMSUBU:
	dbgs() << "[(set ACC64:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMSUBU_MM:
	dbgs() << "[(set ACC64:$ac, (MipsMSubu GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMSUB_MM:
	dbgs() << "[(set ACC64:$ac, (MipsMSub GPR32Opnd:$rs, GPR32Opnd:$rt, ACC64:$acin))]";
	break;
case Mips::PseudoMTLOHI:
	dbgs() << "[(set ACC64:$lohi, (MipsMTLOHI GPR32:$lo, GPR32:$hi))]";
	break;
case Mips::PseudoMTLOHI64:
	dbgs() << "[(set ACC128:$lohi, (MipsMTLOHI GPR64:$lo, GPR64:$hi))]";
	break;
case Mips::PseudoMTLOHI_DSP:
	dbgs() << "[(set ACC64DSP:$lohi, (MipsMTLOHI GPR32:$lo, GPR32:$hi))]";
	break;
case Mips::PseudoMTLOHI_MM:
	dbgs() << "[(set ACC64:$lohi, (MipsMTLOHI GPR32:$lo, GPR32:$hi))]";
	break;
case Mips::PseudoMULT:
	dbgs() << "[(set ACC64:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PseudoMULT_MM:
	dbgs() << "[(set ACC64:$ac, (MipsMult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PseudoMULTu:
	dbgs() << "[(set ACC64:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PseudoMULTu_MM:
	dbgs() << "[(set ACC64:$ac, (MipsMultu GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PseudoPICK_PH:
	dbgs() << "[]";
	break;
case Mips::PseudoPICK_QB:
	dbgs() << "[]";
	break;
case Mips::PseudoReturn:
	dbgs() << "[]";
	break;
case Mips::PseudoReturn64:
	dbgs() << "[]";
	break;
case Mips::PseudoSDIV:
	dbgs() << "[(set ACC64:$ac, (MipsDivRem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::PseudoSELECTFP_F_D32:
	dbgs() << "[(set AFGR64Opnd:$dst, (MipsCMovFP_F AFGR64Opnd:$T, FCCRegsOpnd:$cond, AFGR64Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_F_D64:
	dbgs() << "[(set FGR64Opnd:$dst, (MipsCMovFP_F FGR64Opnd:$T, FCCRegsOpnd:$cond, FGR64Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_F_I:
	dbgs() << "[(set GPR32Opnd:$dst, (MipsCMovFP_F GPR32Opnd:$T, FCCRegsOpnd:$cond, GPR32Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_F_I64:
	dbgs() << "[(set GPR64Opnd:$dst, (MipsCMovFP_F GPR64Opnd:$T, FCCRegsOpnd:$cond, GPR64Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_F_S:
	dbgs() << "[(set FGR32Opnd:$dst, (MipsCMovFP_F FGR32Opnd:$T, FCCRegsOpnd:$cond, FGR32Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_T_D32:
	dbgs() << "[(set AFGR64Opnd:$dst, (MipsCMovFP_T AFGR64Opnd:$T, FCCRegsOpnd:$cond, AFGR64Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_T_D64:
	dbgs() << "[(set FGR64Opnd:$dst, (MipsCMovFP_T FGR64Opnd:$T, FCCRegsOpnd:$cond, FGR64Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_T_I:
	dbgs() << "[(set GPR32Opnd:$dst, (MipsCMovFP_T GPR32Opnd:$T, FCCRegsOpnd:$cond, GPR32Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_T_I64:
	dbgs() << "[(set GPR64Opnd:$dst, (MipsCMovFP_T GPR64Opnd:$T, FCCRegsOpnd:$cond, GPR64Opnd:$F))]";
	break;
case Mips::PseudoSELECTFP_T_S:
	dbgs() << "[(set FGR32Opnd:$dst, (MipsCMovFP_T FGR32Opnd:$T, FCCRegsOpnd:$cond, FGR32Opnd:$F))]";
	break;
case Mips::PseudoSELECT_D32:
	dbgs() << "[(set AFGR64Opnd:$dst, (select GPR32Opnd:$cond, AFGR64Opnd:$T, AFGR64Opnd:$F))]";
	break;
case Mips::PseudoSELECT_D64:
	dbgs() << "[(set FGR64Opnd:$dst, (select GPR32Opnd:$cond, FGR64Opnd:$T, FGR64Opnd:$F))]";
	break;
case Mips::PseudoSELECT_I:
	dbgs() << "[(set GPR32Opnd:$dst, (select GPR32Opnd:$cond, GPR32Opnd:$T, GPR32Opnd:$F))]";
	break;
case Mips::PseudoSELECT_I64:
	dbgs() << "[(set GPR64Opnd:$dst, (select GPR32Opnd:$cond, GPR64Opnd:$T, GPR64Opnd:$F))]";
	break;
case Mips::PseudoSELECT_S:
	dbgs() << "[(set FGR32Opnd:$dst, (select GPR32Opnd:$cond, FGR32Opnd:$T, FGR32Opnd:$F))]";
	break;
case Mips::PseudoTRUNC_W_D:
	dbgs() << "[]";
	break;
case Mips::PseudoTRUNC_W_D32:
	dbgs() << "[]";
	break;
case Mips::PseudoTRUNC_W_S:
	dbgs() << "[]";
	break;
case Mips::PseudoUDIV:
	dbgs() << "[(set ACC64:$ac, (MipsDivRemU GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::RADDU_W_QB:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_raddu_w_qb DSPROpnd:$rs))]";
	break;
case Mips::RADDU_W_QB_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_raddu_w_qb DSPROpnd:$rs))]";
	break;
case Mips::RDDSP:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_rddsp timmZExt10:$mask))]";
	break;
case Mips::RDDSP_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_rddsp timmZExt7:$mask))]";
	break;
case Mips::RDHWR:
	dbgs() << "[]";
	break;
case Mips::RDHWR64:
	dbgs() << "[]";
	break;
case Mips::RDHWR_MM:
	dbgs() << "[]";
	break;
case Mips::RDHWR_MMR6:
	dbgs() << "[]";
	break;
case Mips::RDPGPR_MMR6:
	dbgs() << "[]";
	break;
case Mips::RECIP_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::RECIP_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::RECIP_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::RECIP_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::RECIP_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::RECIP_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::REG_SEQUENCE:

	break;
case Mips::REPLV_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_ph GPR32Opnd:$rt))]";
	break;
case Mips::REPLV_PH_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_repl_ph GPR32Opnd:$rs))]";
	break;
case Mips::REPLV_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_qb GPR32Opnd:$rt))]";
	break;
case Mips::REPLV_QB_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_repl_qb GPR32Opnd:$rs))]";
	break;
case Mips::REPL_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_ph immSExt10:$imm))]";
	break;
case Mips::REPL_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_ph immSExt10:$imm))]";
	break;
case Mips::REPL_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_repl_qb immZExt8:$imm))]";
	break;
case Mips::REPL_QB_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_repl_qb immZExt8:$imm))]";
	break;
case Mips::RINT_D:
	dbgs() << "[]";
	break;
case Mips::RINT_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::RINT_S:
	dbgs() << "[]";
	break;
case Mips::RINT_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::ROL:
	dbgs() << "[]";
	break;
case Mips::ROLImm:
	dbgs() << "[]";
	break;
case Mips::ROR:
	dbgs() << "[]";
	break;
case Mips::RORImm:
	dbgs() << "[]";
	break;
case Mips::ROTR:
	dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, immZExt5:$shamt))]";
	break;
case Mips::ROTRV:
	dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::ROTRV_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::ROTR_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (rotr GPR32Opnd:$rt, immZExt5:$shamt))]";
	break;
case Mips::ROUND_L_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::ROUND_L_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::ROUND_L_S:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::ROUND_L_S_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::ROUND_W_D32:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::ROUND_W_D64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::ROUND_W_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::ROUND_W_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::ROUND_W_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::ROUND_W_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::ROUND_W_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::RSQRT_D32:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::RSQRT_D32_MM:
	dbgs() << "[(set AFGR64Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::RSQRT_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::RSQRT_D64_MM:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::RSQRT_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::RSQRT_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::Restore16:
	dbgs() << "[]";
	break;
case Mips::RestoreX16:
	dbgs() << "[]";
	break;
case Mips::RetRA:
	dbgs() << "[(MipsRet)]";
	break;
case Mips::RetRA16:
	dbgs() << "[(MipsRet)]";
	break;
case Mips::SAA:
	dbgs() << "[]";
	break;
case Mips::SAAD:
	dbgs() << "[]";
	break;
case Mips::SAT_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sat_s_b MSA128BOpnd:$ws, timmZExt3:$m))]";
	break;
case Mips::SAT_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sat_s_d MSA128DOpnd:$ws, timmZExt6:$m))]";
	break;
case Mips::SAT_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sat_s_h MSA128HOpnd:$ws, timmZExt4:$m))]";
	break;
case Mips::SAT_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sat_s_w MSA128WOpnd:$ws, timmZExt5:$m))]";
	break;
case Mips::SAT_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sat_u_b MSA128BOpnd:$ws, timmZExt3:$m))]";
	break;
case Mips::SAT_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sat_u_d MSA128DOpnd:$ws, timmZExt6:$m))]";
	break;
case Mips::SAT_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sat_u_h MSA128HOpnd:$ws, timmZExt4:$m))]";
	break;
case Mips::SAT_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sat_u_w MSA128WOpnd:$ws, timmZExt5:$m))]";
	break;
case Mips::SB:
	dbgs() << "[(truncstorei8 GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SB16_MM:
	dbgs() << "[]";
	break;
case Mips::SB16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SB64:
	dbgs() << "[(truncstorei8 GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SBE:
	dbgs() << "[]";
	break;
case Mips::SBE_MM:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SB_MM:
	dbgs() << "[(truncstorei8 GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SB_MMR6:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SC:
	dbgs() << "[]";
	break;
case Mips::SC64:
	dbgs() << "[]";
	break;
case Mips::SC64_R6:
	dbgs() << "[]";
	break;
case Mips::SCD:
	dbgs() << "[]";
	break;
case Mips::SCD_R6:
	dbgs() << "[]";
	break;
case Mips::SCE:
	dbgs() << "[]";
	break;
case Mips::SCE_MM:
	dbgs() << "[]";
	break;
case Mips::SC_MM:
	dbgs() << "[]";
	break;
case Mips::SC_MMR6:
	dbgs() << "[]";
	break;
case Mips::SC_R6:
	dbgs() << "[]";
	break;
case Mips::SD:
	dbgs() << "[(store GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SDBBP:
	dbgs() << "[]";
	break;
case Mips::SDBBP16_MM:
	dbgs() << "[]";
	break;
case Mips::SDBBP16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SDBBP_MM:
	dbgs() << "[]";
	break;
case Mips::SDBBP_MMR6:
	dbgs() << "[]";
	break;
case Mips::SDBBP_R6:
	dbgs() << "[]";
	break;
case Mips::SDC1:
	dbgs() << "[(store AFGR64Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SDC164:
	dbgs() << "[(store FGR64Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SDC1_D64_MMR6:
	dbgs() << "[(store FGR64Opnd:$ft, addrimm16:$addr)]";
	break;
case Mips::SDC1_M1:
	dbgs() << "[]";
	break;
case Mips::SDC1_MM:
	dbgs() << "[(store AFGR64Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SDC2:
	dbgs() << "[(store COP2Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SDC2_MMR6:
	dbgs() << "[(store COP2Opnd:$rt, addrimm11:$addr)]";
	break;
case Mips::SDC2_R6:
	dbgs() << "[]";
	break;
case Mips::SDC3:
	dbgs() << "[(store COP3Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SDIV:
	dbgs() << "[]";
	break;
case Mips::SDIV_MM:
	dbgs() << "[]";
	break;
case Mips::SDIV_MM_Pseudo:
	dbgs() << "[(set ACC64:$ac, (MipsDivRem GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SDL:
	dbgs() << "[(MipsSDL GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SDMacro:
	dbgs() << "[]";
	break;
case Mips::SDR:
	dbgs() << "[(MipsSDR GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SDXC1:
	dbgs() << "[(store AFGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SDXC164:
	dbgs() << "[(store FGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SDivIMacro:
	dbgs() << "[]";
	break;
case Mips::SDivMacro:
	dbgs() << "[]";
	break;
case Mips::SEB:
	dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i8))]";
	break;
case Mips::SEB64:
	dbgs() << "[(set GPR64Opnd:$rd, (sext_inreg GPR64Opnd:$rt, i8))]";
	break;
case Mips::SEB_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i8))]";
	break;
case Mips::SEH:
	dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i16))]";
	break;
case Mips::SEH64:
	dbgs() << "[(set GPR64Opnd:$rd, (sext_inreg GPR64Opnd:$rt, i16))]";
	break;
case Mips::SEH_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (sext_inreg GPR32Opnd:$rt, i16))]";
	break;
case Mips::SELEQZ:
	dbgs() << "[]";
	break;
case Mips::SELEQZ64:
	dbgs() << "[]";
	break;
case Mips::SELEQZ_D:
	dbgs() << "[]";
	break;
case Mips::SELEQZ_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::SELEQZ_MMR6:
	dbgs() << "[]";
	break;
case Mips::SELEQZ_S:
	dbgs() << "[]";
	break;
case Mips::SELEQZ_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::SELNEZ:
	dbgs() << "[]";
	break;
case Mips::SELNEZ64:
	dbgs() << "[]";
	break;
case Mips::SELNEZ_D:
	dbgs() << "[]";
	break;
case Mips::SELNEZ_D_MMR6:
	dbgs() << "[]";
	break;
case Mips::SELNEZ_MMR6:
	dbgs() << "[]";
	break;
case Mips::SELNEZ_S:
	dbgs() << "[]";
	break;
case Mips::SELNEZ_S_MMR6:
	dbgs() << "[]";
	break;
case Mips::SEL_D:
	dbgs() << "[(set FGR64Opnd:$fd, (MipsFSelect FGR64Opnd:$fd_in, FGR64Opnd:$ft, FGR64Opnd:$fs))]";
	break;
case Mips::SEL_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$fd, (MipsFSelect FGR64Opnd:$fd_in, FGR64Opnd:$ft, FGR64Opnd:$fs))]";
	break;
case Mips::SEL_S:
	dbgs() << "[(set FGR32Opnd:$fd, (select FGRCCOpnd:$fd_in, FGR32Opnd:$ft, FGR32Opnd:$fs))]";
	break;
case Mips::SEL_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$fd, (select FGRCCOpnd:$fd_in, FGR32Opnd:$ft, FGR32Opnd:$fs))]";
	break;
case Mips::SEQ:
	dbgs() << "[(set GPR64Opnd:$rd, (zext (seteq GPR64Opnd:$rs, GPR64Opnd:$rt)))]";
	break;
case Mips::SEQIMacro:
	dbgs() << "[]";
	break;
case Mips::SEQMacro:
	dbgs() << "[]";
	break;
case Mips::SEQi:
	dbgs() << "[(set GPR64Opnd:$rt, (zext (seteq GPR64Opnd:$rs, immSExt10_64:$imm10)))]";
	break;
case Mips::SGE:
	dbgs() << "[]";
	break;
case Mips::SGEImm:
	dbgs() << "[]";
	break;
case Mips::SGEImm64:
	dbgs() << "[]";
	break;
case Mips::SGEU:
	dbgs() << "[]";
	break;
case Mips::SGEUImm:
	dbgs() << "[]";
	break;
case Mips::SGEUImm64:
	dbgs() << "[]";
	break;
case Mips::SGTImm:
	dbgs() << "[]";
	break;
case Mips::SGTImm64:
	dbgs() << "[]";
	break;
case Mips::SGTUImm:
	dbgs() << "[]";
	break;
case Mips::SGTUImm64:
	dbgs() << "[]";
	break;
case Mips::SH:
	dbgs() << "[(truncstorei16 GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SH16_MM:
	dbgs() << "[]";
	break;
case Mips::SH16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SH64:
	dbgs() << "[(truncstorei16 GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SHE:
	dbgs() << "[]";
	break;
case Mips::SHE_MM:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SHF_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsSHF timmZExt8:$u8, MSA128BOpnd:$ws))]";
	break;
case Mips::SHF_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsSHF timmZExt8:$u8, MSA128HOpnd:$ws))]";
	break;
case Mips::SHF_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsSHF timmZExt8:$u8, MSA128WOpnd:$ws))]";
	break;
case Mips::SHILO:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO immSExt6:$shift, ACC64DSPOpnd:$acin))]";
	break;
case Mips::SHILOV:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
	break;
case Mips::SHILOV_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO GPR32Opnd:$rs, ACC64DSPOpnd:$acin))]";
	break;
case Mips::SHILO_MM:
	dbgs() << "[(set ACC64DSPOpnd:$ac, (MipsSHILO immSExt6:$shift, ACC64DSPOpnd:$acin))]";
	break;
case Mips::SHLLV_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHLLV_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHLLV_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHLLV_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHLLV_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_s_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHLLV_S_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_s_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHLLV_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shll_s_w GPR32Opnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHLLV_S_W_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shll_s_w GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHLL_PH:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt4:$rs_sa))]";
	break;
case Mips::SHLL_PH_MM:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt4:$sa))]";
	break;
case Mips::SHLL_QB:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt3:$rs_sa))]";
	break;
case Mips::SHLL_QB_MM:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt3:$sa))]";
	break;
case Mips::SHLL_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shll_s_ph DSPROpnd:$rt, immZExt4:$rs_sa))]";
	break;
case Mips::SHLL_S_PH_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_shll_s_ph DSPROpnd:$rs, immZExt4:$sa))]";
	break;
case Mips::SHLL_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shll_s_w GPR32Opnd:$rt, immZExt5:$rs_sa))]";
	break;
case Mips::SHLL_S_W_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_shll_s_w GPR32Opnd:$rs, immZExt5:$sa))]";
	break;
case Mips::SHRAV_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRAV_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRAV_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRAV_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRAV_R_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRAV_R_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRAV_R_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRAV_R_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRAV_R_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shra_r_w GPR32Opnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRAV_R_W_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shra_r_w GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRA_PH:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt4:$rs_sa))]";
	break;
case Mips::SHRA_PH_MM:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt4:$sa))]";
	break;
case Mips::SHRA_QB:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt3:$rs_sa))]";
	break;
case Mips::SHRA_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt3:$sa))]";
	break;
case Mips::SHRA_R_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_ph DSPROpnd:$rt, immZExt4:$rs_sa))]";
	break;
case Mips::SHRA_R_PH_MM:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_shra_r_ph DSPROpnd:$rs, immZExt4:$sa))]";
	break;
case Mips::SHRA_R_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shra_r_qb DSPROpnd:$rt, immZExt3:$rs_sa))]";
	break;
case Mips::SHRA_R_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rt, (int_mips_shra_r_qb DSPROpnd:$rs, immZExt3:$sa))]";
	break;
case Mips::SHRA_R_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_shra_r_w GPR32Opnd:$rt, immZExt5:$rs_sa))]";
	break;
case Mips::SHRA_R_W_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (int_mips_shra_r_w GPR32Opnd:$rs, immZExt5:$sa))]";
	break;
case Mips::SHRLV_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_ph DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRLV_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_ph DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRLV_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_qb DSPROpnd:$rt, GPR32Opnd:$rs_sa))]";
	break;
case Mips::SHRLV_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_shrl_qb DSPROpnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SHRL_PH:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt4:$rs_sa))]";
	break;
case Mips::SHRL_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt4:$sa))]";
	break;
case Mips::SHRL_QB:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rt, immZExt3:$rs_sa))]";
	break;
case Mips::SHRL_QB_MM:
	dbgs() << "[(set DSPROpnd:$rt, (null_frag DSPROpnd:$rs, immZExt3:$sa))]";
	break;
case Mips::SH_MM:
	dbgs() << "[(truncstorei16 GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SH_MMR6:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SIGRIE:
	dbgs() << "[]";
	break;
case Mips::SIGRIE_MMR6:
	dbgs() << "[]";
	break;
case Mips::SLDI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sldi_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, timmZExt4:$n))]";
	break;
case Mips::SLDI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sldi_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, timmZExt1:$n))]";
	break;
case Mips::SLDI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sldi_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, timmZExt3:$n))]";
	break;
case Mips::SLDI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sldi_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, timmZExt2:$n))]";
	break;
case Mips::SLD_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_sld_b MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SLD_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_sld_d MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SLD_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_sld_h MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SLD_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_sld_w MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SLE:
	dbgs() << "[]";
	break;
case Mips::SLEImm:
	dbgs() << "[]";
	break;
case Mips::SLEImm64:
	dbgs() << "[]";
	break;
case Mips::SLEU:
	dbgs() << "[]";
	break;
case Mips::SLEUImm:
	dbgs() << "[]";
	break;
case Mips::SLEUImm64:
	dbgs() << "[]";
	break;
case Mips::SLL:
	dbgs() << "[(set GPR32Opnd:$rd, (shl GPR32Opnd:$rt, immZExt5:$shamt))]";
	break;
case Mips::SLL16_MM:
	dbgs() << "[]";
	break;
case Mips::SLL16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SLL64_32:
	dbgs() << "[]";
	break;
case Mips::SLL64_64:
	dbgs() << "[]";
	break;
case Mips::SLLI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (shl MSA128BOpnd:$ws, vsplati8_uimm3:$m))]";
	break;
case Mips::SLLI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (shl MSA128DOpnd:$ws, vsplati64_uimm6:$m))]";
	break;
case Mips::SLLI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (shl MSA128HOpnd:$ws, vsplati16_uimm4:$m))]";
	break;
case Mips::SLLI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (shl MSA128WOpnd:$ws, vsplati32_uimm5:$m))]";
	break;
case Mips::SLLV:
	dbgs() << "[(set GPR32Opnd:$rd, (shl GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SLLV_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SLL_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (shl MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SLL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (shl MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SLL_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (shl MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SLL_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::SLL_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::SLL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (shl MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SLT:
	dbgs() << "[(set GPR32Opnd:$rd, (setlt GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SLT64:
	dbgs() << "[(set GPR32Opnd:$rd, (setlt GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::SLTImm64:
	dbgs() << "[]";
	break;
case Mips::SLTUImm64:
	dbgs() << "[]";
	break;
case Mips::SLT_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (setlt GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SLTi:
	dbgs() << "[(set GPR32Opnd:$rt, (setlt GPR32Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::SLTi64:
	dbgs() << "[(set GPR32Opnd:$rt, (setlt GPR64Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::SLTi_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (setlt GPR32Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::SLTiu:
	dbgs() << "[(set GPR32Opnd:$rt, (setult GPR32Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::SLTiu64:
	dbgs() << "[(set GPR32Opnd:$rt, (setult GPR64Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::SLTiu_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (setult GPR32Opnd:$rs, immSExt16:$imm16))]";
	break;
case Mips::SLTu:
	dbgs() << "[(set GPR32Opnd:$rd, (setult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SLTu64:
	dbgs() << "[(set GPR32Opnd:$rd, (setult GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::SLTu_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (setult GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SNE:
	dbgs() << "[(set GPR64Opnd:$rd, (zext (setne GPR64Opnd:$rs, GPR64Opnd:$rt)))]";
	break;
case Mips::SNEIMacro:
	dbgs() << "[]";
	break;
case Mips::SNEMacro:
	dbgs() << "[]";
	break;
case Mips::SNEi:
	dbgs() << "[(set GPR64Opnd:$rt, (zext (setne GPR64Opnd:$rs, immSExt10_64:$imm10)))]";
	break;
case Mips::SNZ_B_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v16i8 MSA128B:$ws)))]";
	break;
case Mips::SNZ_D_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v2i64 MSA128D:$ws)))]";
	break;
case Mips::SNZ_H_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v8i16 MSA128H:$ws)))]";
	break;
case Mips::SNZ_V_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAnyNonZero (v16i8 MSA128B:$ws)))]";
	break;
case Mips::SNZ_W_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllNonZero (v4i32 MSA128W:$ws)))]";
	break;
case Mips::SPLATI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsVSHF vsplati8_uimm4:$n, MSA128BOpnd:$ws, MSA128BOpnd:$ws))]";
	break;
case Mips::SPLATI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsVSHF vsplati64_uimm1:$n, MSA128DOpnd:$ws, MSA128DOpnd:$ws))]";
	break;
case Mips::SPLATI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsVSHF vsplati16_uimm3:$n, MSA128HOpnd:$ws, MSA128HOpnd:$ws))]";
	break;
case Mips::SPLATI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsVSHF vsplati32_uimm2:$n, MSA128WOpnd:$ws, MSA128WOpnd:$ws))]";
	break;
case Mips::SPLAT_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (vsplati8_elt MSA128BOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SPLAT_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (vsplati64_elt MSA128DOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SPLAT_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (vsplati16_elt MSA128HOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SPLAT_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (vsplati32_elt MSA128WOpnd:$ws, GPR32Opnd:$rt))]";
	break;
case Mips::SRA:
	dbgs() << "[(set GPR32Opnd:$rd, (sra GPR32Opnd:$rt, immZExt5:$shamt))]";
	break;
case Mips::SRAI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (sra MSA128BOpnd:$ws, vsplati8_uimm3:$m))]";
	break;
case Mips::SRAI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (sra MSA128DOpnd:$ws, vsplati64_uimm6:$m))]";
	break;
case Mips::SRAI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (sra MSA128HOpnd:$ws, vsplati16_uimm4:$m))]";
	break;
case Mips::SRAI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (sra MSA128WOpnd:$ws, vsplati32_uimm5:$m))]";
	break;
case Mips::SRARI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srari_b MSA128BOpnd:$ws, timmZExt3:$m))]";
	break;
case Mips::SRARI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srari_d MSA128DOpnd:$ws, timmZExt6:$m))]";
	break;
case Mips::SRARI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srari_h MSA128HOpnd:$ws, timmZExt4:$m))]";
	break;
case Mips::SRARI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srari_w MSA128WOpnd:$ws, timmZExt5:$m))]";
	break;
case Mips::SRAR_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srar_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SRAR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srar_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SRAR_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srar_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SRAR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srar_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SRAV:
	dbgs() << "[(set GPR32Opnd:$rd, (sra GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SRAV_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SRA_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (sra MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SRA_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (sra MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SRA_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (sra MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SRA_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::SRA_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (sra MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SRL:
	dbgs() << "[(set GPR32Opnd:$rd, (srl GPR32Opnd:$rt, immZExt5:$shamt))]";
	break;
case Mips::SRL16_MM:
	dbgs() << "[]";
	break;
case Mips::SRL16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SRLI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (srl MSA128BOpnd:$ws, vsplati8_uimm3:$m))]";
	break;
case Mips::SRLI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (srl MSA128DOpnd:$ws, vsplati64_uimm6:$m))]";
	break;
case Mips::SRLI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (srl MSA128HOpnd:$ws, vsplati16_uimm4:$m))]";
	break;
case Mips::SRLI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (srl MSA128WOpnd:$ws, vsplati32_uimm5:$m))]";
	break;
case Mips::SRLRI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srlri_b MSA128BOpnd:$ws, timmZExt3:$m))]";
	break;
case Mips::SRLRI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srlri_d MSA128DOpnd:$ws, timmZExt6:$m))]";
	break;
case Mips::SRLRI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srlri_h MSA128HOpnd:$ws, timmZExt4:$m))]";
	break;
case Mips::SRLRI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srlri_w MSA128WOpnd:$ws, timmZExt5:$m))]";
	break;
case Mips::SRLR_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_srlr_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SRLR_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_srlr_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SRLR_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_srlr_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SRLR_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_srlr_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SRLV:
	dbgs() << "[(set GPR32Opnd:$rd, (srl GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SRLV_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, GPR32Opnd:$rs))]";
	break;
case Mips::SRL_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (srl MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SRL_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (srl MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SRL_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (srl MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SRL_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rt, null_frag:$shamt))]";
	break;
case Mips::SRL_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (srl MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SRemIMacro:
	dbgs() << "[]";
	break;
case Mips::SRemMacro:
	dbgs() << "[]";
	break;
case Mips::SSNOP:
	dbgs() << "[]";
	break;
case Mips::SSNOP_MM:
	dbgs() << "[]";
	break;
case Mips::SSNOP_MMR6:
	dbgs() << "[]";
	break;
case Mips::STACKMAP:

	break;
case Mips::STATEPOINT:

	break;
case Mips::STORE_ACC128:
	dbgs() << "[(null_frag ACC128:$rt, addr:$addr)]";
	break;
case Mips::STORE_ACC64:
	dbgs() << "[(null_frag ACC64:$rt, addr:$addr)]";
	break;
case Mips::STORE_ACC64DSP:
	dbgs() << "[(null_frag ACC64DSPOpnd:$rt, addr:$addr)]";
	break;
case Mips::STORE_CCOND_DSP:
	dbgs() << "[(null_frag DSPCC:$rt, addr:$addr)]";
	break;
case Mips::STR_D:
	dbgs() << "[(int_mips_str_d MSA128DOpnd:$dst, iPTR:$ptr, GPR32:$imm)]";
	break;
case Mips::STR_W:
	dbgs() << "[(int_mips_str_w MSA128WOpnd:$dst, iPTR:$ptr, GPR32:$imm)]";
	break;
case Mips::ST_B:
	dbgs() << "[(store (v16i8 MSA128BOpnd:$wd), addrimm10:$addr)]";
	break;
case Mips::ST_D:
	dbgs() << "[(store (v2i64 MSA128DOpnd:$wd), addrimm10lsl3:$addr)]";
	break;
case Mips::ST_F16:
	dbgs() << "[(store (f16 MSA128F16:$ws), (addrimm10:addr))]";
	break;
case Mips::ST_H:
	dbgs() << "[(store (v8i16 MSA128HOpnd:$wd), addrimm10lsl1:$addr)]";
	break;
case Mips::ST_W:
	dbgs() << "[(store (v4i32 MSA128WOpnd:$wd), addrimm10lsl2:$addr)]";
	break;
case Mips::SUB:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBQH_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQH_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQH_R_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQH_R_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subqh_r_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQH_R_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBQH_R_W_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_r_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBQH_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBQH_W_MMR2:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subqh_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBQ_PH:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQ_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQ_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQ_S_PH_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subq_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBQ_S_W:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBQ_S_W_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (int_mips_subq_s_w GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBREG_TO_REG:

	break;
case Mips::SUBSUS_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subsus_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SUBSUS_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subsus_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SUBSUS_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subsus_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SUBSUS_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subsus_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SUBSUU_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subsuu_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SUBSUU_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subsuu_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SUBSUU_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subsuu_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SUBSUU_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subsuu_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SUBS_S_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subs_s_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SUBS_S_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subs_s_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SUBS_S_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subs_s_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SUBS_S_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subs_s_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SUBS_U_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (int_mips_subs_u_b MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SUBS_U_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (int_mips_subs_u_d MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SUBS_U_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (int_mips_subs_u_h MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SUBS_U_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (int_mips_subs_u_w MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SUBU16_MM:
	dbgs() << "[(set GPRMM16Opnd:$rd, (sub GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::SUBU16_MMR6:
	dbgs() << "[(set GPRMM16Opnd:$rd, (sub GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::SUBUH_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBUH_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBUH_R_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBUH_R_QB_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subuh_r_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBU_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_QB:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (null_frag DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_S_PH:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_S_PH_MMR2:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_ph DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_S_QB:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBU_S_QB_MM:
	dbgs() << "[(set DSPROpnd:$rd, (int_mips_subu_s_qb DSPROpnd:$rs, DSPROpnd:$rt))]";
	break;
case Mips::SUBVI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (sub MSA128BOpnd:$ws, vsplati8_uimm5:$imm))]";
	break;
case Mips::SUBVI_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (sub MSA128DOpnd:$ws, vsplati64_uimm5:$imm))]";
	break;
case Mips::SUBVI_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (sub MSA128HOpnd:$ws, vsplati16_uimm5:$imm))]";
	break;
case Mips::SUBVI_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (sub MSA128WOpnd:$ws, vsplati32_uimm5:$imm))]";
	break;
case Mips::SUBV_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (sub MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::SUBV_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (sub MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::SUBV_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (sub MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::SUBV_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (sub MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::SUB_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUB_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (null_frag GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBu:
	dbgs() << "[(set GPR32Opnd:$rd, (sub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUBu_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (sub GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::SUXC1:
	dbgs() << "[(null_frag AFGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SUXC164:
	dbgs() << "[(null_frag FGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SUXC1_MM:
	dbgs() << "[(null_frag FGR64Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SW:
	dbgs() << "[(store GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SW16_MM:
	dbgs() << "[]";
	break;
case Mips::SW16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SW64:
	dbgs() << "[(truncstorei32 GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SWC1:
	dbgs() << "[(store FGR32Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SWC1_MM:
	dbgs() << "[(store FGR32Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SWC2:
	dbgs() << "[(store COP2Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SWC2_MMR6:
	dbgs() << "[(store COP2Opnd:$rt, addrimm11:$addr)]";
	break;
case Mips::SWC2_R6:
	dbgs() << "[]";
	break;
case Mips::SWC3:
	dbgs() << "[(store COP3Opnd:$rt, addrDefault:$addr)]";
	break;
case Mips::SWDSP:
	dbgs() << "[(null_frag DSPROpnd:$rt, addr:$addr)]";
	break;
case Mips::SWDSP_MM:
	dbgs() << "[(null_frag DSPROpnd:$rt, addr:$addr)]";
	break;
case Mips::SWE:
	dbgs() << "[]";
	break;
case Mips::SWE_MM:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SWL:
	dbgs() << "[(MipsSWL GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SWL64:
	dbgs() << "[(MipsSWL GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SWLE:
	dbgs() << "[]";
	break;
case Mips::SWLE_MM:
	dbgs() << "[(MipsSWL GPR32Opnd:$rt, addrimm12:$addr)]";
	break;
case Mips::SWL_MM:
	dbgs() << "[(MipsSWL GPR32Opnd:$rt, addrimm12:$addr)]";
	break;
case Mips::SWM16_MM:
	dbgs() << "[]";
	break;
case Mips::SWM16_MMR6:
	dbgs() << "[]";
	break;
case Mips::SWM32_MM:
	dbgs() << "[]";
	break;
case Mips::SWM_MM:
	dbgs() << "[]";
	break;
case Mips::SWP_MM:
	dbgs() << "[]";
	break;
case Mips::SWR:
	dbgs() << "[(MipsSWR GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SWR64:
	dbgs() << "[(MipsSWR GPR64Opnd:$rt, addr:$addr)]";
	break;
case Mips::SWRE:
	dbgs() << "[]";
	break;
case Mips::SWRE_MM:
	dbgs() << "[(MipsSWR GPR32Opnd:$rt, addrimm12:$addr)]";
	break;
case Mips::SWR_MM:
	dbgs() << "[(MipsSWR GPR32Opnd:$rt, addrimm12:$addr)]";
	break;
case Mips::SWSP_MM:
	dbgs() << "[]";
	break;
case Mips::SWSP_MMR6:
	dbgs() << "[]";
	break;
case Mips::SWXC1:
	dbgs() << "[(store FGR32Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SWXC1_MM:
	dbgs() << "[(store FGR32Opnd:$fs, (add iPTR:$base, iPTR:$index))]";
	break;
case Mips::SW_MM:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SW_MMR6:
	dbgs() << "[(null_frag GPR32Opnd:$rt, addr:$addr)]";
	break;
case Mips::SYNC:
	dbgs() << "[(MipsSync immZExt5:$stype)]";
	break;
case Mips::SYNCI:
	dbgs() << "[]";
	break;
case Mips::SYNCI_MM:
	dbgs() << "[]";
	break;
case Mips::SYNCI_MMR6:
	dbgs() << "[]";
	break;
case Mips::SYNC_MM:
	dbgs() << "[(MipsSync immZExt5:$stype)]";
	break;
case Mips::SYNC_MMR6:
	dbgs() << "[(MipsSync immZExt5:$stype)]";
	break;
case Mips::SYSCALL:
	dbgs() << "[]";
	break;
case Mips::SYSCALL_MM:
	dbgs() << "[]";
	break;
case Mips::SZ_B_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v16i8 MSA128B:$ws)))]";
	break;
case Mips::SZ_D_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v2i64 MSA128D:$ws)))]";
	break;
case Mips::SZ_H_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v8i16 MSA128H:$ws)))]";
	break;
case Mips::SZ_V_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAnyZero (v16i8 MSA128B:$ws)))]";
	break;
case Mips::SZ_W_PSEUDO:
	dbgs() << "[(set GPR32:$dst, (MipsVAllZero (v4i32 MSA128W:$ws)))]";
	break;
case Mips::SaaAddr:
	dbgs() << "[]";
	break;
case Mips::SaadAddr:
	dbgs() << "[]";
	break;
case Mips::Save16:
	dbgs() << "[]";
	break;
case Mips::SaveX16:
	dbgs() << "[]";
	break;
case Mips::SbRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::SebRx16:
	dbgs() << "[]";
	break;
case Mips::SehRx16:
	dbgs() << "[]";
	break;
case Mips::SelBeqZ:
	dbgs() << "[]";
	break;
case Mips::SelBneZ:
	dbgs() << "[]";
	break;
case Mips::SelTBteqZCmp:
	dbgs() << "[]";
	break;
case Mips::SelTBteqZCmpi:
	dbgs() << "[]";
	break;
case Mips::SelTBteqZSlt:
	dbgs() << "[]";
	break;
case Mips::SelTBteqZSlti:
	dbgs() << "[]";
	break;
case Mips::SelTBteqZSltiu:
	dbgs() << "[]";
	break;
case Mips::SelTBteqZSltu:
	dbgs() << "[]";
	break;
case Mips::SelTBtneZCmp:
	dbgs() << "[]";
	break;
case Mips::SelTBtneZCmpi:
	dbgs() << "[]";
	break;
case Mips::SelTBtneZSlt:
	dbgs() << "[]";
	break;
case Mips::SelTBtneZSlti:
	dbgs() << "[]";
	break;
case Mips::SelTBtneZSltiu:
	dbgs() << "[]";
	break;
case Mips::SelTBtneZSltu:
	dbgs() << "[]";
	break;
case Mips::ShRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::SllX16:
	dbgs() << "[]";
	break;
case Mips::SllvRxRy16:
	dbgs() << "[]";
	break;
case Mips::SltCCRxRy16:
	dbgs() << "[]";
	break;
case Mips::SltRxRy16:
	dbgs() << "[]";
	break;
case Mips::SltiCCRxImmX16:
	dbgs() << "[]";
	break;
case Mips::SltiRxImm16:
	dbgs() << "[]";
	break;
case Mips::SltiRxImmX16:
	dbgs() << "[]";
	break;
case Mips::SltiuCCRxImmX16:
	dbgs() << "[]";
	break;
case Mips::SltiuRxImm16:
	dbgs() << "[]";
	break;
case Mips::SltiuRxImmX16:
	dbgs() << "[]";
	break;
case Mips::SltuCCRxRy16:
	dbgs() << "[]";
	break;
case Mips::SltuRxRy16:
	dbgs() << "[]";
	break;
case Mips::SltuRxRyRz16:
	dbgs() << "[]";
	break;
case Mips::SraX16:
	dbgs() << "[]";
	break;
case Mips::SravRxRy16:
	dbgs() << "[]";
	break;
case Mips::SrlX16:
	dbgs() << "[]";
	break;
case Mips::SrlvRxRy16:
	dbgs() << "[]";
	break;
case Mips::SubuRxRyRz16:
	dbgs() << "[]";
	break;
case Mips::SwRxRyOffMemX16:
	dbgs() << "[]";
	break;
case Mips::SwRxSpImmX16:
	dbgs() << "[]";
	break;
case Mips::TAILCALL:
	dbgs() << "[]";
	break;
case Mips::TAILCALL64R6REG:
	dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
	break;
case Mips::TAILCALLHB64R6REG:
	dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
	break;
case Mips::TAILCALLHBR6REG:
	dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
	break;
case Mips::TAILCALLR6REG:
	dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
	break;
case Mips::TAILCALLREG:
	dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
	break;
case Mips::TAILCALLREG64:
	dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
	break;
case Mips::TAILCALLREGHB:
	dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
	break;
case Mips::TAILCALLREGHB64:
	dbgs() << "[(MipsTailCall GPR64Opnd:$rs)]";
	break;
case Mips::TAILCALLREG_MM:
	dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
	break;
case Mips::TAILCALLREG_MMR6:
	dbgs() << "[(MipsTailCall GPR32Opnd:$rs)]";
	break;
case Mips::TAILCALL_MM:
	dbgs() << "[]";
	break;
case Mips::TAILCALL_MMR6:
	dbgs() << "[]";
	break;
case Mips::TEQ:
	dbgs() << "[]";
	break;
case Mips::TEQI:
	dbgs() << "[]";
	break;
case Mips::TEQI_MM:
	dbgs() << "[]";
	break;
case Mips::TEQ_MM:
	dbgs() << "[]";
	break;
case Mips::TGE:
	dbgs() << "[]";
	break;
case Mips::TGEI:
	dbgs() << "[]";
	break;
case Mips::TGEIU:
	dbgs() << "[]";
	break;
case Mips::TGEIU_MM:
	dbgs() << "[]";
	break;
case Mips::TGEI_MM:
	dbgs() << "[]";
	break;
case Mips::TGEU:
	dbgs() << "[]";
	break;
case Mips::TGEU_MM:
	dbgs() << "[]";
	break;
case Mips::TGE_MM:
	dbgs() << "[]";
	break;
case Mips::TLBGINV:
	dbgs() << "[]";
	break;
case Mips::TLBGINVF:
	dbgs() << "[]";
	break;
case Mips::TLBGINVF_MM:
	dbgs() << "[]";
	break;
case Mips::TLBGINV_MM:
	dbgs() << "[]";
	break;
case Mips::TLBGP:
	dbgs() << "[]";
	break;
case Mips::TLBGP_MM:
	dbgs() << "[]";
	break;
case Mips::TLBGR:
	dbgs() << "[]";
	break;
case Mips::TLBGR_MM:
	dbgs() << "[]";
	break;
case Mips::TLBGWI:
	dbgs() << "[]";
	break;
case Mips::TLBGWI_MM:
	dbgs() << "[]";
	break;
case Mips::TLBGWR:
	dbgs() << "[]";
	break;
case Mips::TLBGWR_MM:
	dbgs() << "[]";
	break;
case Mips::TLBINV:
	dbgs() << "[]";
	break;
case Mips::TLBINVF:
	dbgs() << "[]";
	break;
case Mips::TLBINVF_MMR6:
	dbgs() << "[]";
	break;
case Mips::TLBINV_MMR6:
	dbgs() << "[]";
	break;
case Mips::TLBP:
	dbgs() << "[]";
	break;
case Mips::TLBP_MM:
	dbgs() << "[]";
	break;
case Mips::TLBR:
	dbgs() << "[]";
	break;
case Mips::TLBR_MM:
	dbgs() << "[]";
	break;
case Mips::TLBWI:
	dbgs() << "[]";
	break;
case Mips::TLBWI_MM:
	dbgs() << "[]";
	break;
case Mips::TLBWR:
	dbgs() << "[]";
	break;
case Mips::TLBWR_MM:
	dbgs() << "[]";
	break;
case Mips::TLT:
	dbgs() << "[]";
	break;
case Mips::TLTI:
	dbgs() << "[]";
	break;
case Mips::TLTIU_MM:
	dbgs() << "[]";
	break;
case Mips::TLTI_MM:
	dbgs() << "[]";
	break;
case Mips::TLTU:
	dbgs() << "[]";
	break;
case Mips::TLTU_MM:
	dbgs() << "[]";
	break;
case Mips::TLT_MM:
	dbgs() << "[]";
	break;
case Mips::TNE:
	dbgs() << "[]";
	break;
case Mips::TNEI:
	dbgs() << "[]";
	break;
case Mips::TNEI_MM:
	dbgs() << "[]";
	break;
case Mips::TNE_MM:
	dbgs() << "[]";
	break;
case Mips::TRAP:
	dbgs() << "[(trap)]";
	break;
case Mips::TRAP_MM:
	dbgs() << "[(trap)]";
	break;
case Mips::TRUNC_L_D64:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::TRUNC_L_D_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::TRUNC_L_S:
	dbgs() << "[(set FGR64Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::TRUNC_L_S_MMR6:
	dbgs() << "[(set FGR64Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::TRUNC_W_D32:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::TRUNC_W_D64:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::TRUNC_W_D_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR64Opnd:$fs))]";
	break;
case Mips::TRUNC_W_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag AFGR64Opnd:$fs))]";
	break;
case Mips::TRUNC_W_S:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::TRUNC_W_S_MM:
	dbgs() << "[(set FGR32Opnd:$fd, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::TRUNC_W_S_MMR6:
	dbgs() << "[(set FGR32Opnd:$ft, (null_frag FGR32Opnd:$fs))]";
	break;
case Mips::TTLTIU:
	dbgs() << "[]";
	break;
case Mips::UDIV:
	dbgs() << "[]";
	break;
case Mips::UDIV_MM:
	dbgs() << "[]";
	break;
case Mips::UDIV_MM_Pseudo:
	dbgs() << "[(set ACC64:$ac, (MipsDivRemU GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::UDivIMacro:
	dbgs() << "[]";
	break;
case Mips::UDivMacro:
	dbgs() << "[]";
	break;
case Mips::URemIMacro:
	dbgs() << "[]";
	break;
case Mips::URemMacro:
	dbgs() << "[]";
	break;
case Mips::Ulh:
	dbgs() << "[]";
	break;
case Mips::Ulhu:
	dbgs() << "[]";
	break;
case Mips::Ulw:
	dbgs() << "[]";
	break;
case Mips::Ush:
	dbgs() << "[]";
	break;
case Mips::Usw:
	dbgs() << "[]";
	break;
case Mips::V3MULU:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::VMM0:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::VMULU:
	dbgs() << "[(set GPR64Opnd:$rd, (null_frag GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::VSHF_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (MipsVSHF MSA128BOpnd:$wd_in, MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::VSHF_D:
	dbgs() << "[(set MSA128DOpnd:$wd, (MipsVSHF MSA128DOpnd:$wd_in, MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::VSHF_H:
	dbgs() << "[(set MSA128HOpnd:$wd, (MipsVSHF MSA128HOpnd:$wd_in, MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::VSHF_W:
	dbgs() << "[(set MSA128WOpnd:$wd, (MipsVSHF MSA128WOpnd:$wd_in, MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::WAIT:
	dbgs() << "[]";
	break;
case Mips::WAIT_MM:
	dbgs() << "[]";
	break;
case Mips::WAIT_MMR6:
	dbgs() << "[]";
	break;
case Mips::WRDSP:
	dbgs() << "[(int_mips_wrdsp GPR32Opnd:$rs, timmZExt10:$mask)]";
	break;
case Mips::WRDSP_MM:
	dbgs() << "[(int_mips_wrdsp GPR32Opnd:$rt, timmZExt7:$mask)]";
	break;
case Mips::WRPGPR_MMR6:
	dbgs() << "[]";
	break;
case Mips::WSBH:
	dbgs() << "[]";
	break;
case Mips::WSBH_MM:
	dbgs() << "[]";
	break;
case Mips::WSBH_MMR6:
	dbgs() << "[]";
	break;
case Mips::XOR:
	dbgs() << "[(set GPR32Opnd:$rd, (xor GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::XOR16_MM:
	dbgs() << "[(set GPRMM16Opnd:$dst, (xor GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::XOR16_MMR6:
	dbgs() << "[(set GPRMM16Opnd:$dst, (null_frag GPRMM16Opnd:$rs, GPRMM16Opnd:$rt))]";
	break;
case Mips::XOR64:
	dbgs() << "[(set GPR64Opnd:$rd, (xor GPR64Opnd:$rs, GPR64Opnd:$rt))]";
	break;
case Mips::XORI_B:
	dbgs() << "[(set MSA128BOpnd:$wd, (xor MSA128BOpnd:$ws, vsplati8_uimm8:$u8))]";
	break;
case Mips::XORI_MMR6:
	dbgs() << "[(set GPR32Opnd:$rt, (xor GPR32Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::XOR_MM:
	dbgs() << "[(set GPR32Opnd:$rd, (xor GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::XOR_MMR6:
	dbgs() << "[(set GPR32Opnd:$rd, (xor GPR32Opnd:$rs, GPR32Opnd:$rt))]";
	break;
case Mips::XOR_V:
	dbgs() << "[(set MSA128BOpnd:$wd, (xor MSA128BOpnd:$ws, MSA128BOpnd:$wt))]";
	break;
case Mips::XOR_V_D_PSEUDO:
	dbgs() << "[(set MSA128DOpnd:$wd, (xor MSA128DOpnd:$ws, MSA128DOpnd:$wt))]";
	break;
case Mips::XOR_V_H_PSEUDO:
	dbgs() << "[(set MSA128HOpnd:$wd, (xor MSA128HOpnd:$ws, MSA128HOpnd:$wt))]";
	break;
case Mips::XOR_V_W_PSEUDO:
	dbgs() << "[(set MSA128WOpnd:$wd, (xor MSA128WOpnd:$ws, MSA128WOpnd:$wt))]";
	break;
case Mips::XORi:
	dbgs() << "[(set GPR32Opnd:$rt, (xor GPR32Opnd:$rs, imm32ZExt16:$imm16))]";
	break;
case Mips::XORi64:
	dbgs() << "[(set GPR64Opnd:$rt, (xor GPR64Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::XORi_MM:
	dbgs() << "[(set GPR32Opnd:$rt, (xor GPR32Opnd:$rs, immZExt16:$imm16))]";
	break;
case Mips::XorRxRxRy16:
	dbgs() << "[]";
	break;
case Mips::YIELD:
	dbgs() << "[]";
	break;
