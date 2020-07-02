add_llvm_component_library(LLVMSim
  inst-exe.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Sim
  )
