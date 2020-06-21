- install the latest clang in order to use the llvm linker - faster and less memory.
> sudo bash -c "$(wget -O - https://apt.llvm.org/llvm.sh)"
- cmake and make using the tasks.json file of vscode.
- the first attempt is to use mips arch and simulate it.
    install the mips gcc compiler and libs
    >     sudo apt install gcc-7-mips-linux-gnu g++-7-mips-linux-gnu

- if the opcode is a ?(search "ABSQ_S_PH" debug.txt and in the disassembler.inc) need to extract ?
