; ModuleID = 'add-c.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [10 x i8] c"hui = %d\0A\00", align 1

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  %hui0 = alloca i32, align 4
  %hui1 = alloca i32, align 4
  %hui2 = alloca i32, align 4
  %hui = alloca i32, align 4
  store i32 0, i32* %retval
  call void @llvm.dbg.declare(metadata !{i32* %hui0}, metadata !9), !dbg !10
  store i32 1, i32* %hui0, align 4, !dbg !10
  call void @llvm.dbg.declare(metadata !{i32* %hui1}, metadata !11), !dbg !12
  %0 = load i32* %hui0, align 4, !dbg !12
  %add = add nsw i32 %0, 1, !dbg !12
  store i32 %add, i32* %hui1, align 4, !dbg !12
  call void @llvm.dbg.declare(metadata !{i32* %hui2}, metadata !13), !dbg !14
  %1 = load i32* %hui1, align 4, !dbg !14
  %add1 = add nsw i32 %1, 1, !dbg !14
  store i32 %add1, i32* %hui2, align 4, !dbg !14
  call void @llvm.dbg.declare(metadata !{i32* %hui}, metadata !15), !dbg !16
  %2 = load i32* %hui2, align 4, !dbg !16
  store i32 %2, i32* %hui, align 4, !dbg !16
  %3 = load i32* %hui, align 4, !dbg !17
  %call = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([10 x i8]* @.str, i32 0, i32 0), i32 %3), !dbg !17
  ret i32 0, !dbg !18
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata) #1

declare i32 @printf(i8*, ...) #2

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf"="true" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf"="true" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.dbg.cu = !{!0}

!0 = metadata !{i32 786449, metadata !1, i32 12, metadata !"clang version 3.3 (tags/RELEASE_33/final)", i1 false, metadata !"", i32 0, metadata !2, metadata !2, metadata !3, metadata !2, metadata !2, metadata !""} ; [ DW_TAG_compile_unit ] [/export/home/hzhang86/chapel/chapel/example/Testllvm/AssCmp/add.c] [DW_LANG_C99]
!1 = metadata !{metadata !"add.c", metadata !"/export/home/hzhang86/chapel/chapel/example/Testllvm/AssCmp"}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{i32 786478, metadata !1, metadata !5, metadata !"main", metadata !"main", metadata !"", i32 2, metadata !6, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, i32 ()* @main, null, null, metadata !2, i32 2} ; [ DW_TAG_subprogram ] [line 2] [def] [main]
!5 = metadata !{i32 786473, metadata !1}          ; [ DW_TAG_file_type ] [/export/home/hzhang86/chapel/chapel/example/Testllvm/AssCmp/add.c]
!6 = metadata !{i32 786453, i32 0, i32 0, metadata !"", i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !7, i32 0, i32 0} ; [ DW_TAG_subroutine_type ] [line 0, size 0, align 0, offset 0] [from ]
!7 = metadata !{metadata !8}
!8 = metadata !{i32 786468, null, null, metadata !"int", i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ] [int] [line 0, size 32, align 32, offset 0, enc DW_ATE_signed]
!9 = metadata !{i32 786688, metadata !4, metadata !"hui0", metadata !5, i32 3, metadata !8, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [hui0] [line 3]
!10 = metadata !{i32 3, i32 0, metadata !4, null}
!11 = metadata !{i32 786688, metadata !4, metadata !"hui1", metadata !5, i32 4, metadata !8, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [hui1] [line 4]
!12 = metadata !{i32 4, i32 0, metadata !4, null}
!13 = metadata !{i32 786688, metadata !4, metadata !"hui2", metadata !5, i32 5, metadata !8, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [hui2] [line 5]
!14 = metadata !{i32 5, i32 0, metadata !4, null}
!15 = metadata !{i32 786688, metadata !4, metadata !"hui", metadata !5, i32 6, metadata !8, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [hui] [line 6]
!16 = metadata !{i32 6, i32 0, metadata !4, null}
!17 = metadata !{i32 7, i32 0, metadata !4, null}
!18 = metadata !{i32 8, i32 0, metadata !4, null}
