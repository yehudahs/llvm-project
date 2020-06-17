# FIXME: Need to include AAP headers because not in lib/Target/AAP
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../Mips
  ${CMAKE_CURRENT_BINARY_DIR}/../Mips
)

add_llvm_component_library(LLVMMipsSim
  AAPSimState.cpp
  AAPSimulator.cpp
  )
