// REQUIRES: clang-driver
// REQUIRES: x86-registered-target
// REQUIRES: amdgpu-registered-target

// RUN: %clang -### -target x86_64-linux-gnu \
// RUN:   -x hip --cuda-gpu-arch=gfx803 --cuda-gpu-arch=gfx900 \
// RUN:   --hip-device-lib=lib1.bc --hip-device-lib=lib2.bc \
// RUN:   --hip-device-lib-path=%S/Inputs/hip_multiple_inputs/lib1 \
// RUN:   --hip-device-lib-path=%S/Inputs/hip_multiple_inputs/lib2 \
// RUN:   -fuse-ld=lld -fgpu-rdc -nogpuinc \
// RUN:   %S/Inputs/hip_multiple_inputs/a.cu \
// RUN:   %S/Inputs/hip_multiple_inputs/b.hip \
// RUN: 2>&1 | FileCheck %s

// CHECK: [[CLANG:".*clang.*"]] "-cc1" "-triple" "amdgcn-amd-amdhsa"
// CHECK-SAME: "-aux-triple" "x86_64-unknown-linux-gnu"
// CHECK-SAME: "-emit-llvm-bc"
// CHECK-SAME: {{.*}} "-main-file-name" "a.cu"
// CHECK-SAME: "-fcuda-is-device" "-fgpu-rdc" "-fcuda-allow-variadic-functions" "-fvisibility" "hidden"
// CHECK-SAME: "-fapply-global-visibility-to-externs"
// CHECK-SAME: "{{.*}}lib1.bc" "{{.*}}lib2.bc"
// CHECK-SAME: "-target-cpu" "gfx803"
// CHECK-SAME: {{.*}} "-o" [[A_BC1:".*bc"]] "-x" "hip"
// CHECK-SAME: {{.*}} [[A_SRC:".*a.cu"]]

// CHECK: [[CLANG]] "-cc1" "-triple" "amdgcn-amd-amdhsa"
// CHECK-SAME: "-aux-triple" "x86_64-unknown-linux-gnu"
// CHECK-SAME: "-emit-llvm-bc"
// CHECK-SAME: {{.*}} "-main-file-name" "b.hip"
// CHECK-SAME: "-fcuda-is-device" "-fgpu-rdc" "-fcuda-allow-variadic-functions" "-fvisibility" "hidden"
// CHECK-SAME: "-fapply-global-visibility-to-externs"
// CHECK-SAME: "{{.*}}lib1.bc" "{{.*}}lib2.bc"
// CHECK-SAME: "-target-cpu" "gfx803"
// CHECK-SAME: {{.*}} "-o" [[B_BC1:".*bc"]] "-x" "hip"
// CHECK-SAME: {{.*}} [[B_SRC:".*b.hip"]]

// CHECK-NOT: "*.llvm-link"
// CHECK-NOT: ".*opt"
// CHECK-NOT: ".*llc"
// CHECK: {{".*lld.*"}} {{.*}} "-o" "[[IMG_DEV1:.*.out]]" [[A_BC1]] [[B_BC1]]

// CHECK: [[CLANG]] "-cc1" "-triple" "amdgcn-amd-amdhsa"
// CHECK-SAME: "-aux-triple" "x86_64-unknown-linux-gnu"
// CHECK-SAME: "-emit-llvm-bc"
// CHECK-SAME: {{.*}} "-main-file-name" "a.cu"
// CHECK-SAME: "-fcuda-is-device" "-fgpu-rdc"
// CHECK-SAME: "{{.*}}lib1.bc" "{{.*}}lib2.bc"
// CHECK-SAME: "-target-cpu" "gfx900"
// CHECK-SAME: {{.*}} "-o" [[A_BC2:".*bc"]] "-x" "hip"
// CHECK-SAME: {{.*}} [[A_SRC]]

// CHECK: [[CLANG]] "-cc1" "-triple" "amdgcn-amd-amdhsa"
// CHECK-SAME: "-aux-triple" "x86_64-unknown-linux-gnu"
// CHECK-SAME: "-emit-llvm-bc"
// CHECK-SAME: {{.*}} "-main-file-name" "b.hip"
// CHECK-SAME: "-fcuda-is-device" "-fgpu-rdc"
// CHECK-SAME: "{{.*}}lib1.bc" "{{.*}}lib2.bc"
// CHECK-SAME: "-target-cpu" "gfx900"
// CHECK-SAME: {{.*}} "-o" [[B_BC2:".*bc"]] "-x" "hip"
// CHECK-SAME: {{.*}} [[B_SRC]]

// CHECK-NOT: "*.llvm-link"
// CHECK-NOT: ".*opt"
// CHECK-NOT: ".*llc"
// CHECK: {{".*lld.*"}} {{.*}} "-o" "[[IMG_DEV2:.*.out]]" [[A_BC2]] [[B_BC2]]

// CHECK: [[CLANG]] "-cc1" "-triple" "x86_64-unknown-linux-gnu"
// CHECK-SAME: "-aux-triple" "amdgcn-amd-amdhsa"
// CHECK-SAME: "-emit-obj"
// CHECK-SAME: {{.*}} "-main-file-name" "a.cu"
// CHECK-SAME: {{.*}} "-o" [[A_OBJ_HOST:".*o"]] "-x" "hip"
// CHECK-SAME: {{.*}} [[A_SRC]]

// CHECK: [[CLANG]] "-cc1" "-triple" "x86_64-unknown-linux-gnu"
// CHECK-SAME: "-aux-triple" "amdgcn-amd-amdhsa"
// CHECK-SAME: "-emit-obj"
// CHECK-SAME: {{.*}} "-main-file-name" "b.hip"
// CHECK-SAME: {{.*}} "-o" [[B_OBJ_HOST:".*o"]] "-x" "hip"
// CHECK-SAME: {{.*}} [[B_SRC]]

// CHECK: [[BUNDLER:".*clang-offload-bundler"]] "-type=o"
// CHECK-SAME: "-targets={{.*}},hip-amdgcn-amd-amdhsa-gfx803,hip-amdgcn-amd-amdhsa-gfx900"
// CHECK-SAME: "-inputs={{.*}},[[IMG_DEV1]],[[IMG_DEV2]]" "-outputs=[[BUNDLE:.*hipfb]]"

// CHECK: [[LD:".*ld.*"]] {{.*}} [[A_OBJ_HOST]] [[B_OBJ_HOST]]
// CHECK-SAME: {{.*}} "-T" "{{.*}}.lk"
