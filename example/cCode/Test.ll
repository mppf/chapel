; ModuleID = 'Test.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.People = type { i32, i8* }

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  %impInput = alloca i32*, align 8
  %i = alloca i32, align 4
  %i_ptr = alloca i32*, align 8
  %j = alloca float, align 4
  %j_ptr = alloca float*, align 8
  %localPeople_ptr = alloca %struct.People*, align 8
  store i32 0, i32* %retval
  call void @llvm.dbg.declare(metadata !{i32** %impInput}, metadata !9), !dbg !11
  %call = call noalias i8* @malloc(i64 400) #3, !dbg !11
  %0 = bitcast i8* %call to i32*, !dbg !11
  store i32* %0, i32** %impInput, align 8, !dbg !11
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !12), !dbg !13
  call void @llvm.dbg.declare(metadata !{i32** %i_ptr}, metadata !14), !dbg !13
  call void @llvm.dbg.declare(metadata !{float* %j}, metadata !15), !dbg !17
  call void @llvm.dbg.declare(metadata !{float** %j_ptr}, metadata !18), !dbg !17
  store float* %j, float** %j_ptr, align 8, !dbg !20
  store i32* %i, i32** %i_ptr, align 8, !dbg !21
  call void @llvm.dbg.declare(metadata !{%struct.People** %localPeople_ptr}, metadata !22), !dbg !30
  %call1 = call noalias i8* @malloc(i64 16) #3, !dbg !30
  %1 = bitcast i8* %call1 to %struct.People*, !dbg !30
  store %struct.People* %1, %struct.People** %localPeople_ptr, align 8, !dbg !30
  store i32 0, i32* %i, align 4, !dbg !31
  br label %for.cond, !dbg !31

for.cond:                                         ; preds = %for.inc, %entry
  %2 = load i32* %i, align 4, !dbg !31
  %cmp = icmp slt i32 %2, 255, !dbg !31
  br i1 %cmp, label %for.body, label %for.end, !dbg !31

for.body:                                         ; preds = %for.cond
  %3 = load %struct.People** %localPeople_ptr, align 8, !dbg !33
  %age = getelementptr inbounds %struct.People* %3, i32 0, i32 0, !dbg !33
  store i32 10, i32* %age, align 4, !dbg !33
  %4 = load i32* %i, align 4, !dbg !35
  %div = sdiv i32 %4, 100, !dbg !35
  %idxprom = sext i32 %div to i64, !dbg !35
  %5 = load i32** %impInput, align 8, !dbg !35
  %arrayidx = getelementptr inbounds i32* %5, i64 %idxprom, !dbg !35
  store i32 6, i32* %arrayidx, align 4, !dbg !35
  %6 = load i32* %i, align 4, !dbg !36
  %add = add nsw i32 %6, 1, !dbg !36
  %conv = sitofp i32 %add to float, !dbg !36
  %7 = load float** %j_ptr, align 8, !dbg !36
  store float %conv, float* %7, align 4, !dbg !36
  %8 = load i32* %i, align 4, !dbg !37
  %add2 = add nsw i32 %8, 99, !dbg !37
  %conv3 = sitofp i32 %add2 to double, !dbg !37
  %add4 = fadd double %conv3, 1.234000e-01, !dbg !37
  %conv5 = fptrunc double %add4 to float, !dbg !37
  store float %conv5, float* %j, align 4, !dbg !37
  %9 = load i32* %i, align 4, !dbg !38
  %10 = load i32** %i_ptr, align 8, !dbg !38
  store i32 %9, i32* %10, align 4, !dbg !38
  br label %for.inc, !dbg !39

for.inc:                                          ; preds = %for.body
  %11 = load i32* %i, align 4, !dbg !31
  %inc = add nsw i32 %11, 1, !dbg !31
  store i32 %inc, i32* %i, align 4, !dbg !31
  br label %for.cond, !dbg !31

for.end:                                          ; preds = %for.cond
  ret i32 0, !dbg !40
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata) #1

; Function Attrs: nounwind
declare noalias i8* @malloc(i64) #2

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf"="true" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf"="true" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind }

!llvm.dbg.cu = !{!0}

