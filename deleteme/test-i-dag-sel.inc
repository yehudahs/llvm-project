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

case Mips::RetRA:
	printf("RetRA");
case Mips::ERet:
	printf("ERet");
case Mips::ADJCALLSTACKDOWN:
	printf("ADJCALLSTACKDOWN");
case Mips::ADJCALLSTACKUP:
	printf("ADJCALLSTACKUP");
case Mips::ATOMIC_LOAD_ADD_I8:
	printf("ATOMIC_LOAD_ADD_I8");
case Mips::ATOMIC_LOAD_ADD_I16:
	printf("ATOMIC_LOAD_ADD_I16");
case Mips::ATOMIC_LOAD_ADD_I32:
	printf("ATOMIC_LOAD_ADD_I32");
case Mips::ATOMIC_LOAD_SUB_I8:
	printf("ATOMIC_LOAD_SUB_I8");
case Mips::ATOMIC_LOAD_SUB_I16:
	printf("ATOMIC_LOAD_SUB_I16");
case Mips::ATOMIC_LOAD_SUB_I32:
	printf("ATOMIC_LOAD_SUB_I32");
case Mips::ATOMIC_LOAD_AND_I8:
	printf("ATOMIC_LOAD_AND_I8");
case Mips::ATOMIC_LOAD_AND_I16:
	printf("ATOMIC_LOAD_AND_I16");
case Mips::ATOMIC_LOAD_AND_I32:
	printf("ATOMIC_LOAD_AND_I32");
case Mips::ATOMIC_LOAD_OR_I8:
	printf("ATOMIC_LOAD_OR_I8");
case Mips::ATOMIC_LOAD_OR_I16:
	printf("ATOMIC_LOAD_OR_I16");
case Mips::ATOMIC_LOAD_OR_I32:
	printf("ATOMIC_LOAD_OR_I32");
case Mips::ATOMIC_LOAD_XOR_I8:
	printf("ATOMIC_LOAD_XOR_I8");
case Mips::ATOMIC_LOAD_XOR_I16:
	printf("ATOMIC_LOAD_XOR_I16");
case Mips::ATOMIC_LOAD_XOR_I32:
	printf("ATOMIC_LOAD_XOR_I32");
case Mips::ATOMIC_LOAD_NAND_I8:
	printf("ATOMIC_LOAD_NAND_I8");
case Mips::ATOMIC_LOAD_NAND_I16:
	printf("ATOMIC_LOAD_NAND_I16");
case Mips::ATOMIC_LOAD_NAND_I32:
	printf("ATOMIC_LOAD_NAND_I32");
case Mips::ATOMIC_SWAP_I8:
	printf("ATOMIC_SWAP_I8");
case Mips::ATOMIC_SWAP_I16:
	printf("ATOMIC_SWAP_I16");
case Mips::ATOMIC_SWAP_I32:
	printf("ATOMIC_SWAP_I32");
case Mips::ATOMIC_CMP_SWAP_I8:
	printf("ATOMIC_CMP_SWAP_I8");
case Mips::ATOMIC_CMP_SWAP_I16:
	printf("ATOMIC_CMP_SWAP_I16");
case Mips::ATOMIC_CMP_SWAP_I32:
	printf("ATOMIC_CMP_SWAP_I32");
case Mips::ATOMIC_LOAD_MIN_I8:
	printf("ATOMIC_LOAD_MIN_I8");
case Mips::ATOMIC_LOAD_MIN_I16:
	printf("ATOMIC_LOAD_MIN_I16");
case Mips::ATOMIC_LOAD_MIN_I32:
	printf("ATOMIC_LOAD_MIN_I32");
case Mips::ATOMIC_LOAD_MAX_I8:
	printf("ATOMIC_LOAD_MAX_I8");
case Mips::ATOMIC_LOAD_MAX_I16:
	printf("ATOMIC_LOAD_MAX_I16");
case Mips::ATOMIC_LOAD_MAX_I32:
	printf("ATOMIC_LOAD_MAX_I32");
case Mips::ATOMIC_LOAD_UMIN_I8:
	printf("ATOMIC_LOAD_UMIN_I8");
case Mips::ATOMIC_LOAD_UMIN_I16:
	printf("ATOMIC_LOAD_UMIN_I16");
case Mips::ATOMIC_LOAD_UMIN_I32:
	printf("ATOMIC_LOAD_UMIN_I32");
case Mips::ATOMIC_LOAD_UMAX_I8:
	printf("ATOMIC_LOAD_UMAX_I8");
case Mips::ATOMIC_LOAD_UMAX_I16:
	printf("ATOMIC_LOAD_UMAX_I16");
case Mips::ATOMIC_LOAD_UMAX_I32:
	printf("ATOMIC_LOAD_UMAX_I32");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ANDi:
	printf("ANDi");
case Mips::ORi:
	printf("ORi");
case Mips::XORi:
	printf("XORi");
case Mips::SLTi:
	printf("SLTi");
case Mips::SLTiu:
	printf("SLTiu");
case Mips::ADDu:
	printf("ADDu");
case Mips::SUBu:
	printf("SUBu");
case Mips::MUL:
	printf("MUL");
case Mips::SLT:
	printf("SLT");
case Mips::SLTu:
	printf("SLTu");
case Mips::AND:
	printf("AND");
case Mips::OR:
	printf("OR");
case Mips::XOR:
	printf("XOR");
case Mips::NOR:
	printf("NOR");
case Mips::SLL:
	printf("SLL");
case Mips::SRL:
	printf("SRL");
case Mips::SRA:
	printf("SRA");
case Mips::SLLV:
	printf("SLLV");
case Mips::SRLV:
	printf("SRLV");
case Mips::SRAV:
	printf("SRAV");
case Mips::ROTR:
	printf("ROTR");
case Mips::ROTRV:
	printf("ROTRV");
case Mips::LB:
	printf("LB");
case Mips::LBu:
	printf("LBu");
case Mips::LH:
	printf("LH");
case Mips::LHu:
	printf("LHu");
case Mips::LW:
	printf("LW");
case Mips::SB:
	printf("SB");
case Mips::SH:
	printf("SH");
case Mips::SW:
	printf("SW");
case Mips::LWL:
	printf("LWL");
case Mips::LWR:
	printf("LWR");
case Mips::SWL:
	printf("SWL");
case Mips::SWR:
	printf("SWR");
case Mips::LWC2:
	printf("LWC2");
case Mips::SWC2:
	printf("SWC2");
case Mips::LDC2:
	printf("LDC2");
case Mips::SDC2:
	printf("SDC2");
case Mips::LWC3:
	printf("LWC3");
case Mips::SWC3:
	printf("SWC3");
case Mips::LDC3:
	printf("LDC3");
case Mips::SDC3:
	printf("SDC3");
case Mips::SYNC:
	printf("SYNC");
case Mips::TRAP:
	printf("TRAP");
case Mips::J:
	printf("J");
case Mips::BEQ:
	printf("BEQ");
case Mips::BNE:
	printf("BNE");
case Mips::BGEZ:
	printf("BGEZ");
case Mips::BGTZ:
	printf("BGTZ");
case Mips::BLEZ:
	printf("BLEZ");
case Mips::BLTZ:
	printf("BLTZ");
case Mips::B:
	printf("B");
case Mips::JAL:
	printf("JAL");
case Mips::JALRPseudo:
	printf("JALRPseudo");
case Mips::JALX:
	printf("JALX");
case Mips::TAILCALLREG:
	printf("TAILCALLREG");
case Mips::PseudoIndirectBranch:
	printf("PseudoIndirectBranch");
case Mips::MIPSeh_return32:
	printf("MIPSeh_return32");
case Mips::MIPSeh_return64:
	printf("MIPSeh_return64");
case Mips::SEB:
	printf("SEB");
case Mips::SEH:
	printf("SEH");
case Mips::CLZ:
	printf("CLZ");
case Mips::CLO:
	printf("CLO");
case Mips::LEA_ADDiu:
	printf("LEA_ADDiu");
case Mips::PseudoMULT:
	printf("PseudoMULT");
case Mips::PseudoMULTu:
	printf("PseudoMULTu");
case Mips::PseudoMFHI:
	printf("PseudoMFHI");
case Mips::PseudoMFLO:
	printf("PseudoMFLO");
case Mips::PseudoMTLOHI:
	printf("PseudoMTLOHI");
case Mips::PseudoMADD:
	printf("PseudoMADD");
case Mips::PseudoMADDU:
	printf("PseudoMADDU");
case Mips::PseudoMSUB:
	printf("PseudoMSUB");
case Mips::PseudoMSUBU:
	printf("PseudoMSUBU");
case Mips::PseudoSDIV:
	printf("PseudoSDIV");
case Mips::PseudoUDIV:
	printf("PseudoUDIV");
case Mips::EXT:
	printf("EXT");
case Mips::JALRHBPseudo:
	printf("JALRHBPseudo");
case Mips::TAILCALLREGHB:
	printf("TAILCALLREGHB");
case Mips::PseudoIndirectHazardBranch:
	printf("PseudoIndirectHazardBranch");
case Mips::FABS_S:
	printf("FABS_S");
case Mips::FABS_D32:
	printf("FABS_D32");
case Mips::FABS_D64:
	printf("FABS_D64");
case Mips::FNEG_S:
	printf("FNEG_S");
case Mips::FNEG_D32:
	printf("FNEG_D32");
case Mips::FNEG_D64:
	printf("FNEG_D64");
case Mips::FSQRT_S:
	printf("FSQRT_S");
case Mips::FSQRT_D32:
	printf("FSQRT_D32");
case Mips::FSQRT_D64:
	printf("FSQRT_D64");
case Mips::MFC1:
	printf("MFC1");
case Mips::MTC1:
	printf("MTC1");
case Mips::DMTC1:
	printf("DMTC1");
case Mips::DMFC1:
	printf("DMFC1");
case Mips::LWC1:
	printf("LWC1");
case Mips::SWC1:
	printf("SWC1");
case Mips::LDC164:
	printf("LDC164");
case Mips::SDC164:
	printf("SDC164");
case Mips::LDC1:
	printf("LDC1");
case Mips::SDC1:
	printf("SDC1");
case Mips::LWXC1:
	printf("LWXC1");
case Mips::SWXC1:
	printf("SWXC1");
case Mips::LDXC1:
	printf("LDXC1");
case Mips::SDXC1:
	printf("SDXC1");
case Mips::LDXC164:
	printf("LDXC164");
case Mips::SDXC164:
	printf("SDXC164");
case Mips::FADD_S:
	printf("FADD_S");
case Mips::FADD_D32:
	printf("FADD_D32");
case Mips::FADD_D64:
	printf("FADD_D64");
case Mips::FDIV_S:
	printf("FDIV_S");
case Mips::FDIV_D32:
	printf("FDIV_D32");
case Mips::FDIV_D64:
	printf("FDIV_D64");
case Mips::FMUL_S:
	printf("FMUL_S");
case Mips::FMUL_D32:
	printf("FMUL_D32");
case Mips::FMUL_D64:
	printf("FMUL_D64");
case Mips::FSUB_S:
	printf("FSUB_S");
case Mips::FSUB_D32:
	printf("FSUB_D32");
case Mips::FSUB_D64:
	printf("FSUB_D64");
case Mips::MADD_S:
	printf("MADD_S");
case Mips::MSUB_S:
	printf("MSUB_S");
case Mips::MADD_D32:
	printf("MADD_D32");
case Mips::MSUB_D32:
	printf("MSUB_D32");
case Mips::MADD_D64:
	printf("MADD_D64");
case Mips::MSUB_D64:
	printf("MSUB_D64");
case Mips::NMADD_S:
	printf("NMADD_S");
case Mips::NMSUB_S:
	printf("NMSUB_S");
case Mips::NMADD_D32:
	printf("NMADD_D32");
case Mips::NMSUB_D32:
	printf("NMSUB_D32");
case Mips::NMADD_D64:
	printf("NMADD_D64");
case Mips::NMSUB_D64:
	printf("NMSUB_D64");
case Mips::BC1F:
	printf("BC1F");
case Mips::BC1T:
	printf("BC1T");
case Mips::FCMP_S32:
	printf("FCMP_S32");
case Mips::FCMP_D32:
	printf("FCMP_D32");
case Mips::FCMP_D64:
	printf("FCMP_D64");
case Mips::BuildPairF64:
	printf("BuildPairF64");
case Mips::BuildPairF64_64:
	printf("BuildPairF64_64");
case Mips::ExtractElementF64:
	printf("ExtractElementF64");
case Mips::ExtractElementF64_64:
	printf("ExtractElementF64_64");
case Mips::ATOMIC_LOAD_ADD_I64:
	printf("ATOMIC_LOAD_ADD_I64");
case Mips::ATOMIC_LOAD_SUB_I64:
	printf("ATOMIC_LOAD_SUB_I64");
case Mips::ATOMIC_LOAD_AND_I64:
	printf("ATOMIC_LOAD_AND_I64");
case Mips::ATOMIC_LOAD_OR_I64:
	printf("ATOMIC_LOAD_OR_I64");
case Mips::ATOMIC_LOAD_XOR_I64:
	printf("ATOMIC_LOAD_XOR_I64");
case Mips::ATOMIC_LOAD_NAND_I64:
	printf("ATOMIC_LOAD_NAND_I64");
case Mips::ATOMIC_SWAP_I64:
	printf("ATOMIC_SWAP_I64");
case Mips::ATOMIC_CMP_SWAP_I64:
	printf("ATOMIC_CMP_SWAP_I64");
case Mips::ATOMIC_LOAD_MIN_I64:
	printf("ATOMIC_LOAD_MIN_I64");
case Mips::ATOMIC_LOAD_MAX_I64:
	printf("ATOMIC_LOAD_MAX_I64");
case Mips::ATOMIC_LOAD_UMIN_I64:
	printf("ATOMIC_LOAD_UMIN_I64");
case Mips::ATOMIC_LOAD_UMAX_I64:
	printf("ATOMIC_LOAD_UMAX_I64");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::SLTi64:
	printf("SLTi64");
case Mips::SLTiu64:
	printf("SLTiu64");
case Mips::ANDi64:
	printf("ANDi64");
case Mips::ORi64:
	printf("ORi64");
case Mips::XORi64:
	printf("XORi64");
case Mips::DADDu:
	printf("DADDu");
case Mips::DSUBu:
	printf("DSUBu");
case Mips::SLT64:
	printf("SLT64");
case Mips::SLTu64:
	printf("SLTu64");
case Mips::AND64:
	printf("AND64");
case Mips::OR64:
	printf("OR64");
case Mips::XOR64:
	printf("XOR64");
case Mips::NOR64:
	printf("NOR64");
case Mips::DSLL:
	printf("DSLL");
case Mips::DSRL:
	printf("DSRL");
case Mips::DSRA:
	printf("DSRA");
case Mips::DSLLV:
	printf("DSLLV");
case Mips::DSRAV:
	printf("DSRAV");
case Mips::DSRLV:
	printf("DSRLV");
case Mips::DROTR:
	printf("DROTR");
case Mips::DROTRV:
	printf("DROTRV");
case Mips::LB64:
	printf("LB64");
case Mips::LBu64:
	printf("LBu64");
case Mips::LH64:
	printf("LH64");
case Mips::LHu64:
	printf("LHu64");
case Mips::LW64:
	printf("LW64");
case Mips::SB64:
	printf("SB64");
case Mips::SH64:
	printf("SH64");
case Mips::SW64:
	printf("SW64");
case Mips::LWu:
	printf("LWu");
case Mips::LD:
	printf("LD");
case Mips::SD:
	printf("SD");
case Mips::LWL64:
	printf("LWL64");
case Mips::LWR64:
	printf("LWR64");
case Mips::SWL64:
	printf("SWL64");
case Mips::SWR64:
	printf("SWR64");
case Mips::LDL:
	printf("LDL");
case Mips::LDR:
	printf("LDR");
case Mips::SDL:
	printf("SDL");
case Mips::SDR:
	printf("SDR");
case Mips::BEQ64:
	printf("BEQ64");
case Mips::BNE64:
	printf("BNE64");
case Mips::BGEZ64:
	printf("BGEZ64");
case Mips::BGTZ64:
	printf("BGTZ64");
case Mips::BLEZ64:
	printf("BLEZ64");
case Mips::BLTZ64:
	printf("BLTZ64");
case Mips::JALR64Pseudo:
	printf("JALR64Pseudo");
case Mips::TAILCALLREG64:
	printf("TAILCALLREG64");
case Mips::PseudoIndirectBranch64:
	printf("PseudoIndirectBranch64");
case Mips::TAILCALLREGHB64:
	printf("TAILCALLREGHB64");
case Mips::PseudoIndirectHazardBranch64:
	printf("PseudoIndirectHazardBranch64");
case Mips::PseudoDMULT:
	printf("PseudoDMULT");
case Mips::PseudoDMULTu:
	printf("PseudoDMULTu");
case Mips::PseudoDSDIV:
	printf("PseudoDSDIV");
case Mips::PseudoDUDIV:
	printf("PseudoDUDIV");
case Mips::PseudoMFHI64:
	printf("PseudoMFHI64");
case Mips::PseudoMFLO64:
	printf("PseudoMFLO64");
