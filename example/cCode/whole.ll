; ModuleID = 'whole.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [13 x i8] c"Hello, k=%d\0A\00", align 1
@.str1 = private unnamed_addr constant [15 x i8] c"Hello, new=%d\0A\00", align 1
@.str2 = private unnamed_addr constant [13 x i8] c"Hello, k=%d\0A\00", align 1
@.str13 = private unnamed_addr constant [15 x i8] c"Hello, new=%d\0A\00", align 1

; Function Attrs: nounwind uwtable
define i32 @sayhello(i32 %k) #0 {
entry:
  %k.addr = alloca i32, align 4
  store i32 %k, i32* %k.addr, align 4
  call void @llvm.dbg.declare(metadata !{i32* %k.addr}, metadata !24), !dbg !25
  %0 = load i32* %k.addr, align 4, !dbg !26
  %call = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([13 x i8]* @.str, i32 0, i32 0), i32 %0), !dbg !26
  %1 = load i32* %k.addr, align 4, !dbg !27
  %add = add nsw i32 %1, 1, !dbg !27
  ret i32 %add, !dbg !27
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata) #1

declare i32 @printf(i8*, ...) #2

; Function Attrs: nounwind uwtable
define void @fact(i32 %j) #0 {
entry:
  %j.addr = alloca i32, align 4
  %new = alloca i32, align 4
  store i32 %j, i32* %j.addr, align 4
  call void @llvm.dbg.declare(metadata !{i32* %j.addr}, metadata !28), !dbg !29
  call void @llvm.dbg.declare(metadata !{i32* %new}, metadata !30), !dbg !31
  %0 = load i32* %j.addr, align 4, !dbg !31
  %call = call i32 @sayhello2(i32 %0), !dbg !31
  %add = add nsw i32 %call, 1, !dbg !31
  store i32 %add, i32* %new, align 4, !dbg !31
  %1 = load i32* %new, align 4, !dbg !32
  %call1 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @.str1, i32 0, i32 0), i32 %1), !dbg !32
  ret void, !dbg !33
}

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  store i32 0, i32* %retval
  call void @fact(i32 1), !dbg !34
  call void @fact2(i32 2), !dbg !35
  ret i32 0, !dbg !36
}

; Function Attrs: nounwind uwtable
define i32 @sayhello2(i32 %k) #0 {
entry:
  %k.addr = alloca i32, align 4
  store i32 %k, i32* %k.addr, align 4
  call void @llvm.dbg.declare(metadata !{i32* %k.addr}, metadata !37), !dbg !38
  %0 = load i32* %k.addr, align 4, !dbg !39
  %call = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([13 x i8]* @.str2, i32 0, i32 0), i32 %0), !dbg !39
  %1 = load i32* %k.addr, align 4, !dbg !40
  %add = add nsw i32 %1, 1, !dbg !40
  ret i32 %add, !dbg !40
}

; Function Attrs: nounwind uwtable
define void @fact2(i32 %j) #0 {
entry:
  %j.addr = alloca i32, align 4
  %new = alloca i32, align 4
  store i32 %j, i32* %j.addr, align 4
  call void @llvm.dbg.declare(metadata !{i32* %j.addr}, metadata !41), !dbg !42
  call void @llvm.dbg.declare(metadata !{i32* %new}, metadata !43), !dbg !44
  %0 = load i32* %j.addr, align 4, !dbg !44
  %call = call i32 @sayhello(i32 %0), !dbg !44
  %add = add nsw i32 %call, 1, !dbg !44
  store i32 %add, i32* %new, align 4, !dbg !44
  %1 = load i32* %new, align 4, !dbg !45
  %call1 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @.str13, i32 0, i32 0), i32 %1), !dbg !45
  ret void, !dbg !46
}

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.dbg.cu = !{!0, !15}
!llvm.module.flags = !{!21, !22}
!llvm.ident = !{!23, !23}

