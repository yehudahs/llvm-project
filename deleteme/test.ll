; ModuleID = './test.c'
source_filename = "./test.c"
target datalayout = "E-m:m-p:32:32-i8:8:32-i16:16:32-i64:64-n32-S64"
target triple = "mips"

; Function Attrs: noinline nounwind optnone
define dso_local zeroext i16 @addu() #0 {
entry:
  %a = alloca i16, align 2
  %b = alloca i16, align 2
  %c = alloca i16, align 2
  store i16 -5, i16* %a, align 2
  store i16 6, i16* %b, align 2
  %0 = load i16, i16* %a, align 2
  %conv = zext i16 %0 to i32
  %1 = load i16, i16* %b, align 2
  %conv1 = zext i16 %1 to i32
  %add = add nsw i32 %conv, %conv1
  %conv2 = trunc i32 %add to i16
  store i16 %conv2, i16* %c, align 2
  %2 = load i16, i16* %c, align 2
  ret i16 %2
}

; Function Attrs: noinline nounwind optnone
define dso_local signext i16 @add() #0 {
entry:
  %a = alloca i16, align 2
  %b = alloca i16, align 2
  %c = alloca i16, align 2
  store i16 -5, i16* %a, align 2
  store i16 6, i16* %b, align 2
  %0 = load i16, i16* %a, align 2
  %conv = sext i16 %0 to i32
  %1 = load i16, i16* %b, align 2
  %conv1 = sext i16 %1 to i32
  %add = add nsw i32 %conv, %conv1
  %conv2 = trunc i32 %add to i16
  store i16 %conv2, i16* %c, align 2
  %2 = load i16, i16* %c, align 2
  ret i16 %2
}

; Function Attrs: noinline nounwind optnone
define dso_local i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  %a = alloca i16, align 2
  %b = alloca i16, align 2
  %c = alloca i16, align 2
  store i32 0, i32* %retval, align 4
  store i16 -5, i16* %a, align 2
  store i16 6, i16* %b, align 2
  %0 = load i16, i16* %a, align 2
  %conv = sext i16 %0 to i32
  %1 = load i16, i16* %b, align 2
  %conv1 = sext i16 %1 to i32
  %add = add nsw i32 %conv, %conv1
  %conv2 = trunc i32 %add to i16
  store i16 %conv2, i16* %c, align 2
  %2 = load i16, i16* %c, align 2
  %conv3 = sext i16 %2 to i32
  ret i32 %conv3
}

attributes #0 = { noinline nounwind optnone "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="mips32r2" "target-features"="+mips32r2,-noabicalls" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 11.0.0 (https://github.com/yehudahs/llvm-project.git 4806a849458c040f84b84241b004a8c5176bd127)"}