case Mips::PseudoMTLOHI64:
	printf("PseudoMTLOHI64");
case Mips::SEB64:
	printf("SEB64");
case Mips::SEH64:
	printf("SEH64");
case Mips::DCLZ:
	printf("DCLZ");
case Mips::DCLO:
	printf("DCLO");
case Mips::LEA_ADDiu64:
	printf("LEA_ADDiu64");
case Mips::DEXT:
	printf("DEXT");
case Mips::DEXTM:
	printf("DEXTM");
case Mips::DEXTU:
	printf("DEXTU");
case Mips::BADDu:
	printf("BADDu");
case Mips::BBIT0:
	printf("BBIT0");
case Mips::BBIT032:
	printf("BBIT032");
case Mips::BBIT1:
	printf("BBIT1");
case Mips::BBIT132:
	printf("BBIT132");
case Mips::DMUL:
	printf("DMUL");
case Mips::CINS:
	printf("CINS");
case Mips::CINS32:
	printf("CINS32");
case Mips::CINS_i32:
	printf("CINS_i32");
case Mips::POP:
	printf("POP");
case Mips::DPOP:
	printf("DPOP");
case Mips::SEQ:
	printf("SEQ");
case Mips::SEQi:
	printf("SEQi");
case Mips::SNE:
	printf("SNE");
case Mips::SNEi:
	printf("SNEi");
case Mips::JALRHB64Pseudo:
	printf("JALRHB64Pseudo");
case Mips::MOVT_I:
	printf("MOVT_I");
case Mips::MOVT_I64:
	printf("MOVT_I64");
case Mips::MOVF_I:
	printf("MOVF_I");
case Mips::MOVF_I64:
	printf("MOVF_I64");
case Mips::MOVT_S:
	printf("MOVT_S");
case Mips::MOVF_S:
	printf("MOVF_S");
case Mips::MOVT_D32:
	printf("MOVT_D32");
case Mips::MOVF_D32:
	printf("MOVF_D32");
case Mips::MOVT_D64:
	printf("MOVT_D64");
case Mips::MOVF_D64:
	printf("MOVF_D64");
case Mips::PseudoSELECT_I:
	printf("PseudoSELECT_I");
case Mips::PseudoSELECT_I64:
	printf("PseudoSELECT_I64");
case Mips::PseudoSELECT_S:
	printf("PseudoSELECT_S");
case Mips::PseudoSELECT_D32:
	printf("PseudoSELECT_D32");
case Mips::PseudoSELECT_D64:
	printf("PseudoSELECT_D64");
case Mips::PseudoSELECTFP_T_I:
	printf("PseudoSELECTFP_T_I");
case Mips::PseudoSELECTFP_T_I64:
	printf("PseudoSELECTFP_T_I64");
case Mips::PseudoSELECTFP_T_S:
	printf("PseudoSELECTFP_T_S");
case Mips::PseudoSELECTFP_T_D32:
	printf("PseudoSELECTFP_T_D32");
case Mips::PseudoSELECTFP_T_D64:
	printf("PseudoSELECTFP_T_D64");
case Mips::PseudoSELECTFP_F_I:
	printf("PseudoSELECTFP_F_I");
case Mips::PseudoSELECTFP_F_I64:
	printf("PseudoSELECTFP_F_I64");
case Mips::PseudoSELECTFP_F_S:
	printf("PseudoSELECTFP_F_S");
case Mips::PseudoSELECTFP_F_D32:
	printf("PseudoSELECTFP_F_D32");
case Mips::PseudoSELECTFP_F_D64:
	printf("PseudoSELECTFP_F_D64");
case Mips::CLO_R6:
	printf("CLO_R6");
case Mips::CLZ_R6:
	printf("CLZ_R6");
case Mips::CMP_UN_S:
	printf("CMP_UN_S");
case Mips::CMP_EQ_S:
	printf("CMP_EQ_S");
case Mips::CMP_UEQ_S:
	printf("CMP_UEQ_S");
case Mips::CMP_LT_S:
	printf("CMP_LT_S");
case Mips::CMP_ULT_S:
	printf("CMP_ULT_S");
case Mips::CMP_LE_S:
	printf("CMP_LE_S");
case Mips::CMP_ULE_S:
	printf("CMP_ULE_S");
case Mips::CMP_UN_D:
	printf("CMP_UN_D");
case Mips::CMP_EQ_D:
	printf("CMP_EQ_D");
case Mips::CMP_UEQ_D:
	printf("CMP_UEQ_D");
case Mips::CMP_LT_D:
	printf("CMP_LT_D");
case Mips::CMP_ULT_D:
	printf("CMP_ULT_D");
case Mips::CMP_LE_D:
	printf("CMP_LE_D");
case Mips::CMP_ULE_D:
	printf("CMP_ULE_D");
case Mips::DIV:
	printf("DIV");
case Mips::DIVU:
	printf("DIVU");
case Mips::MOD:
	printf("MOD");
case Mips::MODU:
	printf("MODU");
case Mips::MUH:
	printf("MUH");
case Mips::MUHU:
	printf("MUHU");
case Mips::MUL_R6:
	printf("MUL_R6");
case Mips::SEL_D:
	printf("SEL_D");
case Mips::SEL_S:
	printf("SEL_S");
case Mips::TAILCALLR6REG:
	printf("TAILCALLR6REG");
case Mips::PseudoIndirectBranchR6:
	printf("PseudoIndirectBranchR6");
case Mips::TAILCALLHBR6REG:
	printf("TAILCALLHBR6REG");
case Mips::PseudoIndrectHazardBranchR6:
	printf("PseudoIndrectHazardBranchR6");
case Mips::DCLO_R6:
	printf("DCLO_R6");
case Mips::DCLZ_R6:
	printf("DCLZ_R6");
case Mips::DDIV:
	printf("DDIV");
case Mips::DDIVU:
	printf("DDIVU");
case Mips::DMOD:
	printf("DMOD");
case Mips::DMODU:
	printf("DMODU");
case Mips::DMUH:
	printf("DMUH");
case Mips::DMUHU:
	printf("DMUHU");
case Mips::DMUL_R6:
	printf("DMUL_R6");
case Mips::TAILCALL64R6REG:
	printf("TAILCALL64R6REG");
case Mips::PseudoIndirectBranch64R6:
	printf("PseudoIndirectBranch64R6");
case Mips::TAILCALLHB64R6REG:
	printf("TAILCALLHB64R6REG");
case Mips::PseudoIndrectHazardBranch64R6:
	printf("PseudoIndrectHazardBranch64R6");
case Mips::JumpLinkReg16:
	printf("JumpLinkReg16");
case Mips::RetRA16:
	printf("RetRA16");
case Mips::BPOSGE32_PSEUDO:
	printf("BPOSGE32_PSEUDO");
case Mips::ADDU_S_QB:
	printf("ADDU_S_QB");
case Mips::SUBU_S_QB:
	printf("SUBU_S_QB");
case Mips::ADDQ_S_PH:
	printf("ADDQ_S_PH");
case Mips::SUBQ_S_PH:
	printf("SUBQ_S_PH");
case Mips::ADDQ_S_W:
	printf("ADDQ_S_W");
case Mips::SUBQ_S_W:
	printf("SUBQ_S_W");
case Mips::MODSUB:
	printf("MODSUB");
case Mips::RADDU_W_QB:
	printf("RADDU_W_QB");
case Mips::ABSQ_S_PH:
	printf("ABSQ_S_PH");
case Mips::ABSQ_S_W:
	printf("ABSQ_S_W");
case Mips::PRECRQ_QB_PH:
	printf("PRECRQ_QB_PH");
case Mips::PRECRQ_PH_W:
	printf("PRECRQ_PH_W");
case Mips::PRECRQ_RS_PH_W:
	printf("PRECRQ_RS_PH_W");
case Mips::PRECRQU_S_QB_PH:
	printf("PRECRQU_S_QB_PH");
case Mips::PRECEQ_W_PHL:
	printf("PRECEQ_W_PHL");
case Mips::PRECEQ_W_PHR:
	printf("PRECEQ_W_PHR");
case Mips::PRECEQU_PH_QBL:
	printf("PRECEQU_PH_QBL");
case Mips::PRECEQU_PH_QBR:
	printf("PRECEQU_PH_QBR");
case Mips::PRECEQU_PH_QBLA:
	printf("PRECEQU_PH_QBLA");
case Mips::PRECEQU_PH_QBRA:
	printf("PRECEQU_PH_QBRA");
case Mips::PRECEU_PH_QBL:
	printf("PRECEU_PH_QBL");
case Mips::PRECEU_PH_QBR:
	printf("PRECEU_PH_QBR");
case Mips::PRECEU_PH_QBLA:
	printf("PRECEU_PH_QBLA");
case Mips::PRECEU_PH_QBRA:
	printf("PRECEU_PH_QBRA");
case Mips::SHLLV_QB:
	printf("SHLLV_QB");
case Mips::SHRLV_QB:
	printf("SHRLV_QB");
case Mips::SHLLV_PH:
	printf("SHLLV_PH");
case Mips::SHLL_S_PH:
	printf("SHLL_S_PH");
case Mips::SHLLV_S_PH:
	printf("SHLLV_S_PH");
case Mips::SHRAV_PH:
	printf("SHRAV_PH");
case Mips::SHRA_R_PH:
	printf("SHRA_R_PH");
case Mips::SHRAV_R_PH:
	printf("SHRAV_R_PH");
case Mips::SHLL_S_W:
	printf("SHLL_S_W");
case Mips::SHLLV_S_W:
	printf("SHLLV_S_W");
case Mips::SHRA_R_W:
	printf("SHRA_R_W");
case Mips::SHRAV_R_W:
	printf("SHRAV_R_W");
case Mips::MULEU_S_PH_QBL:
	printf("MULEU_S_PH_QBL");
case Mips::MULEU_S_PH_QBR:
	printf("MULEU_S_PH_QBR");
case Mips::MULEQ_S_W_PHL:
	printf("MULEQ_S_W_PHL");
case Mips::MULEQ_S_W_PHR:
	printf("MULEQ_S_W_PHR");
case Mips::MULQ_RS_PH:
	printf("MULQ_RS_PH");
case Mips::MULSAQ_S_W_PH:
	printf("MULSAQ_S_W_PH");
case Mips::MAQ_S_W_PHL:
	printf("MAQ_S_W_PHL");
case Mips::MAQ_S_W_PHR:
	printf("MAQ_S_W_PHR");
case Mips::MAQ_SA_W_PHL:
	printf("MAQ_SA_W_PHL");
case Mips::MAQ_SA_W_PHR:
	printf("MAQ_SA_W_PHR");
case Mips::MFHI_DSP:
	printf("MFHI_DSP");
case Mips::MFLO_DSP:
	printf("MFLO_DSP");
case Mips::DPAU_H_QBL:
	printf("DPAU_H_QBL");
case Mips::DPAU_H_QBR:
	printf("DPAU_H_QBR");
case Mips::DPSU_H_QBL:
	printf("DPSU_H_QBL");
case Mips::DPSU_H_QBR:
	printf("DPSU_H_QBR");
case Mips::DPAQ_S_W_PH:
	printf("DPAQ_S_W_PH");
case Mips::DPSQ_S_W_PH:
	printf("DPSQ_S_W_PH");
case Mips::DPAQ_SA_L_W:
	printf("DPAQ_SA_L_W");
case Mips::DPSQ_SA_L_W:
	printf("DPSQ_SA_L_W");
case Mips::MULT_DSP:
	printf("MULT_DSP");
case Mips::MULTU_DSP:
	printf("MULTU_DSP");
case Mips::MADD_DSP:
	printf("MADD_DSP");
case Mips::MADDU_DSP:
	printf("MADDU_DSP");
case Mips::MSUB_DSP:
	printf("MSUB_DSP");
case Mips::MSUBU_DSP:
	printf("MSUBU_DSP");
case Mips::CMPU_EQ_QB:
	printf("CMPU_EQ_QB");
case Mips::CMPU_LT_QB:
	printf("CMPU_LT_QB");
case Mips::CMPU_LE_QB:
	printf("CMPU_LE_QB");
case Mips::CMPGU_EQ_QB:
	printf("CMPGU_EQ_QB");
case Mips::CMPGU_LT_QB:
	printf("CMPGU_LT_QB");
case Mips::CMPGU_LE_QB:
	printf("CMPGU_LE_QB");
case Mips::CMP_EQ_PH:
	printf("CMP_EQ_PH");
case Mips::CMP_LT_PH:
	printf("CMP_LT_PH");
case Mips::CMP_LE_PH:
	printf("CMP_LE_PH");
case Mips::BITREV:
	printf("BITREV");
case Mips::PACKRL_PH:
	printf("PACKRL_PH");
case Mips::REPL_QB:
	printf("REPL_QB");
case Mips::REPL_PH:
	printf("REPL_PH");
case Mips::REPLV_QB:
	printf("REPLV_QB");
case Mips::REPLV_PH:
	printf("REPLV_PH");
case Mips::PICK_QB:
	printf("PICK_QB");
case Mips::PICK_PH:
	printf("PICK_PH");
case Mips::LWX:
	printf("LWX");
case Mips::LHX:
	printf("LHX");
case Mips::LBUX:
	printf("LBUX");
case Mips::INSV:
	printf("INSV");
case Mips::SHILO:
	printf("SHILO");
case Mips::SHILOV:
	printf("SHILOV");
case Mips::MTHLIP:
	printf("MTHLIP");
case Mips::RDDSP:
	printf("RDDSP");
case Mips::WRDSP:
	printf("WRDSP");
case Mips::ADDU_PH:
	printf("ADDU_PH");
case Mips::ADDU_S_PH:
	printf("ADDU_S_PH");
case Mips::SUBU_PH:
	printf("SUBU_PH");
case Mips::SUBU_S_PH:
	printf("SUBU_S_PH");
case Mips::CMPGDU_EQ_QB:
	printf("CMPGDU_EQ_QB");
case Mips::CMPGDU_LT_QB:
	printf("CMPGDU_LT_QB");
case Mips::CMPGDU_LE_QB:
	printf("CMPGDU_LE_QB");
case Mips::ABSQ_S_QB:
	printf("ABSQ_S_QB");
case Mips::ADDUH_QB:
	printf("ADDUH_QB");
case Mips::ADDUH_R_QB:
	printf("ADDUH_R_QB");
case Mips::SUBUH_QB:
	printf("SUBUH_QB");
case Mips::SUBUH_R_QB:
	printf("SUBUH_R_QB");
case Mips::ADDQH_PH:
	printf("ADDQH_PH");
case Mips::ADDQH_R_PH:
	printf("ADDQH_R_PH");
case Mips::SUBQH_PH:
	printf("SUBQH_PH");
case Mips::SUBQH_R_PH:
	printf("SUBQH_R_PH");
case Mips::ADDQH_W:
	printf("ADDQH_W");
case Mips::ADDQH_R_W:
	printf("ADDQH_R_W");
case Mips::SUBQH_W:
	printf("SUBQH_W");
case Mips::SUBQH_R_W:
	printf("SUBQH_R_W");
case Mips::MUL_S_PH:
	printf("MUL_S_PH");
case Mips::MULQ_S_W:
	printf("MULQ_S_W");
case Mips::MULQ_RS_W:
	printf("MULQ_RS_W");
case Mips::MULQ_S_PH:
	printf("MULQ_S_PH");
case Mips::DPA_W_PH:
	printf("DPA_W_PH");
case Mips::DPS_W_PH:
	printf("DPS_W_PH");
case Mips::DPAQX_S_W_PH:
	printf("DPAQX_S_W_PH");
case Mips::DPAQX_SA_W_PH:
	printf("DPAQX_SA_W_PH");
case Mips::DPAX_W_PH:
	printf("DPAX_W_PH");
case Mips::DPSX_W_PH:
	printf("DPSX_W_PH");
case Mips::DPSQX_S_W_PH:
	printf("DPSQX_S_W_PH");
case Mips::DPSQX_SA_W_PH:
	printf("DPSQX_SA_W_PH");
case Mips::MULSA_W_PH:
	printf("MULSA_W_PH");
case Mips::PRECR_QB_PH:
	printf("PRECR_QB_PH");
case Mips::PRECR_SRA_PH_W:
	printf("PRECR_SRA_PH_W");
case Mips::PRECR_SRA_R_PH_W:
	printf("PRECR_SRA_R_PH_W");
case Mips::SHRAV_QB:
	printf("SHRAV_QB");
case Mips::SHRA_R_QB:
	printf("SHRA_R_QB");
case Mips::SHRAV_R_QB:
	printf("SHRAV_R_QB");
case Mips::SHRLV_PH:
	printf("SHRLV_PH");
case Mips::APPEND:
	printf("APPEND");
case Mips::BALIGN:
	printf("BALIGN");
case Mips::PREPEND:
	printf("PREPEND");
case Mips::PseudoMTLOHI_DSP:
	printf("PseudoMTLOHI_DSP");
case Mips::LDR_D:
	printf("LDR_D");
case Mips::LDR_W:
	printf("LDR_W");
case Mips::STR_D:
	printf("STR_D");
case Mips::STR_W:
	printf("STR_W");
case Mips::ADD_A_B:
	printf("ADD_A_B");
case Mips::ADD_A_H:
	printf("ADD_A_H");