!0 = metadata !{i32 786449, metadata !1, i32 12, metadata !"clang version 3.4.2 (branches/release_34 220813)", i1 false, metadata !"", i32 0, metadata !2, metadata !2, metadata !3, metadata !2, metadata !2, metadata !""} ; [ DW_TAG_compile_unit ] [/fs/mashie/hzhang86/program/Chapel/chapel-llvm-debug-2/example/cCode/ctest1.c] [DW_LANG_C99]
!1 = metadata !{metadata !"ctest1.c", metadata !"/fs/mashie/hzhang86/program/Chapel/chapel-llvm-debug-2/example/cCode"}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4, metadata !9, metadata !12}
!4 = metadata !{i32 786478, metadata !1, metadata !5, metadata !"sayhello", metadata !"sayhello", metadata !"", i32 7, metadata !6, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32)* @sayhello, null, null, metadata !2, i32 7}
!5 = metadata !{i32 786473, metadata !1}          ; [ DW_TAG_file_type ] [/fs/mashie/hzhang86/program/Chapel/chapel-llvm-debug-2/example/cCode/ctest1.c]
!6 = metadata !{i32 786453, i32 0, null, metadata !"", i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !7, i32 0, null, null, null}
!7 = metadata !{metadata !8, metadata !8}
!8 = metadata !{i32 786468, null, null, metadata !"int", i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ] [int] [line 0, size 32, align 32, offset 0, enc DW_ATE_signed]
!9 = metadata !{i32 786478, metadata !1, metadata !5, metadata !"fact", metadata !"fact", metadata !"", i32 12, metadata !10, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32)* @fact, null, null, metadata !2, i32 12}
!10 = metadata !{i32 786453, i32 0, null, metadata !"", i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !11, i32 0, null, null, null}
!11 = metadata !{null, metadata !8}
!12 = metadata !{i32 786478, metadata !1, metadata !5, metadata !"main", metadata !"main", metadata !"", i32 17, metadata !13, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, i32 ()* @main, null, null, metadata !2, i32 17}
!13 = metadata !{i32 786453, i32 0, null, metadata !"", i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !14, i32 0, null, null, null}
!14 = metadata !{metadata !8}
!15 = metadata !{i32 786449, metadata !16, i32 12, metadata !"clang version 3.4.2 (branches/release_34 220813)", i1 false, metadata !"", i32 0, metadata !2, metadata !2, metadata !17, metadata !2, metadata !2, metadata !""} ; [ DW_TAG_compile_unit ] [/fs/mashie/hzhang86/program/Chapel/chapel-llvm-debug-2/example/cCode/ctest2.c] [DW_LANG_C99]
!16 = metadata !{metadata !"ctest2.c", metadata !"/fs/mashie/hzhang86/program/Chapel/chapel-llvm-debug-2/example/cCode"}
!17 = metadata !{metadata !18, metadata !20}
!18 = metadata !{i32 786478, metadata !16, metadata !19, metadata !"sayhello2", metadata !"sayhello2", metadata !"", i32 7, metadata !6, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i32)* @sayhello2, null, null, metadata !2, i32 7}
!19 = metadata !{i32 786473, metadata !16}        ; [ DW_TAG_file_type ] [/fs/mashie/hzhang86/program/Chapel/chapel-llvm-debug-2/example/cCode/ctest2.c]
!20 = metadata !{i32 786478, metadata !16, metadata !19, metadata !"fact2", metadata !"fact2", metadata !"", i32 12, metadata !10, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i32)* @fact2, null, null, metadata !2, i32 12}
!21 = metadata !{i32 2, metadata !"Dwarf Version", i32 4}
!22 = metadata !{i32 1, metadata !"Debug Info Version", i32 1}
!23 = metadata !{metadata !"clang version 3.4.2 (branches/release_34 220813)"}
!24 = metadata !{i32 786689, metadata !4, metadata !"k", metadata !5, i32 16777223, metadata !8, i32 0, i32 0}
!25 = metadata !{i32 7, i32 0, metadata !4, null}
!26 = metadata !{i32 8, i32 0, metadata !4, null}
!27 = metadata !{i32 9, i32 0, metadata !4, null}
!28 = metadata !{i32 786689, metadata !9, metadata !"j", metadata !5, i32 16777228, metadata !8, i32 0, i32 0}
!29 = metadata !{i32 12, i32 0, metadata !9, null}
!30 = metadata !{i32 786688, metadata !9, metadata !"new", metadata !5, i32 13, metadata !8, i32 0, i32 0}
!31 = metadata !{i32 13, i32 0, metadata !9, null}
!32 = metadata !{i32 14, i32 0, metadata !9, null}
!33 = metadata !{i32 15, i32 0, metadata !9, null}
!34 = metadata !{i32 18, i32 0, metadata !12, null}
!35 = metadata !{i32 19, i32 0, metadata !12, null}
!36 = metadata !{i32 20, i32 0, metadata !12, null}
!37 = metadata !{i32 786689, metadata !18, metadata !"k", metadata !19, i32 16777223, metadata !8, i32 0, i32 0}
!38 = metadata !{i32 7, i32 0, metadata !18, null}
!39 = metadata !{i32 8, i32 0, metadata !18, null}
!40 = metadata !{i32 9, i32 0, metadata !18, null}
!41 = metadata !{i32 786689, metadata !20, metadata !"j", metadata !19, i32 16777228, metadata !8, i32 0, i32 0}
!42 = metadata !{i32 12, i32 0, metadata !20, null}
!43 = metadata !{i32 786688, metadata !20, metadata !"new", metadata !19, i32 13, metadata !8, i32 0, i32 0}
!44 = metadata !{i32 13, i32 0, metadata !20, null}
!45 = metadata !{i32 14, i32 0, metadata !20, null}
!46 = metadata !{i32 15, i32 0, metadata !20, null}
