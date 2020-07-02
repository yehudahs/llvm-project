set(LLVM_LINK_COMPONENTS
#   AllTargetsAsmPrinters
  AllTargetsDescs
  AllTargetsDisassemblers
  AllTargetsInfos
  CodeGen
  DebugInfoDWARF
  MC
  MCDisassembler
  Object
  Support
  MipsSim
  Sim
  )

# FIXME: Eventually move headers to include
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../lib/Target/Mips/Sim/LLVMAllTargetsAsmPrinters)

add_llvm_tool(sim
  sim.cpp
  )