case Mips::ADD_A_W:
	printf("ADD_A_W");
case Mips::ADD_A_D:
	printf("ADD_A_D");
case Mips::ADDS_A_B:
	printf("ADDS_A_B");
case Mips::ADDS_A_H:
	printf("ADDS_A_H");
case Mips::ADDS_A_W:
	printf("ADDS_A_W");
case Mips::ADDS_A_D:
	printf("ADDS_A_D");
case Mips::ADDS_S_B:
	printf("ADDS_S_B");
case Mips::ADDS_S_H:
	printf("ADDS_S_H");
case Mips::ADDS_S_W:
	printf("ADDS_S_W");
case Mips::ADDS_S_D:
	printf("ADDS_S_D");
case Mips::ADDS_U_B:
	printf("ADDS_U_B");
case Mips::ADDS_U_H:
	printf("ADDS_U_H");
case Mips::ADDS_U_W:
	printf("ADDS_U_W");
case Mips::ADDS_U_D:
	printf("ADDS_U_D");
case Mips::ADDV_B:
	printf("ADDV_B");
case Mips::ADDV_H:
	printf("ADDV_H");
case Mips::ADDV_W:
	printf("ADDV_W");
case Mips::ADDV_D:
	printf("ADDV_D");
case Mips::ADDVI_B:
	printf("ADDVI_B");
case Mips::ADDVI_H:
	printf("ADDVI_H");
case Mips::ADDVI_W:
	printf("ADDVI_W");
case Mips::ADDVI_D:
	printf("ADDVI_D");
case Mips::AND_V:
	printf("AND_V");
case Mips::AND_V_H_PSEUDO:
	printf("AND_V_H_PSEUDO");
case Mips::AND_V_W_PSEUDO:
	printf("AND_V_W_PSEUDO");
case Mips::AND_V_D_PSEUDO:
	printf("AND_V_D_PSEUDO");
case Mips::ANDI_B:
	printf("ANDI_B");
case Mips::ASUB_S_B:
	printf("ASUB_S_B");
case Mips::ASUB_S_H:
	printf("ASUB_S_H");
case Mips::ASUB_S_W:
	printf("ASUB_S_W");
case Mips::ASUB_S_D:
	printf("ASUB_S_D");
case Mips::ASUB_U_B:
	printf("ASUB_U_B");
case Mips::ASUB_U_H:
	printf("ASUB_U_H");
case Mips::ASUB_U_W:
	printf("ASUB_U_W");
case Mips::ASUB_U_D:
	printf("ASUB_U_D");
case Mips::AVE_S_B:
	printf("AVE_S_B");
case Mips::AVE_S_H:
	printf("AVE_S_H");
case Mips::AVE_S_W:
	printf("AVE_S_W");
case Mips::AVE_S_D:
	printf("AVE_S_D");
case Mips::AVE_U_B:
	printf("AVE_U_B");
case Mips::AVE_U_H:
	printf("AVE_U_H");
case Mips::AVE_U_W:
	printf("AVE_U_W");
case Mips::AVE_U_D:
	printf("AVE_U_D");
case Mips::AVER_S_B:
	printf("AVER_S_B");
case Mips::AVER_S_H:
	printf("AVER_S_H");
case Mips::AVER_S_W:
	printf("AVER_S_W");
case Mips::AVER_S_D:
	printf("AVER_S_D");
case Mips::AVER_U_B:
	printf("AVER_U_B");
case Mips::AVER_U_H:
	printf("AVER_U_H");
case Mips::AVER_U_W:
	printf("AVER_U_W");
case Mips::AVER_U_D:
	printf("AVER_U_D");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLRI_B:
	printf("BCLRI_B");
case Mips::BCLRI_H:
	printf("BCLRI_H");
case Mips::BCLRI_W:
	printf("BCLRI_W");
case Mips::BCLRI_D:
	printf("BCLRI_D");
case Mips::BINSL_B:
	printf("BINSL_B");
case Mips::BINSL_H:
	printf("BINSL_H");
case Mips::BINSL_W:
	printf("BINSL_W");
case Mips::BINSL_D:
	printf("BINSL_D");
case Mips::BINSLI_B:
	printf("BINSLI_B");
case Mips::BINSLI_H:
	printf("BINSLI_H");
case Mips::BINSLI_W:
	printf("BINSLI_W");
case Mips::BINSLI_D:
	printf("BINSLI_D");
case Mips::BINSR_B:
	printf("BINSR_B");
case Mips::BINSR_H:
	printf("BINSR_H");
case Mips::BINSR_W:
	printf("BINSR_W");
case Mips::BINSR_D:
	printf("BINSR_D");
case Mips::BINSRI_B:
	printf("BINSRI_B");
case Mips::BINSRI_H:
	printf("BINSRI_H");
case Mips::BINSRI_W:
	printf("BINSRI_W");
case Mips::BINSRI_D:
	printf("BINSRI_D");
case Mips::BMNZ_V:
	printf("BMNZ_V");
case Mips::BMNZI_B:
	printf("BMNZI_B");
case Mips::BMZ_V:
	printf("BMZ_V");
case Mips::BMZI_B:
	printf("BMZI_B");
case Mips::BNEG_B:
	printf("BNEG_B");
case Mips::BNEG_H:
	printf("BNEG_H");
case Mips::BNEG_W:
	printf("BNEG_W");
case Mips::BNEG_D:
	printf("BNEG_D");
case Mips::BNEGI_B:
	printf("BNEGI_B");
case Mips::BNEGI_H:
	printf("BNEGI_H");
case Mips::BNEGI_W:
	printf("BNEGI_W");
case Mips::BNEGI_D:
	printf("BNEGI_D");
case Mips::BSEL_V:
	printf("BSEL_V");
case Mips::BSEL_H_PSEUDO:
	printf("BSEL_H_PSEUDO");
case Mips::BSEL_W_PSEUDO:
	printf("BSEL_W_PSEUDO");
case Mips::BSEL_D_PSEUDO:
	printf("BSEL_D_PSEUDO");
case Mips::BSEL_FW_PSEUDO:
	printf("BSEL_FW_PSEUDO");
case Mips::BSEL_FD_PSEUDO:
	printf("BSEL_FD_PSEUDO");
case Mips::BSELI_B:
	printf("BSELI_B");
case Mips::BSET_B:
	printf("BSET_B");
case Mips::BSET_H:
	printf("BSET_H");
case Mips::BSET_W:
	printf("BSET_W");
case Mips::BSET_D:
	printf("BSET_D");
case Mips::BSETI_B:
	printf("BSETI_B");
case Mips::BSETI_H:
	printf("BSETI_H");
case Mips::BSETI_W:
	printf("BSETI_W");
case Mips::BSETI_D:
	printf("BSETI_D");
case Mips::CEQ_B:
	printf("CEQ_B");
case Mips::CEQ_H:
	printf("CEQ_H");
case Mips::CEQ_W:
	printf("CEQ_W");
case Mips::CEQ_D:
	printf("CEQ_D");
case Mips::CEQI_B:
	printf("CEQI_B");
case Mips::CEQI_H:
	printf("CEQI_H");
case Mips::CEQI_W:
	printf("CEQI_W");
case Mips::CEQI_D:
	printf("CEQI_D");
case Mips::CLE_S_B:
	printf("CLE_S_B");
case Mips::CLE_S_H:
	printf("CLE_S_H");
case Mips::CLE_S_W:
	printf("CLE_S_W");
case Mips::CLE_S_D:
	printf("CLE_S_D");
case Mips::CLE_U_B:
	printf("CLE_U_B");
case Mips::CLE_U_H:
	printf("CLE_U_H");
case Mips::CLE_U_W:
	printf("CLE_U_W");
case Mips::CLE_U_D:
	printf("CLE_U_D");
case Mips::CLEI_S_B:
	printf("CLEI_S_B");
case Mips::CLEI_S_H:
	printf("CLEI_S_H");
case Mips::CLEI_S_W:
	printf("CLEI_S_W");
case Mips::CLEI_S_D:
	printf("CLEI_S_D");
case Mips::CLEI_U_B:
	printf("CLEI_U_B");
case Mips::CLEI_U_H:
	printf("CLEI_U_H");
case Mips::CLEI_U_W:
	printf("CLEI_U_W");
case Mips::CLEI_U_D:
	printf("CLEI_U_D");
case Mips::CLT_S_B:
	printf("CLT_S_B");
case Mips::CLT_S_H:
	printf("CLT_S_H");
case Mips::CLT_S_W:
	printf("CLT_S_W");
case Mips::CLT_S_D:
	printf("CLT_S_D");
case Mips::CLT_U_B:
	printf("CLT_U_B");
case Mips::CLT_U_H:
	printf("CLT_U_H");
case Mips::CLT_U_W:
	printf("CLT_U_W");
case Mips::CLT_U_D:
	printf("CLT_U_D");
case Mips::CLTI_S_B:
	printf("CLTI_S_B");
case Mips::CLTI_S_H:
	printf("CLTI_S_H");
case Mips::CLTI_S_W:
	printf("CLTI_S_W");
case Mips::CLTI_S_D:
	printf("CLTI_S_D");
case Mips::CLTI_U_B:
	printf("CLTI_U_B");
case Mips::CLTI_U_H:
	printf("CLTI_U_H");
case Mips::CLTI_U_W:
	printf("CLTI_U_W");
case Mips::CLTI_U_D:
	printf("CLTI_U_D");
case Mips::COPY_S_B:
	printf("COPY_S_B");
case Mips::COPY_S_H:
	printf("COPY_S_H");
case Mips::COPY_S_W:
	printf("COPY_S_W");
case Mips::COPY_S_D:
	printf("COPY_S_D");
case Mips::COPY_U_B:
	printf("COPY_U_B");
case Mips::COPY_U_H:
	printf("COPY_U_H");
case Mips::COPY_U_W:
	printf("COPY_U_W");
case Mips::COPY_FW_PSEUDO:
	printf("COPY_FW_PSEUDO");
case Mips::COPY_FD_PSEUDO:
	printf("COPY_FD_PSEUDO");
case Mips::DIV_S_B:
	printf("DIV_S_B");
case Mips::DIV_S_H:
	printf("DIV_S_H");
case Mips::DIV_S_W:
	printf("DIV_S_W");
case Mips::DIV_S_D:
	printf("DIV_S_D");
case Mips::DIV_U_B:
	printf("DIV_U_B");
case Mips::DIV_U_H:
	printf("DIV_U_H");
case Mips::DIV_U_W:
	printf("DIV_U_W");
case Mips::DIV_U_D:
	printf("DIV_U_D");
case Mips::DOTP_S_H:
	printf("DOTP_S_H");
case Mips::DOTP_S_W:
	printf("DOTP_S_W");
case Mips::DOTP_S_D:
	printf("DOTP_S_D");
case Mips::DOTP_U_H:
	printf("DOTP_U_H");
case Mips::DOTP_U_W:
	printf("DOTP_U_W");
case Mips::DOTP_U_D:
	printf("DOTP_U_D");
case Mips::DPADD_S_H:
	printf("DPADD_S_H");
case Mips::DPADD_S_W:
	printf("DPADD_S_W");
case Mips::DPADD_S_D:
	printf("DPADD_S_D");
case Mips::DPADD_U_H:
	printf("DPADD_U_H");
case Mips::DPADD_U_W:
	printf("DPADD_U_W");
case Mips::DPADD_U_D:
	printf("DPADD_U_D");
case Mips::DPSUB_S_H:
	printf("DPSUB_S_H");
case Mips::DPSUB_S_W:
	printf("DPSUB_S_W");
case Mips::DPSUB_S_D:
	printf("DPSUB_S_D");
case Mips::DPSUB_U_H:
	printf("DPSUB_U_H");
case Mips::DPSUB_U_W:
	printf("DPSUB_U_W");
case Mips::DPSUB_U_D:
	printf("DPSUB_U_D");
case Mips::FADD_W:
	printf("FADD_W");
case Mips::FADD_D:
	printf("FADD_D");
case Mips::FCAF_W:
	printf("FCAF_W");
case Mips::FCAF_D:
	printf("FCAF_D");
case Mips::FCEQ_W:
	printf("FCEQ_W");
case Mips::FCEQ_D:
	printf("FCEQ_D");
case Mips::FCLE_W:
	printf("FCLE_W");
case Mips::FCLE_D:
	printf("FCLE_D");
case Mips::FCLT_W:
	printf("FCLT_W");
case Mips::FCLT_D:
	printf("FCLT_D");
case Mips::FCLASS_W:
	printf("FCLASS_W");
case Mips::FCLASS_D:
	printf("FCLASS_D");
case Mips::FCNE_W:
	printf("FCNE_W");
case Mips::FCNE_D:
	printf("FCNE_D");
case Mips::FCOR_W:
	printf("FCOR_W");
case Mips::FCOR_D:
	printf("FCOR_D");
case Mips::FCUEQ_W:
	printf("FCUEQ_W");
case Mips::FCUEQ_D:
	printf("FCUEQ_D");
case Mips::FCULE_W:
	printf("FCULE_W");
case Mips::FCULE_D:
	printf("FCULE_D");
case Mips::FCULT_W:
	printf("FCULT_W");
case Mips::FCULT_D:
	printf("FCULT_D");
case Mips::FCUN_W:
	printf("FCUN_W");
case Mips::FCUN_D:
	printf("FCUN_D");
case Mips::FCUNE_W:
	printf("FCUNE_W");
case Mips::FCUNE_D:
	printf("FCUNE_D");
case Mips::FDIV_W:
	printf("FDIV_W");
case Mips::FDIV_D:
	printf("FDIV_D");
case Mips::FEXDO_H:
	printf("FEXDO_H");
case Mips::FEXDO_W:
	printf("FEXDO_W");
case Mips::FEXP2_W:
	printf("FEXP2_W");
case Mips::FEXP2_D:
	printf("FEXP2_D");
case Mips::FEXP2_W_1_PSEUDO:
	printf("FEXP2_W_1_PSEUDO");
case Mips::FEXP2_D_1_PSEUDO:
	printf("FEXP2_D_1_PSEUDO");
case Mips::FEXUPL_W:
	printf("FEXUPL_W");
case Mips::FEXUPL_D:
	printf("FEXUPL_D");
case Mips::FEXUPR_W:
	printf("FEXUPR_W");
case Mips::FEXUPR_D:
	printf("FEXUPR_D");
case Mips::FFINT_S_W:
	printf("FFINT_S_W");
case Mips::FFINT_S_D:
	printf("FFINT_S_D");
case Mips::FFINT_U_W:
	printf("FFINT_U_W");
case Mips::FFINT_U_D:
	printf("FFINT_U_D");
case Mips::FFQL_W:
	printf("FFQL_W");
case Mips::FFQL_D:
	printf("FFQL_D");
case Mips::FFQR_W:
	printf("FFQR_W");
case Mips::FFQR_D:
	printf("FFQR_D");
case Mips::FILL_B:
	printf("FILL_B");
case Mips::FILL_H:
	printf("FILL_H");
case Mips::FILL_W:
	printf("FILL_W");
case Mips::FILL_D:
	printf("FILL_D");
case Mips::FILL_FW_PSEUDO:
	printf("FILL_FW_PSEUDO");
case Mips::FILL_FD_PSEUDO:
	printf("FILL_FD_PSEUDO");
case Mips::FLOG2_W:
	printf("FLOG2_W");
case Mips::FLOG2_D:
	printf("FLOG2_D");
case Mips::FMADD_W:
	printf("FMADD_W");
case Mips::FMADD_D:
	printf("FMADD_D");
case Mips::FMAX_W:
	printf("FMAX_W");
case Mips::FMAX_D:
	printf("FMAX_D");
case Mips::FMAX_A_W:
	printf("FMAX_A_W");
case Mips::FMAX_A_D:
	printf("FMAX_A_D");
case Mips::FMIN_W:
	printf("FMIN_W");
case Mips::FMIN_D:
	printf("FMIN_D");
case Mips::FMIN_A_W:
	printf("FMIN_A_W");
case Mips::FMIN_A_D:
	printf("FMIN_A_D");
case Mips::FMSUB_W:
	printf("FMSUB_W");
case Mips::FMSUB_D:
	printf("FMSUB_D");
case Mips::FMUL_W:
	printf("FMUL_W");
case Mips::FMUL_D:
	printf("FMUL_D");
case Mips::FRINT_W:
	printf("FRINT_W");
case Mips::FRINT_D:
	printf("FRINT_D");
case Mips::FRCP_W:
	printf("FRCP_W");
case Mips::FRCP_D:
	printf("FRCP_D");
case Mips::FRSQRT_W:
	printf("FRSQRT_W");
case Mips::FRSQRT_D:
	printf("FRSQRT_D");
case Mips::FSAF_W:
	printf("FSAF_W");
case Mips::FSAF_D:
	printf("FSAF_D");
case Mips::FSEQ_W:
	printf("FSEQ_W");
case Mips::FSEQ_D:
	printf("FSEQ_D");
case Mips::FSLE_W:
	printf("FSLE_W");
case Mips::FSLE_D:
	printf("FSLE_D");
case Mips::FSLT_W:
	printf("FSLT_W");
case Mips::FSLT_D:
	printf("FSLT_D");