!0 = metadata !{i32 786449, metadata !1, i32 12, metadata !"clang version 3.3 (tags/RELEASE_33/final)", i1 false, metadata !"", i32 0, metadata !2, metadata !2, metadata !3, metadata !2, metadata !2, metadata !""} ; [ DW_TAG_compile_unit ] [/export/home/hzhang86/chapel/chapel/example/cCode/Test.c] [DW_LANG_C99]
!1 = metadata !{metadata !"Test.c", metadata !"/export/home/hzhang86/chapel/chapel/example/cCode"}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{i32 786478, metadata !1, metadata !5, metadata !"main", metadata !"main", metadata !"", i32 10, metadata !6, i1 false, i1 true, i32 0, i32 0, null, i32 0, i1 false, i32 ()* @main, null, null, metadata !2, i32 11} ; [ DW_TAG_subprogram ] [line 10] [def] [scope 11] [main]
!5 = metadata !{i32 786473, metadata !1}          ; [ DW_TAG_file_type ] [/export/home/hzhang86/chapel/chapel/example/cCode/Test.c]
!6 = metadata !{i32 786453, i32 0, i32 0, metadata !"", i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !7, i32 0, i32 0} ; [ DW_TAG_subroutine_type ] [line 0, size 0, align 0, offset 0] [from ]
!7 = metadata !{metadata !8}
!8 = metadata !{i32 786468, null, null, metadata !"int", i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ] [int] [line 0, size 32, align 32, offset 0, enc DW_ATE_signed]
!9 = metadata !{i32 786688, metadata !4, metadata !"impInput", metadata !5, i32 12, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [impInput] [line 12]
!10 = metadata !{i32 786447, null, null, metadata !"", i32 0, i64 64, i64 64, i64 0, i32 0, metadata !8} ; [ DW_TAG_pointer_type ] [line 0, size 64, align 64, offset 0] [from int]
!11 = metadata !{i32 12, i32 0, metadata !4, null}
!12 = metadata !{i32 786688, metadata !4, metadata !"i", metadata !5, i32 13, metadata !8, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [i] [line 13]
!13 = metadata !{i32 13, i32 0, metadata !4, null}
!14 = metadata !{i32 786688, metadata !4, metadata !"i_ptr", metadata !5, i32 13, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [i_ptr] [line 13]
!15 = metadata !{i32 786688, metadata !4, metadata !"j", metadata !5, i32 14, metadata !16, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [j] [line 14]
!16 = metadata !{i32 786468, null, null, metadata !"float", i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ] [float] [line 0, size 32, align 32, offset 0, enc DW_ATE_float]
!17 = metadata !{i32 14, i32 0, metadata !4, null}
!18 = metadata !{i32 786688, metadata !4, metadata !"j_ptr", metadata !5, i32 14, metadata !19, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [j_ptr] [line 14]
!19 = metadata !{i32 786447, null, null, metadata !"", i32 0, i64 64, i64 64, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ] [line 0, size 64, align 64, offset 0] [from float]
!20 = metadata !{i32 15, i32 0, metadata !4, null}
!21 = metadata !{i32 16, i32 0, metadata !4, null}
!22 = metadata !{i32 786688, metadata !4, metadata !"localPeople_ptr", metadata !5, i32 17, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [localPeople_ptr] [line 17]
!23 = metadata !{i32 786447, null, null, metadata !"", i32 0, i64 64, i64 64, i64 0, i32 0, metadata !24} ; [ DW_TAG_pointer_type ] [line 0, size 64, align 64, offset 0] [from People]
!24 = metadata !{i32 786451, metadata !1, null, metadata !"People", i32 5, i64 128, i64 64, i32 0, i32 0, null, metadata !25, i32 0, null, null} ; [ DW_TAG_structure_type ] [People] [line 5, size 128, align 64, offset 0] [from ]
!25 = metadata !{metadata !26, metadata !27}
!26 = metadata !{i32 786445, metadata !1, metadata !24, metadata !"age", i32 6, i64 32, i64 32, i64 0, i32 0, metadata !8} ; [ DW_TAG_member ] [age] [line 6, size 32, align 32, offset 0] [from int]
!27 = metadata !{i32 786445, metadata !1, metadata !24, metadata !"name", i32 7, i64 64, i64 64, i64 64, i32 0, metadata !28} ; [ DW_TAG_member ] [name] [line 7, size 64, align 64, offset 64] [from ]
!28 = metadata !{i32 786447, null, null, metadata !"", i32 0, i64 64, i64 64, i64 0, i32 0, metadata !29} ; [ DW_TAG_pointer_type ] [line 0, size 64, align 64, offset 0] [from char]
!29 = metadata !{i32 786468, null, null, metadata !"char", i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ] [char] [line 0, size 8, align 8, offset 0, enc DW_ATE_signed_char]
!30 = metadata !{i32 17, i32 0, metadata !4, null}
!31 = metadata !{i32 19, i32 0, metadata !32, null}
!32 = metadata !{i32 786443, metadata !1, metadata !4, i32 19, i32 0, i32 0} ; [ DW_TAG_lexical_block ] [/export/home/hzhang86/chapel/chapel/example/cCode/Test.c]
!33 = metadata !{i32 20, i32 0, metadata !34, null}
!34 = metadata !{i32 786443, metadata !1, metadata !32, i32 19, i32 0, i32 1} ; [ DW_TAG_lexical_block ] [/export/home/hzhang86/chapel/chapel/example/cCode/Test.c]
!35 = metadata !{i32 21, i32 0, metadata !34, null}
!36 = metadata !{i32 22, i32 0, metadata !34, null}
!37 = metadata !{i32 23, i32 0, metadata !34, null}
!38 = metadata !{i32 24, i32 0, metadata !34, null}
!39 = metadata !{i32 26, i32 0, metadata !34, null}
!40 = metadata !{i32 28, i32 0, metadata !4, null}