case Mips::FSNE_W:
	printf("FSNE_W");
case Mips::FSNE_D:
	printf("FSNE_D");
case Mips::FSOR_W:
	printf("FSOR_W");
case Mips::FSOR_D:
	printf("FSOR_D");
case Mips::FSQRT_W:
	printf("FSQRT_W");
case Mips::FSQRT_D:
	printf("FSQRT_D");
case Mips::FSUB_W:
	printf("FSUB_W");
case Mips::FSUB_D:
	printf("FSUB_D");
case Mips::FSUEQ_W:
	printf("FSUEQ_W");
case Mips::FSUEQ_D:
	printf("FSUEQ_D");
case Mips::FSULE_W:
	printf("FSULE_W");
case Mips::FSULE_D:
	printf("FSULE_D");
case Mips::FSULT_W:
	printf("FSULT_W");
case Mips::FSULT_D:
	printf("FSULT_D");
case Mips::FSUN_W:
	printf("FSUN_W");
case Mips::FSUN_D:
	printf("FSUN_D");
case Mips::FSUNE_W:
	printf("FSUNE_W");
case Mips::FSUNE_D:
	printf("FSUNE_D");
case Mips::FTINT_S_W:
	printf("FTINT_S_W");
case Mips::FTINT_S_D:
	printf("FTINT_S_D");
case Mips::FTINT_U_W:
	printf("FTINT_U_W");
case Mips::FTINT_U_D:
	printf("FTINT_U_D");
case Mips::FTQ_H:
	printf("FTQ_H");
case Mips::FTQ_W:
	printf("FTQ_W");
case Mips::FTRUNC_S_W:
	printf("FTRUNC_S_W");
case Mips::FTRUNC_S_D:
	printf("FTRUNC_S_D");
case Mips::FTRUNC_U_W:
	printf("FTRUNC_U_W");
case Mips::FTRUNC_U_D:
	printf("FTRUNC_U_D");
case Mips::HADD_S_H:
	printf("HADD_S_H");
case Mips::HADD_S_W:
	printf("HADD_S_W");
case Mips::HADD_S_D:
	printf("HADD_S_D");
case Mips::HADD_U_H:
	printf("HADD_U_H");
case Mips::HADD_U_W:
	printf("HADD_U_W");
case Mips::HADD_U_D:
	printf("HADD_U_D");
case Mips::HSUB_S_H:
	printf("HSUB_S_H");
case Mips::HSUB_S_W:
	printf("HSUB_S_W");
case Mips::HSUB_S_D:
	printf("HSUB_S_D");
case Mips::HSUB_U_H:
	printf("HSUB_U_H");
case Mips::HSUB_U_W:
	printf("HSUB_U_W");
case Mips::HSUB_U_D:
	printf("HSUB_U_D");
case Mips::ILVEV_B:
	printf("ILVEV_B");
case Mips::ILVEV_H:
	printf("ILVEV_H");
case Mips::ILVEV_W:
	printf("ILVEV_W");
case Mips::ILVEV_D:
	printf("ILVEV_D");
case Mips::ILVL_B:
	printf("ILVL_B");
case Mips::ILVL_H:
	printf("ILVL_H");
case Mips::ILVL_W:
	printf("ILVL_W");
case Mips::ILVL_D:
	printf("ILVL_D");
case Mips::ILVOD_B:
	printf("ILVOD_B");
case Mips::ILVOD_H:
	printf("ILVOD_H");
case Mips::ILVOD_W:
	printf("ILVOD_W");
case Mips::ILVOD_D:
	printf("ILVOD_D");
case Mips::ILVR_B:
	printf("ILVR_B");
case Mips::ILVR_H:
	printf("ILVR_H");
case Mips::ILVR_W:
	printf("ILVR_W");
case Mips::ILVR_D:
	printf("ILVR_D");
case Mips::INSERT_B:
	printf("INSERT_B");
case Mips::INSERT_H:
	printf("INSERT_H");
case Mips::INSERT_W:
	printf("INSERT_W");
case Mips::INSERT_D:
	printf("INSERT_D");
case Mips::INSVE_B:
	printf("INSVE_B");
case Mips::INSVE_H:
	printf("INSVE_H");
case Mips::INSVE_W:
	printf("INSVE_W");
case Mips::INSVE_D:
	printf("INSVE_D");
case Mips::INSERT_FW_PSEUDO:
	printf("INSERT_FW_PSEUDO");
case Mips::INSERT_FD_PSEUDO:
	printf("INSERT_FD_PSEUDO");
case Mips::INSERT_B_VIDX_PSEUDO:
	printf("INSERT_B_VIDX_PSEUDO");
case Mips::INSERT_H_VIDX_PSEUDO:
	printf("INSERT_H_VIDX_PSEUDO");
case Mips::INSERT_W_VIDX_PSEUDO:
	printf("INSERT_W_VIDX_PSEUDO");
case Mips::INSERT_D_VIDX_PSEUDO:
	printf("INSERT_D_VIDX_PSEUDO");
case Mips::INSERT_FW_VIDX_PSEUDO:
	printf("INSERT_FW_VIDX_PSEUDO");
case Mips::INSERT_FD_VIDX_PSEUDO:
	printf("INSERT_FD_VIDX_PSEUDO");
case Mips::INSERT_B_VIDX64_PSEUDO:
	printf("INSERT_B_VIDX64_PSEUDO");
case Mips::INSERT_H_VIDX64_PSEUDO:
	printf("INSERT_H_VIDX64_PSEUDO");
case Mips::INSERT_W_VIDX64_PSEUDO:
	printf("INSERT_W_VIDX64_PSEUDO");
case Mips::INSERT_D_VIDX64_PSEUDO:
	printf("INSERT_D_VIDX64_PSEUDO");
case Mips::INSERT_FW_VIDX64_PSEUDO:
	printf("INSERT_FW_VIDX64_PSEUDO");
case Mips::INSERT_FD_VIDX64_PSEUDO:
	printf("INSERT_FD_VIDX64_PSEUDO");
case Mips::LD_B:
	printf("LD_B");
case Mips::LD_H:
	printf("LD_H");
case Mips::LD_W:
	printf("LD_W");
case Mips::LD_D:
	printf("LD_D");
case Mips::LSA:
	printf("LSA");
case Mips::DLSA:
	printf("DLSA");
case Mips::MADD_Q_H:
	printf("MADD_Q_H");
case Mips::MADD_Q_W:
	printf("MADD_Q_W");
case Mips::MADDR_Q_H:
	printf("MADDR_Q_H");
case Mips::MADDR_Q_W:
	printf("MADDR_Q_W");
case Mips::MADDV_B:
	printf("MADDV_B");
case Mips::MADDV_H:
	printf("MADDV_H");
case Mips::MADDV_W:
	printf("MADDV_W");
case Mips::MADDV_D:
	printf("MADDV_D");
case Mips::MAX_A_B:
	printf("MAX_A_B");
case Mips::MAX_A_H:
	printf("MAX_A_H");
case Mips::MAX_A_W:
	printf("MAX_A_W");
case Mips::MAX_A_D:
	printf("MAX_A_D");
case Mips::MAX_S_B:
	printf("MAX_S_B");
case Mips::MAX_S_H:
	printf("MAX_S_H");
case Mips::MAX_S_W:
	printf("MAX_S_W");
case Mips::MAX_S_D:
	printf("MAX_S_D");
case Mips::MAX_U_B:
	printf("MAX_U_B");
case Mips::MAX_U_H:
	printf("MAX_U_H");
case Mips::MAX_U_W:
	printf("MAX_U_W");
case Mips::MAX_U_D:
	printf("MAX_U_D");
case Mips::MAXI_S_B:
	printf("MAXI_S_B");
case Mips::MAXI_S_H:
	printf("MAXI_S_H");
case Mips::MAXI_S_W:
	printf("MAXI_S_W");
case Mips::MAXI_S_D:
	printf("MAXI_S_D");
case Mips::MAXI_U_B:
	printf("MAXI_U_B");
case Mips::MAXI_U_H:
	printf("MAXI_U_H");
case Mips::MAXI_U_W:
	printf("MAXI_U_W");
case Mips::MAXI_U_D:
	printf("MAXI_U_D");
case Mips::MIN_A_B:
	printf("MIN_A_B");
case Mips::MIN_A_H:
	printf("MIN_A_H");
case Mips::MIN_A_W:
	printf("MIN_A_W");
case Mips::MIN_A_D:
	printf("MIN_A_D");
case Mips::MIN_S_B:
	printf("MIN_S_B");
case Mips::MIN_S_H:
	printf("MIN_S_H");
case Mips::MIN_S_W:
	printf("MIN_S_W");
case Mips::MIN_S_D:
	printf("MIN_S_D");
case Mips::MIN_U_B:
	printf("MIN_U_B");
case Mips::MIN_U_H:
	printf("MIN_U_H");
case Mips::MIN_U_W:
	printf("MIN_U_W");
case Mips::MIN_U_D:
	printf("MIN_U_D");
case Mips::MINI_S_B:
	printf("MINI_S_B");
case Mips::MINI_S_H:
	printf("MINI_S_H");
case Mips::MINI_S_W:
	printf("MINI_S_W");
case Mips::MINI_S_D:
	printf("MINI_S_D");
case Mips::MINI_U_B:
	printf("MINI_U_B");
case Mips::MINI_U_H:
	printf("MINI_U_H");
case Mips::MINI_U_W:
	printf("MINI_U_W");
case Mips::MINI_U_D:
	printf("MINI_U_D");
case Mips::MOD_S_B:
	printf("MOD_S_B");
case Mips::MOD_S_H:
	printf("MOD_S_H");
case Mips::MOD_S_W:
	printf("MOD_S_W");
case Mips::MOD_S_D:
	printf("MOD_S_D");
case Mips::MOD_U_B:
	printf("MOD_U_B");
case Mips::MOD_U_H:
	printf("MOD_U_H");
case Mips::MOD_U_W:
	printf("MOD_U_W");
case Mips::MOD_U_D:
	printf("MOD_U_D");
case Mips::MSUB_Q_H:
	printf("MSUB_Q_H");
case Mips::MSUB_Q_W:
	printf("MSUB_Q_W");
case Mips::MSUBR_Q_H:
	printf("MSUBR_Q_H");
case Mips::MSUBR_Q_W:
	printf("MSUBR_Q_W");
case Mips::MSUBV_B:
	printf("MSUBV_B");
case Mips::MSUBV_H:
	printf("MSUBV_H");
case Mips::MSUBV_W:
	printf("MSUBV_W");
case Mips::MSUBV_D:
	printf("MSUBV_D");
case Mips::MUL_Q_H:
	printf("MUL_Q_H");
case Mips::MUL_Q_W:
	printf("MUL_Q_W");
case Mips::MULR_Q_H:
	printf("MULR_Q_H");
case Mips::MULR_Q_W:
	printf("MULR_Q_W");
case Mips::MULV_B:
	printf("MULV_B");
case Mips::MULV_H:
	printf("MULV_H");
case Mips::MULV_W:
	printf("MULV_W");
case Mips::MULV_D:
	printf("MULV_D");
case Mips::NLOC_B:
	printf("NLOC_B");
case Mips::NLOC_H:
	printf("NLOC_H");
case Mips::NLOC_W:
	printf("NLOC_W");
case Mips::NLOC_D:
	printf("NLOC_D");
case Mips::NLZC_B:
	printf("NLZC_B");
case Mips::NLZC_H:
	printf("NLZC_H");
case Mips::NLZC_W:
	printf("NLZC_W");
case Mips::NLZC_D:
	printf("NLZC_D");
case Mips::NOR_V:
	printf("NOR_V");
case Mips::NOR_V_H_PSEUDO:
	printf("NOR_V_H_PSEUDO");
case Mips::NOR_V_W_PSEUDO:
	printf("NOR_V_W_PSEUDO");
case Mips::NOR_V_D_PSEUDO:
	printf("NOR_V_D_PSEUDO");
case Mips::NORI_B:
	printf("NORI_B");
case Mips::OR_V:
	printf("OR_V");
case Mips::OR_V_H_PSEUDO:
	printf("OR_V_H_PSEUDO");
case Mips::OR_V_W_PSEUDO:
	printf("OR_V_W_PSEUDO");
case Mips::OR_V_D_PSEUDO:
	printf("OR_V_D_PSEUDO");
case Mips::ORI_B:
	printf("ORI_B");
case Mips::PCKEV_B:
	printf("PCKEV_B");
case Mips::PCKEV_H:
	printf("PCKEV_H");
case Mips::PCKEV_W:
	printf("PCKEV_W");
case Mips::PCKEV_D:
	printf("PCKEV_D");
case Mips::PCKOD_B:
	printf("PCKOD_B");
case Mips::PCKOD_H:
	printf("PCKOD_H");
case Mips::PCKOD_W:
	printf("PCKOD_W");
case Mips::PCKOD_D:
	printf("PCKOD_D");
case Mips::PCNT_B:
	printf("PCNT_B");
case Mips::PCNT_H:
	printf("PCNT_H");
case Mips::PCNT_W:
	printf("PCNT_W");
case Mips::PCNT_D:
	printf("PCNT_D");
case Mips::SAT_S_B:
	printf("SAT_S_B");
case Mips::SAT_S_H:
	printf("SAT_S_H");
case Mips::SAT_S_W:
	printf("SAT_S_W");
case Mips::SAT_S_D:
	printf("SAT_S_D");
case Mips::SAT_U_B:
	printf("SAT_U_B");
case Mips::SAT_U_H:
	printf("SAT_U_H");
case Mips::SAT_U_W:
	printf("SAT_U_W");
case Mips::SAT_U_D:
	printf("SAT_U_D");
case Mips::SHF_B:
	printf("SHF_B");
case Mips::SHF_H:
	printf("SHF_H");
case Mips::SHF_W:
	printf("SHF_W");
case Mips::SLD_B:
	printf("SLD_B");
case Mips::SLD_H:
	printf("SLD_H");
case Mips::SLD_W:
	printf("SLD_W");
case Mips::SLD_D:
	printf("SLD_D");
case Mips::SLDI_B:
	printf("SLDI_B");
case Mips::SLDI_H:
	printf("SLDI_H");
case Mips::SLDI_W:
	printf("SLDI_W");
case Mips::SLDI_D:
	printf("SLDI_D");
case Mips::SLL_B:
	printf("SLL_B");
case Mips::SLL_H:
	printf("SLL_H");
case Mips::SLL_W:
	printf("SLL_W");
case Mips::SLL_D:
	printf("SLL_D");
case Mips::SLLI_B:
	printf("SLLI_B");
case Mips::SLLI_H:
	printf("SLLI_H");
case Mips::SLLI_W:
	printf("SLLI_W");
case Mips::SLLI_D:
	printf("SLLI_D");
case Mips::SPLAT_B:
	printf("SPLAT_B");
case Mips::SPLAT_H:
	printf("SPLAT_H");
case Mips::SPLAT_W:
	printf("SPLAT_W");
case Mips::SPLAT_D:
	printf("SPLAT_D");
case Mips::SPLATI_B:
	printf("SPLATI_B");
case Mips::SPLATI_H:
	printf("SPLATI_H");
case Mips::SPLATI_W:
	printf("SPLATI_W");
case Mips::SPLATI_D:
	printf("SPLATI_D");
case Mips::SRA_B:
	printf("SRA_B");
case Mips::SRA_H:
	printf("SRA_H");
case Mips::SRA_W:
	printf("SRA_W");
case Mips::SRA_D:
	printf("SRA_D");
case Mips::SRAI_B:
	printf("SRAI_B");
case Mips::SRAI_H:
	printf("SRAI_H");
case Mips::SRAI_W:
	printf("SRAI_W");
case Mips::SRAI_D:
	printf("SRAI_D");
case Mips::SRAR_B:
	printf("SRAR_B");
case Mips::SRAR_H:
	printf("SRAR_H");
case Mips::SRAR_W:
	printf("SRAR_W");
case Mips::SRAR_D:
	printf("SRAR_D");
case Mips::SRARI_B:
	printf("SRARI_B");
case Mips::SRARI_H:
	printf("SRARI_H");
case Mips::SRARI_W:
	printf("SRARI_W");
case Mips::SRARI_D:
	printf("SRARI_D");
case Mips::SRL_B:
	printf("SRL_B");
case Mips::SRL_H:
	printf("SRL_H");
case Mips::SRL_W:
	printf("SRL_W");
case Mips::SRL_D:
	printf("SRL_D");
case Mips::SRLI_B:
	printf("SRLI_B");
case Mips::SRLI_H:
	printf("SRLI_H");
case Mips::SRLI_W:
	printf("SRLI_W");
case Mips::SRLI_D:
	printf("SRLI_D");
case Mips::SRLR_B:
	printf("SRLR_B");
case Mips::SRLR_H:
	printf("SRLR_H");
case Mips::SRLR_W:
	printf("SRLR_W");
case Mips::SRLR_D:
	printf("SRLR_D");
case Mips::SRLRI_B:
	printf("SRLRI_B");
case Mips::SRLRI_H:
	printf("SRLRI_H");
case Mips::SRLRI_W:
	printf("SRLRI_W");
case Mips::SRLRI_D:
	printf("SRLRI_D");
case Mips::ST_B:
	printf("ST_B");
case Mips::ST_H:
	printf("ST_H");
case Mips::ST_W:
	printf("ST_W");
case Mips::ST_D:
	printf("ST_D");
case Mips::SUBS_S_B:
	printf("SUBS_S_B");
case Mips::SUBS_S_H:
	printf("SUBS_S_H");
case Mips::SUBS_S_W:
	printf("SUBS_S_W");
case Mips::SUBS_S_D:
	printf("SUBS_S_D");
case Mips::SUBS_U_B:
	printf("SUBS_U_B");
case Mips::SUBS_U_H:
	printf("SUBS_U_H");
case Mips::SUBS_U_W:
	printf("SUBS_U_W");
case Mips::SUBS_U_D:
	printf("SUBS_U_D");
case Mips::SUBSUS_U_B:
	printf("SUBSUS_U_B");
case Mips::SUBSUS_U_H:
	printf("SUBSUS_U_H");
case Mips::SUBSUS_U_W:
	printf("SUBSUS_U_W");
case Mips::SUBSUS_U_D:
	printf("SUBSUS_U_D");
case Mips::SUBSUU_S_B:
	printf("SUBSUU_S_B");
case Mips::SUBSUU_S_H:
	printf("SUBSUU_S_H");
case Mips::SUBSUU_S_W:
	printf("SUBSUU_S_W");
case Mips::SUBSUU_S_D:
	printf("SUBSUU_S_D");
case Mips::SUBV_B:
	printf("SUBV_B");
case Mips::SUBV_H:
	printf("SUBV_H");
case Mips::SUBV_W:
	printf("SUBV_W");
case Mips::SUBV_D:
	printf("SUBV_D");
case Mips::SUBVI_B:
	printf("SUBVI_B");
case Mips::SUBVI_H:
	printf("SUBVI_H");
case Mips::SUBVI_W:
	printf("SUBVI_W");
case Mips::SUBVI_D:
	printf("SUBVI_D");
case Mips::VSHF_B:
	printf("VSHF_B");
case Mips::VSHF_H:
	printf("VSHF_H");
case Mips::VSHF_W:
	printf("VSHF_W");
case Mips::VSHF_D:
	printf("VSHF_D");
case Mips::XOR_V:
	printf("XOR_V");
case Mips::XOR_V_H_PSEUDO:
	printf("XOR_V_H_PSEUDO");
case Mips::XOR_V_W_PSEUDO:
	printf("XOR_V_W_PSEUDO");
case Mips::XOR_V_D_PSEUDO:
	printf("XOR_V_D_PSEUDO");
case Mips::XORI_B:
	printf("XORI_B");
case Mips::FABS_W:
	printf("FABS_W");
case Mips::FABS_D:
	printf("FABS_D");
case Mips::SNZ_B_PSEUDO:
	printf("SNZ_B_PSEUDO");
case Mips::SNZ_H_PSEUDO:
	printf("SNZ_H_PSEUDO");
case Mips::SNZ_W_PSEUDO:
	printf("SNZ_W_PSEUDO");
case Mips::SNZ_D_PSEUDO:
	printf("SNZ_D_PSEUDO");
case Mips::SNZ_V_PSEUDO:
	printf("SNZ_V_PSEUDO");
case Mips::SZ_B_PSEUDO:
	printf("SZ_B_PSEUDO");
case Mips::SZ_H_PSEUDO:
	printf("SZ_H_PSEUDO");
case Mips::SZ_W_PSEUDO:
	printf("SZ_W_PSEUDO");
case Mips::SZ_D_PSEUDO:
	printf("SZ_D_PSEUDO");
case Mips::SZ_V_PSEUDO:
	printf("SZ_V_PSEUDO");
case Mips::ST_F16:
	printf("ST_F16");
case Mips::LD_F16:
	printf("LD_F16");
case Mips::MSA_FP_EXTEND_W_PSEUDO:
	printf("MSA_FP_EXTEND_W_PSEUDO");
case Mips::MSA_FP_ROUND_W_PSEUDO:
	printf("MSA_FP_ROUND_W_PSEUDO");
case Mips::MSA_FP_EXTEND_D_PSEUDO:
	printf("MSA_FP_EXTEND_D_PSEUDO");
case Mips::MSA_FP_ROUND_D_PSEUDO:
	printf("MSA_FP_ROUND_D_PSEUDO");
case Mips::ADDU16_MM:
	printf("ADDU16_MM");
case Mips::AND16_MM:
	printf("AND16_MM");
case Mips::NOT16_MM:
	printf("NOT16_MM");
case Mips::OR16_MM:
	printf("OR16_MM");
case Mips::SUBU16_MM:
	printf("SUBU16_MM");
case Mips::XOR16_MM:
	printf("XOR16_MM");
case Mips::JALR16_MM:
	printf("JALR16_MM");
case Mips::SLTi_MM:
	printf("SLTi_MM");
case Mips::SLTiu_MM:
	printf("SLTiu_MM");
case Mips::ORi_MM:
	printf("ORi_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::LEA_ADDiu_MM:
	printf("LEA_ADDiu_MM");
case Mips::ADDu_MM:
	printf("ADDu_MM");
case Mips::SUBu_MM:
	printf("SUBu_MM");
case Mips::MUL_MM:
	printf("MUL_MM");
case Mips::SLT_MM:
	printf("SLT_MM");
case Mips::SLTu_MM:
	printf("SLTu_MM");
case Mips::AND_MM:
	printf("AND_MM");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::XOR_MM:
	printf("XOR_MM");
case Mips::NOR_MM:
	printf("NOR_MM");
case Mips::ROTR_MM:
	printf("ROTR_MM");
case Mips::ROTRV_MM:
	printf("ROTRV_MM");
case Mips::LB_MM:
	printf("LB_MM");
case Mips::LBu_MM:
	printf("LBu_MM");
case Mips::LH_MM:
	printf("LH_MM");
case Mips::LHu_MM:
	printf("LHu_MM");
case Mips::SB_MM:
	printf("SB_MM");
case Mips::SH_MM:
	printf("SH_MM");
case Mips::LWLE_MM:
	printf("LWLE_MM");
case Mips::LWRE_MM:
	printf("LWRE_MM");
case Mips::SWLE_MM:
	printf("SWLE_MM");
case Mips::SWRE_MM:
	printf("SWRE_MM");
case Mips::LWL_MM:
	printf("LWL_MM");
case Mips::LWR_MM:
	printf("LWR_MM");
case Mips::SWL_MM:
	printf("SWL_MM");
case Mips::SWR_MM:
	printf("SWR_MM");
case Mips::MOVT_I_MM:
	printf("MOVT_I_MM");
case Mips::MOVF_I_MM:
	printf("MOVF_I_MM");
case Mips::CLZ_MM:
	printf("CLZ_MM");
case Mips::CLO_MM:
	printf("CLO_MM");
case Mips::SEB_MM:
	printf("SEB_MM");
case Mips::SEH_MM:
	printf("SEH_MM");
case Mips::EXT_MM:
	printf("EXT_MM");
case Mips::J_MM:
	printf("J_MM");
case Mips::JAL_MM:
	printf("JAL_MM");
case Mips::JALX_MM:
	printf("JALX_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BNE_MM:
	printf("BNE_MM");
case Mips::BGEZ_MM:
	printf("BGEZ_MM");
case Mips::BGTZ_MM:
	printf("BGTZ_MM");
case Mips::BLEZ_MM:
	printf("BLEZ_MM");
case Mips::BLTZ_MM:
	printf("BLTZ_MM");
case Mips::B_MM:
	printf("B_MM");
case Mips::SYNC_MM:
	printf("SYNC_MM");
case Mips::TRAP_MM:
	printf("TRAP_MM");
case Mips::PseudoMULT_MM:
	printf("PseudoMULT_MM");
case Mips::PseudoMULTu_MM:
	printf("PseudoMULTu_MM");
case Mips::PseudoMFHI_MM:
	printf("PseudoMFHI_MM");
case Mips::PseudoMFLO_MM:
	printf("PseudoMFLO_MM");
case Mips::PseudoMTLOHI_MM:
	printf("PseudoMTLOHI_MM");
case Mips::PseudoMADD_MM:
	printf("PseudoMADD_MM");
case Mips::PseudoMADDU_MM:
	printf("PseudoMADDU_MM");
case Mips::PseudoMSUB_MM:
	printf("PseudoMSUB_MM");
case Mips::PseudoMSUBU_MM:
	printf("PseudoMSUBU_MM");
case Mips::TAILCALLREG_MM:
	printf("TAILCALLREG_MM");
case Mips::PseudoIndirectBranch_MM:
	printf("PseudoIndirectBranch_MM");
case Mips::LWU_MM:
	printf("LWU_MM");
case Mips::SDIV_MM_Pseudo:
	printf("SDIV_MM_Pseudo");
case Mips::UDIV_MM_Pseudo:
	printf("UDIV_MM_Pseudo");
case Mips::FADD_S_MM:
	printf("FADD_S_MM");
case Mips::FDIV_S_MM:
	printf("FDIV_S_MM");
case Mips::FMUL_S_MM:
	printf("FMUL_S_MM");
case Mips::FSUB_S_MM:
	printf("FSUB_S_MM");
case Mips::FADD_D32_MM:
	printf("FADD_D32_MM");
case Mips::FADD_D64_MM:
	printf("FADD_D64_MM");
case Mips::FDIV_D32_MM:
	printf("FDIV_D32_MM");
case Mips::FDIV_D64_MM:
	printf("FDIV_D64_MM");
case Mips::FMUL_D32_MM:
	printf("FMUL_D32_MM");
case Mips::FMUL_D64_MM:
	printf("FMUL_D64_MM");
case Mips::FSUB_D32_MM:
	printf("FSUB_D32_MM");
case Mips::FSUB_D64_MM:
	printf("FSUB_D64_MM");
case Mips::LWXC1_MM:
	printf("LWXC1_MM");
case Mips::SWXC1_MM:
	printf("SWXC1_MM");
case Mips::FCMP_S32_MM:
	printf("FCMP_S32_MM");
case Mips::FCMP_D32_MM:
	printf("FCMP_D32_MM");
case Mips::BC1F_MM:
	printf("BC1F_MM");
case Mips::BC1T_MM:
	printf("BC1T_MM");
case Mips::FSQRT_D32_MM:
	printf("FSQRT_D32_MM");
case Mips::FSQRT_D64_MM:
	printf("FSQRT_D64_MM");
case Mips::FABS_D32_MM:
	printf("FABS_D32_MM");
case Mips::FABS_D64_MM:
	printf("FABS_D64_MM");
case Mips::FABS_S_MM:
	printf("FABS_S_MM");
case Mips::FNEG_S_MM:
	printf("FNEG_S_MM");
case Mips::FNEG_D32_MM:
	printf("FNEG_D32_MM");
case Mips::FNEG_D64_MM:
	printf("FNEG_D64_MM");
case Mips::MOVT_S_MM:
	printf("MOVT_S_MM");
case Mips::MOVF_S_MM:
	printf("MOVF_S_MM");
case Mips::MOVT_D32_MM:
	printf("MOVT_D32_MM");
case Mips::MOVF_D32_MM:
	printf("MOVF_D32_MM");
case Mips::MFC1_MM:
	printf("MFC1_MM");
case Mips::MTC1_MM:
	printf("MTC1_MM");
case Mips::FSQRT_S_MM:
	printf("FSQRT_S_MM");
case Mips::LDC1_MM:
	printf("LDC1_MM");
case Mips::SDC1_MM:
	printf("SDC1_MM");
case Mips::LWC1_MM:
	printf("LWC1_MM");
case Mips::SWC1_MM:
	printf("SWC1_MM");
case Mips::ADDIU_MMR6:
	printf("ADDIU_MMR6");
case Mips::AND_MMR6:
	printf("AND_MMR6");
case Mips::BC_MMR6:
	printf("BC_MMR6");
case Mips::DIV_MMR6:
	printf("DIV_MMR6");
case Mips::DIVU_MMR6:
	printf("DIVU_MMR6");
case Mips::JALRC16_MMR6:
	printf("JALRC16_MMR6");
case Mips::MTC1_MMR6:
	printf("MTC1_MMR6");
case Mips::MFC1_MMR6:
	printf("MFC1_MMR6");
case Mips::MOD_MMR6:
	printf("MOD_MMR6");
case Mips::MODU_MMR6:
	printf("MODU_MMR6");
case Mips::MUL_MMR6:
	printf("MUL_MMR6");
case Mips::MUH_MMR6:
	printf("MUH_MMR6");
case Mips::MUHU_MMR6:
	printf("MUHU_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::OR_MMR6:
	printf("OR_MMR6");
case Mips::ORI_MMR6:
	printf("ORI_MMR6");
case Mips::SYNC_MMR6:
	printf("SYNC_MMR6");
case Mips::XOR_MMR6:
	printf("XOR_MMR6");
case Mips::XORI_MMR6:
	printf("XORI_MMR6");
case Mips::FADD_S_MMR6:
	printf("FADD_S_MMR6");
case Mips::FSUB_S_MMR6:
	printf("FSUB_S_MMR6");
case Mips::FMUL_S_MMR6:
	printf("FMUL_S_MMR6");
case Mips::FDIV_S_MMR6:
	printf("FDIV_S_MMR6");
case Mips::FNEG_S_MMR6:
	printf("FNEG_S_MMR6");
case Mips::CMP_UN_S_MMR6:
	printf("CMP_UN_S_MMR6");
case Mips::CMP_EQ_S_MMR6:
	printf("CMP_EQ_S_MMR6");
case Mips::CMP_UEQ_S_MMR6:
	printf("CMP_UEQ_S_MMR6");
case Mips::CMP_LT_S_MMR6:
	printf("CMP_LT_S_MMR6");
case Mips::CMP_ULT_S_MMR6:
	printf("CMP_ULT_S_MMR6");
case Mips::CMP_LE_S_MMR6:
	printf("CMP_LE_S_MMR6");
case Mips::CMP_ULE_S_MMR6:
	printf("CMP_ULE_S_MMR6");
case Mips::CMP_UN_D_MMR6:
	printf("CMP_UN_D_MMR6");
case Mips::CMP_EQ_D_MMR6:
	printf("CMP_EQ_D_MMR6");
case Mips::CMP_UEQ_D_MMR6:
	printf("CMP_UEQ_D_MMR6");
case Mips::CMP_LT_D_MMR6:
	printf("CMP_LT_D_MMR6");
case Mips::CMP_ULT_D_MMR6:
	printf("CMP_ULT_D_MMR6");
case Mips::CMP_LE_D_MMR6:
	printf("CMP_LE_D_MMR6");
case Mips::CMP_ULE_D_MMR6:
	printf("CMP_ULE_D_MMR6");
case Mips::LW_MMR6:
	printf("LW_MMR6");
case Mips::ADDU16_MMR6:
	printf("ADDU16_MMR6");
case Mips::NOT16_MMR6:
	printf("NOT16_MMR6");
case Mips::SUBU16_MMR6:
	printf("SUBU16_MMR6");
case Mips::EXT_MMR6:
	printf("EXT_MMR6");
case Mips::INS_MMR6:
	printf("INS_MMR6");
case Mips::SEL_S_MMR6:
	printf("SEL_S_MMR6");
case Mips::SEL_D_MMR6:
	printf("SEL_D_MMR6");
case Mips::LDC1_D64_MMR6:
	printf("LDC1_D64_MMR6");
case Mips::SDC1_D64_MMR6:
	printf("SDC1_D64_MMR6");
case Mips::LDC2_MMR6:
	printf("LDC2_MMR6");
case Mips::SDC2_MMR6:
	printf("SDC2_MMR6");
case Mips::LWC2_MMR6:
	printf("LWC2_MMR6");
case Mips::SWC2_MMR6:
	printf("SWC2_MMR6");
case Mips::TAILCALLREG_MMR6:
	printf("TAILCALLREG_MMR6");
case Mips::PseudoIndirectBranch_MMR6:
	printf("PseudoIndirectBranch_MMR6");
case Mips::ADDQ_S_PH_MM:
	printf("ADDQ_S_PH_MM");
case Mips::ADDQ_S_W_MM:
	printf("ADDQ_S_W_MM");
case Mips::ADDU_S_QB_MM:
	printf("ADDU_S_QB_MM");
case Mips::DPAQ_S_W_PH_MM:
	printf("DPAQ_S_W_PH_MM");
case Mips::DPAQ_SA_L_W_MM:
	printf("DPAQ_SA_L_W_MM");
case Mips::DPAU_H_QBL_MM:
	printf("DPAU_H_QBL_MM");
case Mips::DPAU_H_QBR_MM:
	printf("DPAU_H_QBR_MM");
case Mips::ABSQ_S_PH_MM:
	printf("ABSQ_S_PH_MM");
case Mips::ABSQ_S_W_MM:
	printf("ABSQ_S_W_MM");
case Mips::INSV_MM:
	printf("INSV_MM");
case Mips::MADD_DSP_MM:
	printf("MADD_DSP_MM");
case Mips::MADDU_DSP_MM:
	printf("MADDU_DSP_MM");
case Mips::MSUB_DSP_MM:
	printf("MSUB_DSP_MM");
case Mips::MSUBU_DSP_MM:
	printf("MSUBU_DSP_MM");
case Mips::MULT_DSP_MM:
	printf("MULT_DSP_MM");
case Mips::MULTU_DSP_MM:
	printf("MULTU_DSP_MM");
case Mips::SHLL_S_PH_MM:
	printf("SHLL_S_PH_MM");
case Mips::SHLLV_PH_MM:
	printf("SHLLV_PH_MM");
case Mips::SHLLV_S_PH_MM:
	printf("SHLLV_S_PH_MM");
case Mips::SHLLV_QB_MM:
	printf("SHLLV_QB_MM");
case Mips::SHLLV_S_W_MM:
	printf("SHLLV_S_W_MM");
case Mips::SHLL_S_W_MM:
	printf("SHLL_S_W_MM");
case Mips::SHRA_R_PH_MM:
	printf("SHRA_R_PH_MM");
case Mips::SHRAV_PH_MM:
	printf("SHRAV_PH_MM");
case Mips::SHRAV_R_PH_MM:
	printf("SHRAV_R_PH_MM");
case Mips::SHRAV_R_W_MM:
	printf("SHRAV_R_W_MM");
case Mips::SHRA_R_W_MM:
	printf("SHRA_R_W_MM");
case Mips::SHRLV_QB_MM:
	printf("SHRLV_QB_MM");
case Mips::PRECEQ_W_PHL_MM:
	printf("PRECEQ_W_PHL_MM");
case Mips::PRECEQ_W_PHR_MM:
	printf("PRECEQ_W_PHR_MM");
case Mips::PRECEQU_PH_QBL_MM:
	printf("PRECEQU_PH_QBL_MM");
case Mips::PRECEQU_PH_QBLA_MM:
	printf("PRECEQU_PH_QBLA_MM");
case Mips::PRECEQU_PH_QBR_MM:
	printf("PRECEQU_PH_QBR_MM");
case Mips::PRECEQU_PH_QBRA_MM:
	printf("PRECEQU_PH_QBRA_MM");
case Mips::PRECEU_PH_QBL_MM:
	printf("PRECEU_PH_QBL_MM");
case Mips::PRECEU_PH_QBLA_MM:
	printf("PRECEU_PH_QBLA_MM");
case Mips::PRECEU_PH_QBR_MM:
	printf("PRECEU_PH_QBR_MM");
case Mips::PRECEU_PH_QBRA_MM:
	printf("PRECEU_PH_QBRA_MM");
case Mips::SUBQ_S_PH_MM:
	printf("SUBQ_S_PH_MM");
case Mips::SUBQ_S_W_MM:
	printf("SUBQ_S_W_MM");
case Mips::SUBU_S_QB_MM:
	printf("SUBU_S_QB_MM");
case Mips::DPSQ_S_W_PH_MM:
	printf("DPSQ_S_W_PH_MM");
case Mips::DPSQ_SA_L_W_MM:
	printf("DPSQ_SA_L_W_MM");
case Mips::DPSU_H_QBL_MM:
	printf("DPSU_H_QBL_MM");
case Mips::DPSU_H_QBR_MM:
	printf("DPSU_H_QBR_MM");
case Mips::MULEQ_S_W_PHL_MM:
	printf("MULEQ_S_W_PHL_MM");
case Mips::MULEQ_S_W_PHR_MM:
	printf("MULEQ_S_W_PHR_MM");
case Mips::MULEU_S_PH_QBL_MM:
	printf("MULEU_S_PH_QBL_MM");
case Mips::MULEU_S_PH_QBR_MM:
	printf("MULEU_S_PH_QBR_MM");
case Mips::MULQ_RS_PH_MM:
	printf("MULQ_RS_PH_MM");
case Mips::PRECRQ_PH_W_MM:
	printf("PRECRQ_PH_W_MM");
case Mips::PRECRQ_QB_PH_MM:
	printf("PRECRQ_QB_PH_MM");
case Mips::PRECRQU_S_QB_PH_MM:
	printf("PRECRQU_S_QB_PH_MM");
case Mips::PRECRQ_RS_PH_W_MM:
	printf("PRECRQ_RS_PH_W_MM");
case Mips::LBUX_MM:
	printf("LBUX_MM");
case Mips::LHX_MM:
	printf("LHX_MM");
case Mips::LWX_MM:
	printf("LWX_MM");
case Mips::MAQ_S_W_PHL_MM:
	printf("MAQ_S_W_PHL_MM");
case Mips::MAQ_SA_W_PHL_MM:
	printf("MAQ_SA_W_PHL_MM");
case Mips::MAQ_S_W_PHR_MM:
	printf("MAQ_S_W_PHR_MM");
case Mips::MAQ_SA_W_PHR_MM:
	printf("MAQ_SA_W_PHR_MM");
case Mips::MFHI_DSP_MM:
	printf("MFHI_DSP_MM");
case Mips::MFLO_DSP_MM:
	printf("MFLO_DSP_MM");
case Mips::RADDU_W_QB_MM:
	printf("RADDU_W_QB_MM");
case Mips::RDDSP_MM:
	printf("RDDSP_MM");
case Mips::REPL_PH_MM:
	printf("REPL_PH_MM");
case Mips::REPL_QB_MM:
	printf("REPL_QB_MM");
case Mips::REPLV_PH_MM:
	printf("REPLV_PH_MM");
case Mips::REPLV_QB_MM:
	printf("REPLV_QB_MM");
case Mips::MTHLIP_MM:
	printf("MTHLIP_MM");
case Mips::PACKRL_PH_MM:
	printf("PACKRL_PH_MM");
case Mips::PICK_PH_MM:
	printf("PICK_PH_MM");
case Mips::PICK_QB_MM:
	printf("PICK_QB_MM");
case Mips::SHILO_MM:
	printf("SHILO_MM");
case Mips::SHILOV_MM:
	printf("SHILOV_MM");
case Mips::WRDSP_MM:
	printf("WRDSP_MM");
case Mips::MODSUB_MM:
	printf("MODSUB_MM");
case Mips::MULSAQ_S_W_PH_MM:
	printf("MULSAQ_S_W_PH_MM");
case Mips::BITREV_MM:
	printf("BITREV_MM");
case Mips::CMP_EQ_PH_MM:
	printf("CMP_EQ_PH_MM");
case Mips::CMP_LT_PH_MM:
	printf("CMP_LT_PH_MM");
case Mips::CMP_LE_PH_MM:
	printf("CMP_LE_PH_MM");
case Mips::CMPGU_EQ_QB_MM:
	printf("CMPGU_EQ_QB_MM");
case Mips::CMPGU_LT_QB_MM:
	printf("CMPGU_LT_QB_MM");
case Mips::CMPGU_LE_QB_MM:
	printf("CMPGU_LE_QB_MM");
case Mips::CMPU_EQ_QB_MM:
	printf("CMPU_EQ_QB_MM");
case Mips::CMPU_LT_QB_MM:
	printf("CMPU_LT_QB_MM");
case Mips::CMPU_LE_QB_MM:
	printf("CMPU_LE_QB_MM");
case Mips::ABSQ_S_QB_MMR2:
	printf("ABSQ_S_QB_MMR2");
case Mips::ADDQH_PH_MMR2:
	printf("ADDQH_PH_MMR2");
case Mips::ADDQH_R_PH_MMR2:
	printf("ADDQH_R_PH_MMR2");
case Mips::ADDQH_W_MMR2:
	printf("ADDQH_W_MMR2");
case Mips::ADDQH_R_W_MMR2:
	printf("ADDQH_R_W_MMR2");
case Mips::ADDU_PH_MMR2:
	printf("ADDU_PH_MMR2");
case Mips::ADDU_S_PH_MMR2:
	printf("ADDU_S_PH_MMR2");
case Mips::ADDUH_QB_MMR2:
	printf("ADDUH_QB_MMR2");
case Mips::ADDUH_R_QB_MMR2:
	printf("ADDUH_R_QB_MMR2");
case Mips::DPA_W_PH_MMR2:
	printf("DPA_W_PH_MMR2");
case Mips::DPAQX_S_W_PH_MMR2:
	printf("DPAQX_S_W_PH_MMR2");
case Mips::DPAQX_SA_W_PH_MMR2:
	printf("DPAQX_SA_W_PH_MMR2");
case Mips::DPAX_W_PH_MMR2:
	printf("DPAX_W_PH_MMR2");
case Mips::SHRA_R_QB_MMR2:
	printf("SHRA_R_QB_MMR2");
case Mips::SHRAV_QB_MMR2:
	printf("SHRAV_QB_MMR2");
case Mips::SHRAV_R_QB_MMR2:
	printf("SHRAV_R_QB_MMR2");
case Mips::BALIGN_MMR2:
	printf("BALIGN_MMR2");
case Mips::CMPGDU_EQ_QB_MMR2:
	printf("CMPGDU_EQ_QB_MMR2");
case Mips::CMPGDU_LT_QB_MMR2:
	printf("CMPGDU_LT_QB_MMR2");
case Mips::CMPGDU_LE_QB_MMR2:
	printf("CMPGDU_LE_QB_MMR2");
case Mips::SHRLV_PH_MMR2:
	printf("SHRLV_PH_MMR2");
case Mips::SUBQH_PH_MMR2:
	printf("SUBQH_PH_MMR2");
case Mips::SUBQH_R_PH_MMR2:
	printf("SUBQH_R_PH_MMR2");
case Mips::SUBQH_W_MMR2:
	printf("SUBQH_W_MMR2");
case Mips::SUBQH_R_W_MMR2:
	printf("SUBQH_R_W_MMR2");
case Mips::SUBU_PH_MMR2:
	printf("SUBU_PH_MMR2");
case Mips::SUBU_S_PH_MMR2:
	printf("SUBU_S_PH_MMR2");
case Mips::SUBUH_QB_MMR2:
	printf("SUBUH_QB_MMR2");
case Mips::SUBUH_R_QB_MMR2:
	printf("SUBUH_R_QB_MMR2");
case Mips::DPS_W_PH_MMR2:
	printf("DPS_W_PH_MMR2");
case Mips::DPSQX_S_W_PH_MMR2:
	printf("DPSQX_S_W_PH_MMR2");
case Mips::DPSQX_SA_W_PH_MMR2:
	printf("DPSQX_SA_W_PH_MMR2");
case Mips::DPSX_W_PH_MMR2:
	printf("DPSX_W_PH_MMR2");
case Mips::MUL_S_PH_MMR2:
	printf("MUL_S_PH_MMR2");
case Mips::MULQ_RS_W_MMR2:
	printf("MULQ_RS_W_MMR2");
case Mips::MULQ_S_PH_MMR2:
	printf("MULQ_S_PH_MMR2");
case Mips::MULQ_S_W_MMR2:
	printf("MULQ_S_W_MMR2");
case Mips::PRECR_QB_PH_MMR2:
	printf("PRECR_QB_PH_MMR2");
case Mips::PRECR_SRA_PH_W_MMR2:
	printf("PRECR_SRA_PH_W_MMR2");
case Mips::PRECR_SRA_R_PH_W_MMR2:
	printf("PRECR_SRA_R_PH_W_MMR2");
case Mips::PREPEND_MMR2:
	printf("PREPEND_MMR2");
case Mips::APPEND_MMR2:
	printf("APPEND_MMR2");
case Mips::MULSA_W_PH_MMR2:
	printf("MULSA_W_PH_MMR2");
case Mips::ST_D:
	printf("ST_D");
case Mips::ST_H:
	printf("ST_H");
case Mips::ST_W:
	printf("ST_W");
case Mips::ORi:
	printf("ORi");
case Mips::LUi:
	printf("LUi");
case Mips::ORi:
	printf("ORi");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::SUBu:
	printf("SUBu");
case Mips::ADDu:
	printf("ADDu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::PseudoMFLO:
	printf("PseudoMFLO");
case Mips::SYNC:
	printf("SYNC");
case Mips::JAL:
	printf("JAL");
case Mips::TAILCALL:
	printf("TAILCALL");
case Mips::TAILCALL:
	printf("TAILCALL");
case Mips::LUi:
	printf("LUi");
case Mips::LUi:
	printf("LUi");
case Mips::LUi:
	printf("LUi");
case Mips::LUi:
	printf("LUi");
case Mips::LUi:
	printf("LUi");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::LUi:
	printf("LUi");
case Mips::LUi:
	printf("LUi");
case Mips::LUi:
	printf("LUi");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::NOR:
	printf("NOR");
case Mips::LBu:
	printf("LBu");
case Mips::LBu:
	printf("LBu");
case Mips::LHu:
	printf("LHu");
case Mips::SW:
	printf("SW");
case Mips::BNE:
	printf("BNE");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BNE:
	printf("BNE");
case Mips::BLEZ:
	printf("BLEZ");
case Mips::BGEZ:
	printf("BGEZ");
case Mips::SLTiu:
	printf("SLTiu");
case Mips::SLTu:
	printf("SLTu");
case Mips::SLTiu:
	printf("SLTiu");
case Mips::SLTu:
	printf("SLTu");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::SLT:
	printf("SLT");
case Mips::SLTu:
	printf("SLTu");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::ROTR:
	printf("ROTR");
case Mips::LBu:
	printf("LBu");
case Mips::LHu:
	printf("LHu");
case Mips::LB:
	printf("LB");
case Mips::LH:
	printf("LH");
case Mips::LW:
	printf("LW");
case Mips::LB:
	printf("LB");
case Mips::LH:
	printf("LH");
case Mips::LW:
	printf("LW");
case Mips::SB:
	printf("SB");
case Mips::SH:
	printf("SH");
case Mips::SW:
	printf("SW");
case Mips::MTC1:
	printf("MTC1");
case Mips::FNEG_S:
	printf("FNEG_S");
case Mips::PseudoCVT_S_W:
	printf("PseudoCVT_S_W");
case Mips::TRUNC_W_S:
	printf("TRUNC_W_S");
case Mips::MTC1_D64:
	printf("MTC1_D64");
case Mips::PseudoCVT_D32_W:
	printf("PseudoCVT_D32_W");
case Mips::TRUNC_W_D32:
	printf("TRUNC_W_D32");
case Mips::CVT_S_D32:
	printf("CVT_S_D32");
case Mips::CVT_D32_S:
	printf("CVT_D32_S");
case Mips::DMTC1:
	printf("DMTC1");
case Mips::FNEG_D64:
	printf("FNEG_D64");
case Mips::PseudoCVT_D64_W:
	printf("PseudoCVT_D64_W");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::PseudoCVT_D64_L:
	printf("PseudoCVT_D64_L");
case Mips::TRUNC_W_D64:
	printf("TRUNC_W_D64");
case Mips::TRUNC_L_S:
	printf("TRUNC_L_S");
case Mips::TRUNC_L_D64:
	printf("TRUNC_L_D64");
case Mips::CVT_S_D64:
	printf("CVT_S_D64");
case Mips::CVT_D64_S:
	printf("CVT_D64_S");
case Mips::NMADD_S:
	printf("NMADD_S");
case Mips::NMSUB_S:
	printf("NMSUB_S");
case Mips::NMADD_D32:
	printf("NMADD_D32");
case Mips::NMSUB_D32:
	printf("NMSUB_D32");
case Mips::NMADD_D64:
	printf("NMADD_D64");
case Mips::NMSUB_D64:
	printf("NMSUB_D64");
case Mips::LWC1:
	printf("LWC1");
case Mips::SWC1:
	printf("SWC1");
case Mips::LDC164:
	printf("LDC164");
case Mips::SDC164:
	printf("SDC164");
case Mips::LDC1:
	printf("LDC1");
case Mips::SDC1:
	printf("SDC1");
case Mips::ORi64:
	printf("ORi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::ORi64:
	printf("ORi64");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DSLL:
	printf("DSLL");
case Mips::ORi64:
	printf("ORi64");
case Mips::LB64:
	printf("LB64");
case Mips::LB64:
	printf("LB64");
case Mips::LH64:
	printf("LH64");
case Mips::LW64:
	printf("LW64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::JAL:
	printf("JAL");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::LUi64:
	printf("LUi64");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::BNE64:
	printf("BNE64");
case Mips::BEQ64:
	printf("BEQ64");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BEQ:
	printf("BEQ");
case Mips::BNE64:
	printf("BNE64");
case Mips::BLEZ64:
	printf("BLEZ64");
case Mips::BGEZ64:
	printf("BGEZ64");
case Mips::SLTiu64:
	printf("SLTiu64");
case Mips::SLTu64:
	printf("SLTu64");
case Mips::SLTiu64:
	printf("SLTiu64");
case Mips::SLTu64:
	printf("SLTu64");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::SLT64:
	printf("SLT64");
case Mips::SLTu64:
	printf("SLTu64");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::XORi:
	printf("XORi");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::SLL:
	printf("SLL");
case Mips::DSLLV:
	printf("DSLLV");
case Mips::DSRLV:
	printf("DSRLV");
case Mips::DSRAV:
	printf("DSRAV");
case Mips::DROTRV:
	printf("DROTRV");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::DSRL:
	printf("DSRL");
case Mips::SLL64_32:
	printf("SLL64_32");
case Mips::DEXT64_32:
	printf("DEXT64_32");
case Mips::CINS64_32:
	printf("CINS64_32");
case Mips::SLL64_64:
	printf("SLL64_64");
case Mips::DSHD:
	printf("DSHD");
case Mips::DSUBu:
	printf("DSUBu");
case Mips::DADDu:
	printf("DADDu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::BBIT0:
	printf("BBIT0");
case Mips::BBIT032:
	printf("BBIT032");
case Mips::BBIT1:
	printf("BBIT1");
case Mips::BBIT132:
	printf("BBIT132");
case Mips::BBIT0:
	printf("BBIT0");
case Mips::BBIT1:
	printf("BBIT1");
case Mips::LB64:
	printf("LB64");
case Mips::LH64:
	printf("LH64");
case Mips::LW64:
	printf("LW64");
case Mips::LD:
	printf("LD");
case Mips::SB64:
	printf("SB64");
case Mips::SH64:
	printf("SH64");
case Mips::SW64:
	printf("SW64");
case Mips::SD:
	printf("SD");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVN_I_I:
	printf("MOVN_I_I");
case Mips::MOVN_I_I:
	printf("MOVN_I_I");
case Mips::MOVN_I_I:
	printf("MOVN_I_I");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I:
	printf("MOVZ_I_I");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I64_I:
	printf("MOVZ_I64_I");
case Mips::MOVZ_I64_I:
	printf("MOVZ_I64_I");
case Mips::MOVZ_I64_I64:
	printf("MOVZ_I64_I64");
case Mips::MOVZ_I64_I64:
	printf("MOVZ_I64_I64");
case Mips::MOVZ_I_I64:
	printf("MOVZ_I_I64");
case Mips::MOVZ_I64_I:
	printf("MOVZ_I64_I");
case Mips::MOVZ_I64_I64:
	printf("MOVZ_I64_I64");
case Mips::MOVN_I_I64:
	printf("MOVN_I_I64");
case Mips::MOVN_I_I64:
	printf("MOVN_I_I64");
case Mips::MOVN_I_I64:
	printf("MOVN_I_I64");
case Mips::MOVN_I64_I:
	printf("MOVN_I64_I");
case Mips::MOVN_I64_I:
	printf("MOVN_I64_I");
case Mips::MOVN_I64_I:
	printf("MOVN_I64_I");
case Mips::MOVN_I64_I64:
	printf("MOVN_I64_I64");
case Mips::MOVN_I64_I64:
	printf("MOVN_I64_I64");
case Mips::MOVN_I64_I64:
	printf("MOVN_I64_I64");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVN_I_S:
	printf("MOVN_I_S");
case Mips::MOVN_I_S:
	printf("MOVN_I_S");
case Mips::MOVN_I_S:
	printf("MOVN_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I_S:
	printf("MOVZ_I_S");
case Mips::MOVZ_I64_S:
	printf("MOVZ_I64_S");
case Mips::MOVZ_I64_S:
	printf("MOVZ_I64_S");
case Mips::MOVN_I64_S:
	printf("MOVN_I64_S");
case Mips::MOVN_I64_S:
	printf("MOVN_I64_S");
case Mips::MOVN_I64_S:
	printf("MOVN_I64_S");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVZ_I_D32:
	printf("MOVZ_I_D32");
case Mips::MOVN_I_D32:
	printf("MOVN_I_D32");
case Mips::MOVN_I_D32:
	printf("MOVN_I_D32");
case Mips::MOVN_I_D32:
	printf("MOVN_I_D32");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I_D64:
	printf("MOVZ_I_D64");
case Mips::MOVZ_I64_D64:
	printf("MOVZ_I64_D64");
case Mips::MOVZ_I64_D64:
	printf("MOVZ_I64_D64");
case Mips::MOVN_I_D64:
	printf("MOVN_I_D64");
case Mips::MOVN_I_D64:
	printf("MOVN_I_D64");
case Mips::MOVN_I_D64:
	printf("MOVN_I_D64");
case Mips::MOVN_I64_D64:
	printf("MOVN_I64_D64");
case Mips::MOVN_I64_D64:
	printf("MOVN_I64_D64");
case Mips::MOVN_I64_D64:
	printf("MOVN_I64_D64");
case Mips::NOR:
	printf("NOR");
case Mips::NOR:
	printf("NOR");
case Mips::NOR:
	printf("NOR");
case Mips::CMP_EQ_S:
	printf("CMP_EQ_S");
case Mips::CMP_LE_S:
	printf("CMP_LE_S");
case Mips::CMP_LT_S:
	printf("CMP_LT_S");
case Mips::CMP_LT_S:
	printf("CMP_LT_S");
case Mips::CMP_LE_S:
	printf("CMP_LE_S");
case Mips::NOR:
	printf("NOR");
case Mips::NOR:
	printf("NOR");
case Mips::NOR:
	printf("NOR");
case Mips::NOR:
	printf("NOR");
case Mips::CMP_EQ_D:
	printf("CMP_EQ_D");
case Mips::CMP_LE_D:
	printf("CMP_LE_D");
case Mips::CMP_LT_D:
	printf("CMP_LT_D");
case Mips::CMP_LT_D:
	printf("CMP_LT_D");
case Mips::CMP_LE_D:
	printf("CMP_LE_D");
case Mips::NOR:
	printf("NOR");
case Mips::OR:
	printf("OR");
case Mips::OR:
	printf("OR");
case Mips::OR:
	printf("OR");
case Mips::OR:
	printf("OR");
case Mips::OR:
	printf("OR");
case Mips::OR:
	printf("OR");
case Mips::SELEQZ:
	printf("SELEQZ");
case Mips::SELNEZ:
	printf("SELNEZ");
case Mips::SELNEZ:
	printf("SELNEZ");
case Mips::SELEQZ:
	printf("SELEQZ");
case Mips::OR:
	printf("OR");
case Mips::SELNEZ:
	printf("SELNEZ");
case Mips::SELEQZ:
	printf("SELEQZ");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::SELNEZ64:
	printf("SELNEZ64");
case Mips::SELEQZ64:
	printf("SELEQZ64");
case Mips::SELEQZ64:
	printf("SELEQZ64");
case Mips::SELNEZ64:
	printf("SELNEZ64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::OR64:
	printf("OR64");
case Mips::SELNEZ64:
	printf("SELNEZ64");
case Mips::SELNEZ64:
	printf("SELNEZ64");
case Mips::SELEQZ64:
	printf("SELEQZ64");
case Mips::SELEQZ64:
	printf("SELEQZ64");
case Mips::SELEQZ64:
	printf("SELEQZ64");
case Mips::SELNEZ64:
	printf("SELNEZ64");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::INSERT_SUBREG:
	printf("INSERT_SUBREG");
case Mips::NotRxRy16:
	printf("NotRxRy16");
case Mips::NegRxRy16:
	printf("NegRxRy16");
case Mips::AdduRxRyRz16:
	printf("AdduRxRyRz16");
case Mips::AndRxRxRy16:
	printf("AndRxRxRy16");
case Mips::MultRxRyRz16:
	printf("MultRxRyRz16");
case Mips::OrRxRxRy16:
	printf("OrRxRxRy16");
case Mips::SubuRxRyRz16:
	printf("SubuRxRyRz16");
case Mips::XorRxRxRy16:
	printf("XorRxRxRy16");
case Mips::AddiuRxRxImm16:
	printf("AddiuRxRxImm16");
case Mips::AddiuRxRxImmX16:
	printf("AddiuRxRxImmX16");
case Mips::SllX16:
	printf("SllX16");
case Mips::SrlX16:
	printf("SrlX16");
case Mips::SraX16:
	printf("SraX16");
case Mips::SllvRxRy16:
	printf("SllvRxRy16");
case Mips::SravRxRy16:
	printf("SravRxRy16");
case Mips::SrlvRxRy16:
	printf("SrlvRxRy16");
case Mips::LbRxRyOffMemX16:
	printf("LbRxRyOffMemX16");
case Mips::LbuRxRyOffMemX16:
	printf("LbuRxRyOffMemX16");
case Mips::LhRxRyOffMemX16:
	printf("LhRxRyOffMemX16");
case Mips::LhuRxRyOffMemX16:
	printf("LhuRxRyOffMemX16");
case Mips::LwRxSpImmX16:
	printf("LwRxSpImmX16");
case Mips::SbRxRyOffMemX16:
	printf("SbRxRyOffMemX16");
case Mips::ShRxRyOffMemX16:
	printf("ShRxRyOffMemX16");
case Mips::SwRxSpImmX16:
	printf("SwRxSpImmX16");
case Mips::Jal16:
	printf("Jal16");
case Mips::Jal16:
	printf("Jal16");
case Mips::JrcRx16:
	printf("JrcRx16");
case Mips::AddiuRxRyOffMemX16:
	printf("AddiuRxRyOffMemX16");
case Mips::LwConstant32:
	printf("LwConstant32");
case Mips::BteqzT8CmpX16:
	printf("BteqzT8CmpX16");
case Mips::BteqzT8CmpiX16:
	printf("BteqzT8CmpiX16");
case Mips::BeqzRxImm16:
	printf("BeqzRxImm16");
case Mips::BtnezT8SltX16:
	printf("BtnezT8SltX16");
case Mips::BteqzT8SltX16:
	printf("BteqzT8SltX16");
case Mips::BteqzT8SltiX16:
	printf("BteqzT8SltiX16");
case Mips::BtnezT8SltX16:
	printf("BtnezT8SltX16");
case Mips::BtnezT8SltiX16:
	printf("BtnezT8SltiX16");
case Mips::BteqzT8SltX16:
	printf("BteqzT8SltX16");
case Mips::BtnezT8CmpX16:
	printf("BtnezT8CmpX16");
case Mips::BtnezT8CmpiX16:
	printf("BtnezT8CmpiX16");
case Mips::BnezRxImm16:
	printf("BnezRxImm16");
case Mips::BnezRxImm16:
	printf("BnezRxImm16");
case Mips::Bimm16:
	printf("Bimm16");
case Mips::AddiuRxRxImmX16:
	printf("AddiuRxRxImmX16");
case Mips::LiRxImmX16:
	printf("LiRxImmX16");
case Mips::DivRxRy16:
	printf("DivRxRy16");
case Mips::DivuRxRy16:
	printf("DivuRxRy16");
case Mips::SelTBteqZSlt:
	printf("SelTBteqZSlt");
case Mips::SelTBtneZSlt:
	printf("SelTBtneZSlt");
case Mips::SelTBteqZSltu:
	printf("SelTBteqZSltu");
case Mips::SelTBtneZSltu:
	printf("SelTBtneZSltu");
case Mips::SelTBtneZSlti:
	printf("SelTBtneZSlti");
case Mips::SelTBteqZSlt:
	printf("SelTBteqZSlt");
case Mips::SelTBteqZSltu:
	printf("SelTBteqZSltu");
case Mips::SelTBteqZCmp:
	printf("SelTBteqZCmp");
case Mips::SelBeqZ:
	printf("SelBeqZ");
case Mips::SelTBteqZCmpi:
	printf("SelTBteqZCmpi");
case Mips::SelTBtneZCmp:
	printf("SelTBtneZCmp");
case Mips::SelBneZ:
	printf("SelBneZ");
case Mips::SelBneZ:
	printf("SelBneZ");
case Mips::SelTBtneZCmpi:
	printf("SelTBtneZCmpi");
case Mips::SltiuCCRxImmX16:
	printf("SltiuCCRxImmX16");
case Mips::SltiuCCRxImmX16:
	printf("SltiuCCRxImmX16");
case Mips::XorRxRxRy16:
	printf("XorRxRxRy16");
case Mips::XorRxRxRy16:
	printf("XorRxRxRy16");
case Mips::SltCCRxRy16:
	printf("SltCCRxRy16");
case Mips::XorRxRxRy16:
	printf("XorRxRxRy16");
case Mips::SltCCRxRy16:
	printf("SltCCRxRy16");
case Mips::SltiCCRxImmX16:
	printf("SltiCCRxImmX16");
case Mips::SltuCCRxRy16:
	printf("SltuCCRxRy16");
case Mips::XorRxRxRy16:
	printf("XorRxRxRy16");
case Mips::SltuCCRxRy16:
	printf("SltuCCRxRy16");
case Mips::XorRxRxRy16:
	printf("XorRxRxRy16");
case Mips::SltuCCRxRy16:
	printf("SltuCCRxRy16");
case Mips::SltiuCCRxImmX16:
	printf("SltiuCCRxImmX16");
case Mips::AddiuRxRxImmX16:
	printf("AddiuRxRxImmX16");
case Mips::SllX16:
	printf("SllX16");
case Mips::SllX16:
	printf("SllX16");
case Mips::SllX16:
	printf("SllX16");
case Mips::LiRxImmX16:
	printf("LiRxImmX16");
case Mips::SllX16:
	printf("SllX16");
case Mips::AddiuRxRxImmX16:
	printf("AddiuRxRxImmX16");
case Mips::AddiuRxRxImmX16:
	printf("AddiuRxRxImmX16");
case Mips::LbuRxRyOffMemX16:
	printf("LbuRxRyOffMemX16");
case Mips::LhuRxRyOffMemX16:
	printf("LhuRxRyOffMemX16");
case Mips::Break16:
	printf("Break16");
case Mips::SebRx16:
	printf("SebRx16");
case Mips::SehRx16:
	printf("SehRx16");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::SW:
	printf("SW");
case Mips::SW:
	printf("SW");
case Mips::ADDQ_PH:
	printf("ADDQ_PH");
case Mips::ADDQ_PH:
	printf("ADDQ_PH");
case Mips::SUBQ_PH:
	printf("SUBQ_PH");
case Mips::SUBQ_PH:
	printf("SUBQ_PH");
case Mips::MUL_PH:
	printf("MUL_PH");
case Mips::MUL_PH:
	printf("MUL_PH");
case Mips::ADDU_QB:
	printf("ADDU_QB");
case Mips::ADDU_QB:
	printf("ADDU_QB");
case Mips::SUBU_QB:
	printf("SUBU_QB");
case Mips::SUBU_QB:
	printf("SUBU_QB");
case Mips::ADDSC:
	printf("ADDSC");
case Mips::ADDSC:
	printf("ADDSC");
case Mips::ADDWC:
	printf("ADDWC");
case Mips::ADDWC:
	printf("ADDWC");
case Mips::SHLL_PH:
	printf("SHLL_PH");
case Mips::SHRA_PH:
	printf("SHRA_PH");
case Mips::SHRL_PH:
	printf("SHRL_PH");
case Mips::SHLL_PH:
	printf("SHLL_PH");
case Mips::SHRA_PH:
	printf("SHRA_PH");
case Mips::SHRL_PH:
	printf("SHRL_PH");
case Mips::SHLL_QB:
	printf("SHLL_QB");
case Mips::SHRA_QB:
	printf("SHRA_QB");
case Mips::SHRL_QB:
	printf("SHRL_QB");
case Mips::SHLL_QB:
	printf("SHLL_QB");
case Mips::SHRA_QB:
	printf("SHRA_QB");
case Mips::SHRL_QB:
	printf("SHRL_QB");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_PH:
	printf("PseudoPICK_PH");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::PseudoPICK_QB:
	printf("PseudoPICK_QB");
case Mips::EXTP:
	printf("EXTP");
case Mips::EXTPV:
	printf("EXTPV");
case Mips::EXTPDP:
	printf("EXTPDP");
case Mips::EXTPDPV:
	printf("EXTPDPV");
case Mips::EXTR_W:
	printf("EXTR_W");
case Mips::EXTRV_W:
	printf("EXTRV_W");
case Mips::EXTR_R_W:
	printf("EXTR_R_W");
case Mips::EXTRV_R_W:
	printf("EXTRV_R_W");
case Mips::EXTR_RS_W:
	printf("EXTR_RS_W");
case Mips::EXTRV_RS_W:
	printf("EXTRV_RS_W");
case Mips::EXTR_S_H:
	printf("EXTR_S_H");
case Mips::EXTRV_S_H:
	printf("EXTRV_S_H");
case Mips::LBUX:
	printf("LBUX");
case Mips::LHX:
	printf("LHX");
case Mips::LWX:
	printf("LWX");
case Mips::FMSUB_W:
	printf("FMSUB_W");
case Mips::FMSUB_D:
	printf("FMSUB_D");
case Mips::FMADD_W:
	printf("FMADD_W");
case Mips::FMADD_D:
	printf("FMADD_D");
case Mips::COPY_S_W:
	printf("COPY_S_W");
case Mips::LD_H:
	printf("LD_H");
case Mips::LD_W:
	printf("LD_W");
case Mips::LD_D:
	printf("LD_D");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::TRUNC_W_D64:
	printf("TRUNC_W_D64");
case Mips::FCMP_S32:
	printf("FCMP_S32");
case Mips::SLL_B:
	printf("SLL_B");
case Mips::SLL_H:
	printf("SLL_H");
case Mips::SLL_W:
	printf("SLL_W");
case Mips::SLL_D:
	printf("SLL_D");
case Mips::BNEG_B:
	printf("BNEG_B");
case Mips::BNEG_H:
	printf("BNEG_H");
case Mips::BNEG_W:
	printf("BNEG_W");
case Mips::BNEG_D:
	printf("BNEG_D");
case Mips::SRL_B:
	printf("SRL_B");
case Mips::SRL_H:
	printf("SRL_H");
case Mips::SRL_W:
	printf("SRL_W");
case Mips::SRL_D:
	printf("SRL_D");
case Mips::SRA_B:
	printf("SRA_B");
case Mips::SRA_H:
	printf("SRA_H");
case Mips::SRA_W:
	printf("SRA_W");
case Mips::SRA_D:
	printf("SRA_D");
case Mips::BSET_B:
	printf("BSET_B");
case Mips::BSET_H:
	printf("BSET_H");
case Mips::BSET_W:
	printf("BSET_W");
case Mips::BSET_D:
	printf("BSET_D");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::COPY_S_W:
	printf("COPY_S_W");
case Mips::COPY_S_W:
	printf("COPY_S_W");
case Mips::COPY_S_D:
	printf("COPY_S_D");
case Mips::COPY_S_D:
	printf("COPY_S_D");
case Mips::SRA:
	printf("SRA");
case Mips::SRA:
	printf("SRA");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::SRL:
	printf("SRL");
case Mips::SRL:
	printf("SRL");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::SRA:
	printf("SRA");
case Mips::SRA:
	printf("SRA");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::SRL:
	printf("SRL");
case Mips::SRL:
	printf("SRL");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::COPY_TO_REGCLASS:
	printf("COPY_TO_REGCLASS");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::EXTRACT_SUBREG:
	printf("EXTRACT_SUBREG");
case Mips::FCEQ_W:
	printf("FCEQ_W");
case Mips::FCEQ_D:
	printf("FCEQ_D");
case Mips::FCLE_W:
	printf("FCLE_W");
case Mips::FCLE_D:
	printf("FCLE_D");
case Mips::FCLT_W:
	printf("FCLT_W");
case Mips::FCLT_D:
	printf("FCLT_D");
case Mips::FCNE_W:
	printf("FCNE_W");
case Mips::FCNE_D:
	printf("FCNE_D");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::LB_MM:
	printf("LB_MM");
case Mips::LH_MM:
	printf("LH_MM");
case Mips::LW_MM:
	printf("LW_MM");
case Mips::LI16_MM:
	printf("LI16_MM");
case Mips::ORi_MM:
	printf("ORi_MM");
case Mips::LUi_MM:
	printf("LUi_MM");
case Mips::ORi_MM:
	printf("ORi_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::NOT16_MM:
	printf("NOT16_MM");
case Mips::NOR_MM:
	printf("NOR_MM");
case Mips::ADDIUR2_MM:
	printf("ADDIUR2_MM");
case Mips::ADDIUS5_MM:
	printf("ADDIUS5_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ANDI16_MM:
	printf("ANDI16_MM");
case Mips::ANDi_MM:
	printf("ANDi_MM");
case Mips::SLL16_MM:
	printf("SLL16_MM");
case Mips::SLL_MM:
	printf("SLL_MM");
case Mips::SLLV_MM:
	printf("SLLV_MM");
case Mips::SRL16_MM:
	printf("SRL16_MM");
case Mips::SRL_MM:
	printf("SRL_MM");
case Mips::SRLV_MM:
	printf("SRLV_MM");
case Mips::SRA_MM:
	printf("SRA_MM");
case Mips::SRAV_MM:
	printf("SRAV_MM");
case Mips::SW16_MM:
	printf("SW16_MM");
case Mips::SW_MM:
	printf("SW_MM");
case Mips::LW16_MM:
	printf("LW16_MM");
case Mips::LW_MM:
	printf("LW_MM");
case Mips::SUBu_MM:
	printf("SUBu_MM");
case Mips::LBu_MM:
	printf("LBu_MM");
case Mips::LBu_MM:
	printf("LBu_MM");
case Mips::LHu_MM:
	printf("LHu_MM");
case Mips::LH_MM:
	printf("LH_MM");
case Mips::ROTR_MM:
	printf("ROTR_MM");
case Mips::JAL_MM:
	printf("JAL_MM");
case Mips::TAILCALL_MM:
	printf("TAILCALL_MM");
case Mips::TAILCALL_MM:
	printf("TAILCALL_MM");
case Mips::BNE_MM:
	printf("BNE_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BEQ_MM:
	printf("BEQ_MM");
case Mips::BNE_MM:
	printf("BNE_MM");
case Mips::BLEZ_MM:
	printf("BLEZ_MM");
case Mips::BGEZ_MM:
	printf("BGEZ_MM");
case Mips::SLTiu_MM:
	printf("SLTiu_MM");
case Mips::SLTu_MM:
	printf("SLTu_MM");
case Mips::SLTiu_MM:
	printf("SLTiu_MM");
case Mips::SLTu_MM:
	printf("SLTu_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::SLT_MM:
	printf("SLT_MM");
case Mips::SLTu_MM:
	printf("SLTu_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::XORi_MM:
	printf("XORi_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVN_I_MM:
	printf("MOVN_I_MM");
case Mips::MOVN_I_MM:
	printf("MOVN_I_MM");
case Mips::MOVN_I_MM:
	printf("MOVN_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVZ_I_MM:
	printf("MOVZ_I_MM");
case Mips::MOVN_I_MM:
	printf("MOVN_I_MM");
case Mips::MOVN_I_MM:
	printf("MOVN_I_MM");
case Mips::MOVN_I_MM:
	printf("MOVN_I_MM");
case Mips::NMADD_S_MM:
	printf("NMADD_S_MM");
case Mips::NMSUB_S_MM:
	printf("NMSUB_S_MM");
case Mips::NMADD_D32_MM:
	printf("NMADD_D32_MM");
case Mips::NMSUB_D32_MM:
	printf("NMSUB_D32_MM");
case Mips::LDC1_MM:
	printf("LDC1_MM");
case Mips::SDC1_MM:
	printf("SDC1_MM");
case Mips::LWC1_MM:
	printf("LWC1_MM");
case Mips::SWC1_MM:
	printf("SWC1_MM");
case Mips::MTC1_D64_MM:
	printf("MTC1_D64_MM");
case Mips::MTC1_MM:
	printf("MTC1_MM");
case Mips::FNEG_S_MM:
	printf("FNEG_S_MM");
case Mips::CVT_S_D64_MM:
	printf("CVT_S_D64_MM");
case Mips::CVT_D64_S_MM:
	printf("CVT_D64_S_MM");
case Mips::CVT_S_D32_MM:
	printf("CVT_S_D32_MM");
case Mips::CVT_D32_S_MM:
	printf("CVT_D32_S_MM");
case Mips::TRUNC_W_MM:
	printf("TRUNC_W_MM");
case Mips::CVT_W_D64_MM:
	printf("CVT_W_D64_MM");
case Mips::TRUNC_W_S_MM:
	printf("TRUNC_W_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVZ_I_S_MM:
	printf("MOVZ_I_S_MM");
case Mips::MOVN_I_S_MM:
	printf("MOVN_I_S_MM");
case Mips::MOVN_I_S_MM:
	printf("MOVN_I_S_MM");
case Mips::MOVN_I_S_MM:
	printf("MOVN_I_S_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVZ_I_D32_MM:
	printf("MOVZ_I_D32_MM");
case Mips::MOVN_I_D32_MM:
	printf("MOVN_I_D32_MM");
case Mips::MOVN_I_D32_MM:
	printf("MOVN_I_D32_MM");
case Mips::MOVN_I_D32_MM:
	printf("MOVN_I_D32_MM");
case Mips::SW16_MMR6:
	printf("SW16_MMR6");
case Mips::SUBU_MMR6:
	printf("SUBU_MMR6");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::SELNEZ_MMR6:
	printf("SELNEZ_MMR6");
case Mips::SELEQZ_MMR6:
	printf("SELEQZ_MMR6");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::OR_MM:
	printf("OR_MM");
case Mips::SELEQZ_MMR6:
	printf("SELEQZ_MMR6");
case Mips::SELNEZ_MMR6:
	printf("SELNEZ_MMR6");
case Mips::SELNEZ_MMR6:
	printf("SELNEZ_MMR6");
case Mips::SELEQZ_MMR6:
	printf("SELEQZ_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::CMP_EQ_S_MMR6:
	printf("CMP_EQ_S_MMR6");
case Mips::CMP_LE_S_MMR6:
	printf("CMP_LE_S_MMR6");
case Mips::CMP_LT_S_MMR6:
	printf("CMP_LT_S_MMR6");
case Mips::CMP_LT_S_MMR6:
	printf("CMP_LT_S_MMR6");
case Mips::CMP_LE_S_MMR6:
	printf("CMP_LE_S_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::CMP_EQ_D_MMR6:
	printf("CMP_EQ_D_MMR6");
case Mips::CMP_LE_D_MMR6:
	printf("CMP_LE_D_MMR6");
case Mips::CMP_LT_D_MMR6:
	printf("CMP_LT_D_MMR6");
case Mips::CMP_LT_D_MMR6:
	printf("CMP_LT_D_MMR6");
case Mips::CMP_LE_D_MMR6:
	printf("CMP_LE_D_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::MTC1_MMR6:
	printf("MTC1_MMR6");
case Mips::FNEG_S_MMR6:
	printf("FNEG_S_MMR6");
case Mips::TRUNC_W_D_MMR6:
	printf("TRUNC_W_D_MMR6");
case Mips::TRUNC_W_S_MMR6:
	printf("TRUNC_W_S_MMR6");
case Mips::ANDI16_MMR6:
	printf("ANDI16_MMR6");
case Mips::ANDI_MMR6:
	printf("ANDI_MMR6");
case Mips::XORI_MMR6:
	printf("XORI_MMR6");
case Mips::NOT16_MMR6:
	printf("NOT16_MMR6");
case Mips::NOR_MMR6:
	printf("NOR_MMR6");
case Mips::LDC1_D64_MMR6:
	printf("LDC1_D64_MMR6");
case Mips::SDC1_D64_MMR6:
	printf("SDC1_D64_MMR6");
case Mips::JAL_MMR6:
	printf("JAL_MMR6");
case Mips::JAL_MMR6:
	printf("JAL_MMR6");
case Mips::TAILCALL_MMR6:
	printf("TAILCALL_MMR6");
case Mips::TAILCALL_MMR6:
	printf("TAILCALL_MMR6");
case Mips::BNEZC_MMR6:
	printf("BNEZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BEQZC_MMR6:
	printf("BEQZC_MMR6");
case Mips::BNEZC_MMR6:
	printf("BNEZC_MMR6");
case Mips::MADD_S:
	printf("MADD_S");
case Mips::MADD_D32:
	printf("MADD_D32");
case Mips::MADD_D64:
	printf("MADD_D64");
case Mips::NMADD_S:
	printf("NMADD_S");
case Mips::NMADD_D32:
	printf("NMADD_D32");
case Mips::NMADD_D64:
	printf("NMADD_D64");
case Mips::BBIT0:
	printf("BBIT0");
case Mips::BBIT032:
	printf("BBIT032");
case Mips::BBIT1:
	printf("BBIT1");
case Mips::BBIT132:
	printf("BBIT132");
case Mips::ADDVI_B:
	printf("ADDVI_B");
case Mips::ADDVI_H:
	printf("ADDVI_H");
case Mips::ADDVI_W:
	printf("ADDVI_W");
case Mips::ADDVI_D:
	printf("ADDVI_D");
case Mips::ANDI_B:
	printf("ANDI_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLRI_B:
	printf("BCLRI_B");
case Mips::BCLRI_H:
	printf("BCLRI_H");
case Mips::BCLRI_W:
	printf("BCLRI_W");
case Mips::BCLRI_D:
	printf("BCLRI_D");
case Mips::BNEG_B:
	printf("BNEG_B");
case Mips::BNEG_H:
	printf("BNEG_H");
case Mips::BNEG_W:
	printf("BNEG_W");
case Mips::BNEG_D:
	printf("BNEG_D");
case Mips::BNEGI_B:
	printf("BNEGI_B");
case Mips::BNEGI_H:
	printf("BNEGI_H");
case Mips::BNEGI_W:
	printf("BNEGI_W");
case Mips::BNEGI_D:
	printf("BNEGI_D");
case Mips::BSET_B:
	printf("BSET_B");
case Mips::BSET_H:
	printf("BSET_H");
case Mips::BSET_W:
	printf("BSET_W");
case Mips::BSET_D:
	printf("BSET_D");
case Mips::BSETI_B:
	printf("BSETI_B");
case Mips::BSETI_H:
	printf("BSETI_H");
case Mips::BSETI_W:
	printf("BSETI_W");
case Mips::BSETI_D:
	printf("BSETI_D");
case Mips::FEXP2_W:
	printf("FEXP2_W");
case Mips::FEXP2_D:
	printf("FEXP2_D");
case Mips::LSA:
	printf("LSA");
case Mips::DLSA:
	printf("DLSA");
case Mips::MADDV_B:
	printf("MADDV_B");
case Mips::MADDV_H:
	printf("MADDV_H");
case Mips::MADDV_W:
	printf("MADDV_W");
case Mips::MADDV_D:
	printf("MADDV_D");
case Mips::MAXI_S_B:
	printf("MAXI_S_B");
case Mips::MAXI_S_H:
	printf("MAXI_S_H");
case Mips::MAXI_S_W:
	printf("MAXI_S_W");
case Mips::MAXI_S_D:
	printf("MAXI_S_D");
case Mips::MAXI_U_B:
	printf("MAXI_U_B");
case Mips::MAXI_U_H:
	printf("MAXI_U_H");
case Mips::MAXI_U_W:
	printf("MAXI_U_W");
case Mips::MAXI_U_D:
	printf("MAXI_U_D");
case Mips::MINI_S_B:
	printf("MINI_S_B");
case Mips::MINI_S_H:
	printf("MINI_S_H");
case Mips::MINI_S_W:
	printf("MINI_S_W");
case Mips::MINI_S_D:
	printf("MINI_S_D");
case Mips::MINI_U_B:
	printf("MINI_U_B");
case Mips::MINI_U_H:
	printf("MINI_U_H");
case Mips::MINI_U_W:
	printf("MINI_U_W");
case Mips::MINI_U_D:
	printf("MINI_U_D");
case Mips::NORI_B:
	printf("NORI_B");
case Mips::ORI_B:
	printf("ORI_B");
case Mips::SPLAT_D:
	printf("SPLAT_D");
case Mips::XORI_B:
	printf("XORI_B");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::ADDiu:
	printf("ADDiu");
case Mips::NMADD_S:
	printf("NMADD_S");
case Mips::NMADD_D32:
	printf("NMADD_D32");
case Mips::NMADD_D64:
	printf("NMADD_D64");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::DADDiu:
	printf("DADDiu");
case Mips::AddiuRxRxImmX16:
	printf("AddiuRxRxImmX16");
case Mips::FMADD_W:
	printf("FMADD_W");
case Mips::FMADD_D:
	printf("FMADD_D");
case Mips::SLL_B:
	printf("SLL_B");
case Mips::SLL_H:
	printf("SLL_H");
case Mips::SLL_W:
	printf("SLL_W");
case Mips::SLL_D:
	printf("SLL_D");
case Mips::BNEG_B:
	printf("BNEG_B");
case Mips::BNEG_B:
	printf("BNEG_B");
case Mips::BNEG_B:
	printf("BNEG_B");
case Mips::BNEG_H:
	printf("BNEG_H");
case Mips::BNEG_H:
	printf("BNEG_H");
case Mips::BNEG_H:
	printf("BNEG_H");
case Mips::BNEG_W:
	printf("BNEG_W");
case Mips::BNEG_W:
	printf("BNEG_W");
case Mips::BNEG_W:
	printf("BNEG_W");
case Mips::BNEG_D:
	printf("BNEG_D");
case Mips::BNEG_D:
	printf("BNEG_D");
case Mips::BNEG_D:
	printf("BNEG_D");
case Mips::SRL_B:
	printf("SRL_B");
case Mips::SRL_H:
	printf("SRL_H");
case Mips::SRL_W:
	printf("SRL_W");
case Mips::SRL_D:
	printf("SRL_D");
case Mips::SRA_B:
	printf("SRA_B");
case Mips::SRA_H:
	printf("SRA_H");
case Mips::SRA_W:
	printf("SRA_W");
case Mips::SRA_D:
	printf("SRA_D");
case Mips::BSET_B:
	printf("BSET_B");
case Mips::BSET_B:
	printf("BSET_B");
case Mips::BSET_B:
	printf("BSET_B");
case Mips::BSET_H:
	printf("BSET_H");
case Mips::BSET_H:
	printf("BSET_H");
case Mips::BSET_H:
	printf("BSET_H");
case Mips::BSET_W:
	printf("BSET_W");
case Mips::BSET_W:
	printf("BSET_W");
case Mips::BSET_W:
	printf("BSET_W");
case Mips::BSET_D:
	printf("BSET_D");
case Mips::BSET_D:
	printf("BSET_D");
case Mips::BSET_D:
	printf("BSET_D");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_B:
	printf("BCLR_B");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_H:
	printf("BCLR_H");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_W:
	printf("BCLR_W");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::BCLR_D:
	printf("BCLR_D");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::ADDiu_MM:
	printf("ADDiu_MM");
case Mips::NMADD_S_MM:
	printf("NMADD_S_MM");
case Mips::NMADD_D32_MM:
	printf("NMADD_D32_MM");
