/* ChapelIO.chpl:23 */
/*  235317 */ static void chpl__init_ChapelIO(int64_t _ln, c_string _fn) {
  /* 1274157 */ c_string modFormatStr;
  /* 1274158 */ c_string modStr;
  /* 1274174 */ _ref_int32_t refIndentLevel = NULL;
  /* 235318*/ /* 1274193*/ if (chpl__init_ChapelIO_p) /* 1274194*/ {
    /* 1274190*/ goto _exit_chpl__init_ChapelIO;
  }
  /* 1274166*/ modFormatStr = "%*s\n";
  /* 1274169*/ modStr = "ChapelIO";
  /* 1274172*/ printModuleInit(modFormatStr, modStr, INT64(8), _ln, _fn);
  /* 1274178*/ refIndentLevel = &moduleInitLevel;
  /* 1274181*/ *(refIndentLevel) += INT64(1);
  /* 1274155*/ chpl__init_ChapelIO_p = true;
  /* 1273255*/ {
    /* 1273256*/ chpl__init_ChapelBase(_ln, _fn);
    /* 1273258*/ chpl__init_SysBasic(_ln, _fn);
    /* 1273260*/ chpl__init_IO(_ln, _fn);
  }
  /* 298460*/ chpl__testParOn = false;
  /* 1274184*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelIO:;
  /* 279377*/ return;
}

/* ChapelIO.chpl:34 */
/*  195832 */ static Writer _construct_Writer(Writer meme, int64_t _ln, c_string _fn) {
  /*  195834 */ Writer this7 = NULL;
  /*  195844 */ object T = NULL;
  /* 195833*/ /* 195839*/ this7 = meme;
  /* 1275226*/ chpl_check_nil(this7, INT64(34), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 195851*/ T = &((this7)->super);
  /* 195842*/ _construct_object(T);
  /* 195855*/ return meme;
}

/* ChapelIO.chpl:34 */
/*  435738 */ static void chpl__auto_destroy_Writer(Writer this7, int64_t _ln, c_string _fn) {
  /* 435739*/ /* 435744*/ return;
}

/* ChapelIO.chpl:37 */
/*  112596 */ static chpl_bool binary(Writer this7) {
  /* 112597*/ /* 278985*/ return false;
}

/* ChapelIO.chpl:39 */
/*  112612 */ static int64_t styleElement(Writer this7, int64_t element) {
  /* 112613*/ /* 278999*/ return INT64(0);
}

/* ChapelIO.chpl:44 */
/*  692324 */ static void writePrimitive(Writer this7, chpl_string x, int64_t _ln, c_string _fn) {
  /* 692335*/ /* 692337*/ halt("Generic Writer.writePrimitive called", _ln, _fn);
  /* 692339*/ return;
}

/* ChapelIO.chpl:44 */
/*  697952 */ static void writePrimitive2(Writer this7, ioLiteral* const x, int64_t _ln, c_string _fn) {
  /* 697963*/ /* 697965*/ halt("Generic Writer.writePrimitive called", _ln, _fn);
  /* 697967*/ return;
}

/* ChapelIO.chpl:44 */
/*  699386 */ static void writePrimitive3(Writer this7, int64_t x, int64_t _ln, c_string _fn) {
  /* 699397*/ /* 699399*/ halt("Generic Writer.writePrimitive called", _ln, _fn);
  /* 699401*/ return;
}

/* ChapelIO.chpl:44 */
/*  925539 */ static void writePrimitive4(Writer this7, uint64_t x, int64_t _ln, c_string _fn) {
  /* 925550*/ /* 925552*/ halt("Generic Writer.writePrimitive called", _ln, _fn);
  /* 925554*/ return;
}

/* ChapelIO.chpl:51 */
/*  691200 */ static void writeIt(Writer this7, chpl_string x, int64_t _ln, c_string _fn) {
  /* 1023482 */ int32_t _virtual_method_tmp_;
  /* 691211*/ /* 1275634*/ chpl_check_nil(this7, INT64(53), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1023486*/ _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
  /* 691238*/ ((void(*)(Writer, chpl_string, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(this7, x, _ln, _fn);
  /* 691403*/ return;
}

/* ChapelIO.chpl:51 */
/*  692348 */ static void writeIt2(Writer this7, _tuple_1_star_int64_t* const x, int64_t _ln, c_string _fn) {
  /* 1054112 */ _ref__tuple_1_star_int64_t _ref_tmp_ = NULL;
  /* 692359*/ /* 1054116*/ _ref_tmp_ = x;
  /* 1137724*/ readWriteThis(_ref_tmp_, this7, _ln, _fn);
  /* 692551*/ return;
}

/* ChapelIO.chpl:51 */
/*  696562 */ static void writeIt3(Writer this7, ioLiteral* const x, int64_t _ln, c_string _fn) {
  /* 1023489 */ int32_t _virtual_method_tmp_;
  /* 696573*/ /* 1275636*/ chpl_check_nil(this7, INT64(53), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1023493*/ _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
  /* 696600*/ ((void(*)(Writer, ioLiteral* const, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(4))])(this7, x, _ln, _fn);
  /* 696765*/ return;
}

/* ChapelIO.chpl:51 */
/*  698353 */ static void writeIt4(Writer this7, int64_t x, int64_t _ln, c_string _fn) {
  /* 1023496 */ int32_t _virtual_method_tmp_;
  /* 698364*/ /* 1275638*/ chpl_check_nil(this7, INT64(53), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1023500*/ _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
  /* 698391*/ ((void(*)(Writer, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(3))])(this7, x, _ln, _fn);
  /* 698556*/ return;
}

/* ChapelIO.chpl:51 */
/*  920848 */ static void writeIt5(Writer this7, chpl_taskID_t x, int64_t _ln, c_string _fn) {
  /* 920859*/ /* 921046*/ writeThis(x, this7, _ln, _fn);
  /* 921051*/ return;
}

/* ChapelIO.chpl:51 */
/*  924500 */ static void writeIt6(Writer this7, uint64_t x, int64_t _ln, c_string _fn) {
  /* 1023510 */ int32_t _virtual_method_tmp_;
  /* 924511*/ /* 1275640*/ chpl_check_nil(this7, INT64(53), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1023514*/ _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
  /* 924538*/ ((void(*)(Writer, uint64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this7, x, _ln, _fn);
  /* 924703*/ return;
}

/* ChapelIO.chpl:74 */
/*  696541 */ static void readwrite(Writer this7, ioLiteral* const x, int64_t _ln, c_string _fn) {
  /* 696552*/ /* 1275364*/ chpl_check_nil(this7, INT64(75), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 696557*/ writeIt3(this7, x, _ln, _fn);
  /* 696559*/ return;
}

/* ChapelIO.chpl:74 */
/*  698332 */ static void readwrite2(Writer this7, int64_t x, int64_t _ln, c_string _fn) {
  /* 698343*/ /* 1275366*/ chpl_check_nil(this7, INT64(75), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 698348*/ writeIt4(this7, x, _ln, _fn);
  /* 698350*/ return;
}

/* ChapelIO.chpl:77 */
/*  685863 */ static void write2(Writer this7, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
  /* 1267526 */ int64_t this_x2_x1;
  /*  692553 */ _tuple_1_star_int64_t coerce_tmp;
  /* 685878*/ /* 1267532*/ this_x2_x1 = *(*(_e1_args) + INT64(0));
  /* 1275356*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 691178*/ writeIt(this7, _e0_args, _ln, _fn);
  /* 1267508*/ *(coerce_tmp + INT64(0)) = this_x2_x1;
  /* 1275358*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 691193*/ writeIt2(this7, &coerce_tmp, _ln, _fn);
  /* 685933*/ return;
}

/* ChapelIO.chpl:77 */
/*  748100 */ static void write3(Writer this7, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  /* 748115*/ /* 1275384*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 748221*/ writeIt(this7, _e0_args, _ln, _fn);
  /* 1275386*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 748236*/ writeIt4(this7, _e1_args, _ln, _fn);
  /* 748170*/ return;
}

/* ChapelIO.chpl:77 */
/*  933278 */ static void write8(Writer this7, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  /* 933293*/ /* 1275566*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 933399*/ writeIt(this7, _e0_args, _ln, _fn);
  /* 1275568*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 933414*/ writeIt5(this7, _e1_args, _ln, _fn);
  /* 933348*/ return;
}

/* ChapelIO.chpl:77 */
/*  855065 */ static void write4(Writer this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, int64_t _ln, c_string _fn) {
  /* 855088*/ /* 1275494*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 855210*/ writeIt(this7, _e0_args, _ln, _fn);
  /* 1275496*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 855225*/ writeIt4(this7, _e1_args, _ln, _fn);
  /* 1275498*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 855240*/ writeIt(this7, _e2_args, _ln, _fn);
  /* 1275500*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 855255*/ writeIt4(this7, _e3_args, _ln, _fn);
  /* 855145*/ return;
}

/* ChapelIO.chpl:77 */
/*  888741 */ static void write5(Writer this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn) {
  /* 888772*/ /* 1275526*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888910*/ writeIt(this7, _e0_args, _ln, _fn);
  /* 1275528*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888925*/ writeIt4(this7, _e1_args, _ln, _fn);
  /* 1275530*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888940*/ writeIt(this7, _e2_args, _ln, _fn);
  /* 1275532*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888955*/ writeIt4(this7, _e3_args, _ln, _fn);
  /* 1275534*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888970*/ writeIt(this7, _e4_args, _ln, _fn);
  /* 1275536*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888985*/ writeIt4(this7, _e5_args, _ln, _fn);
  /* 888831*/ return;
}

/* ChapelIO.chpl:77 */
/*  924283 */ static void write7(Writer this7, uint64_t _e0_args, int64_t _ln, c_string _fn) {
  /* 924294*/ /* 1275556*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 924493*/ writeIt6(this7, _e0_args, _ln, _fn);
  /* 924348*/ return;
}

/* ChapelIO.chpl:77 */
/*  920558 */ static void write6(Writer this7, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn) {
  /* 920593*/ /* 1275542*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920739*/ writeIt(this7, _e0_args, _ln, _fn);
  /* 1275544*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920754*/ writeIt5(this7, _e1_args, _ln, _fn);
  /* 1275546*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920769*/ writeIt(this7, _e2_args, _ln, _fn);
  /* 1275548*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920784*/ writeIt4(this7, _e3_args, _ln, _fn);
  /* 1275550*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920799*/ writeIt(this7, _e4_args, _ln, _fn);
  /* 1275552*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920814*/ writeIt4(this7, _e5_args, _ln, _fn);
  /* 1275554*/ chpl_check_nil(this7, INT64(79), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920829*/ writeIt(this7, _e6_args, _ln, _fn);
  /* 920653*/ return;
}

/* ChapelIO.chpl:203 */
/*  435805 */ static void chpl__auto_destroy_Reader(Reader this7, int64_t _ln, c_string _fn) {
  /* 435806*/ /* 435811*/ return;
}

/* ChapelIO.chpl:484 */
/*  115085 */ static void assert2(chpl_bool test, int64_t _ln, c_string _fn) {
  /* 1095345 */ chpl_bool call_tmp;
  /* 115086*/ /* 1095347*/ call_tmp = (! test);
  /* 115097*/ if (call_tmp) /* 115098*/ {
    /* 115093*/ chpl_error("assert failed", _ln, _fn);
  }
  /* 279246*/ return;
}

/* ChapelIO.chpl:507 */
/*  115199 */ static void halt(c_string s, int64_t _ln, c_string _fn) {
  /* 1102300 */ c_string_copy call_tmp;
  /* 115200*/ /* 1102302*/ call_tmp = string_concat("halt reached - ", s, _ln, _fn);
  /* 115209*/ chpl_error(call_tmp, _ln, _fn);
  /* 279256*/ return;
}

/* ChapelIO.chpl:511 */
/*  675829 */ static void halt2(chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
  /* 1267510 */ int64_t this_x2_x1;
  /*  675850 */ c_string tmpstring;
  /*  683830 */ _tuple_1_star_int64_t coerce_tmp;
  /* 1054106 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1102410 */ c_string_copy call_tmp;
  /* 675840*/ /* 1267516*/ this_x2_x1 = *(*(_e1_args) + INT64(0));
  /* 675859*/ tmpstring = "";
  /* 1267486*/ *(coerce_tmp + INT64(0)) = this_x2_x1;
  /* 1054110*/ _ref_tmp_ = &tmpstring;
  /* 675866*/ write9(_ref_tmp_, _e0_args, &coerce_tmp, _ln, _fn);
  /* 1102412*/ call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  /* 675877*/ chpl_error(call_tmp, _ln, _fn);
  /* 675879*/ return;
}

/* ChapelIO.chpl:511 */
/*  747704 */ static void halt3(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  /*  747725 */ c_string tmpstring;
  /* 1054472 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1102420 */ c_string_copy call_tmp;
  /* 747715*/ /* 747734*/ tmpstring = "";
  /* 1054476*/ _ref_tmp_ = &tmpstring;
  /* 747741*/ write10(_ref_tmp_, _e0_args, _e1_args, _ln, _fn);
  /* 1102422*/ call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  /* 747752*/ chpl_error(call_tmp, _ln, _fn);
  /* 747754*/ return;
}

/* ChapelIO.chpl:511 */
/*  932882 */ static void halt7(chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  /*  932903 */ c_string tmpstring;
  /* 1055366 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1102460 */ c_string_copy call_tmp;
  /* 932893*/ /* 932912*/ tmpstring = "";
  /* 1055370*/ _ref_tmp_ = &tmpstring;
  /* 932919*/ write14(_ref_tmp_, _e0_args, _e1_args, _ln, _fn);
  /* 1102462*/ call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  /* 932930*/ chpl_error(call_tmp, _ln, _fn);
  /* 932932*/ return;
}

/* ChapelIO.chpl:511 */
/*  853329 */ static void halt4(chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, int64_t _ln, c_string _fn) {
  /*  853360 */ c_string tmpstring;
  /* 1054808 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1102430 */ c_string_copy call_tmp;
  /* 853348*/ /* 853369*/ tmpstring = "";
  /* 1054812*/ _ref_tmp_ = &tmpstring;
  /* 853376*/ write11(_ref_tmp_, _e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
  /* 1102432*/ call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  /* 853387*/ chpl_error(call_tmp, _ln, _fn);
  /* 853389*/ return;
}

/* ChapelIO.chpl:511 */
/*  886853 */ static void halt5(chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn) {
  /*  886894 */ c_string tmpstring;
  /* 1055150 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1102440 */ c_string_copy call_tmp;
  /* 886880*/ /* 886903*/ tmpstring = "";
  /* 1055154*/ _ref_tmp_ = &tmpstring;
  /* 886910*/ write12(_ref_tmp_, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _ln, _fn);
  /* 1102442*/ call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  /* 886921*/ chpl_error(call_tmp, _ln, _fn);
  /* 886923*/ return;
}

/* ChapelIO.chpl:511 */
/*  918432 */ static void halt6(chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn) {
  /*  918478 */ c_string tmpstring;
  /* 1055324 */ _ref_c_string _ref_tmp_ = NULL;
  /* 1102450 */ c_string_copy call_tmp;
  /* 918463*/ /* 918487*/ tmpstring = "";
  /* 1055328*/ _ref_tmp_ = &tmpstring;
  /* 918494*/ write13(_ref_tmp_, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args, _ln, _fn);
  /* 1102452*/ call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
  /* 918505*/ chpl_error(call_tmp, _ln, _fn);
  /* 918507*/ return;
}

/* ChapelIO.chpl:537 */
/*  115358 */ static void writeThis(chpl_taskID_t this7, Writer f, int64_t _ln, c_string _fn) {
  /* 1198397 */ uint64_t call_tmp;
  /* 115359*/ /* 1198399*/ call_tmp = ((uint64_t)(((intptr_t)(this7))));
  /* 1275132*/ chpl_check_nil(f, INT64(539), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 115387*/ write7(f, call_tmp, _ln, _fn);
  /* 279268*/ return;
}

/* ChapelIO.chpl:547 */
/*  195901 */ static StringWriter _construct_StringWriter(c_string_copy s, StringWriter meme, int64_t _ln, c_string _fn) {
  /*  195903 */ StringWriter this7 = NULL;
  /*  195914 */ Writer T = NULL;
  /* 195902*/ /* 195909*/ this7 = meme;
  /* 1275228*/ chpl_check_nil(this7, INT64(547), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 195921*/ T = &((this7)->super);
  /* 195912*/ _construct_Writer(T, _ln, _fn);
  /* 1275230*/ chpl_check_nil(this7, INT64(548), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 195933*/ (this7)->s = s;
  /* 195938*/ return this7;
}

/* ChapelIO.chpl:549 */
/*  115445 */ static StringWriter StringWriter2(c_string x, int64_t _ln, c_string _fn) {
  /*  254524 */ StringWriter this7 = NULL;
  /* 1137616 */ StringWriter this8 = NULL;
  /* 1137618 */ int64_t call_tmp;
  /* 1137624 */ chpl_opaque cast_tmp;
  /* 1137643 */ c_string_copy ret;
  /* 1137652 */ StringWriter wrap_call_tmp = NULL;
  /* 1117349 */ _ref_c_string_copy call_tmp2 = NULL;
  /*  373576 */ c_string_copy call_tmp3;
  /* 1102208 */ c_string_copy coerce_tmp;
  /* 1102214 */ c_string call_tmp4;
  /* 1102221 */ c_string call_tmp5;
  /* 1102228 */ int64_t call_tmp6;
  /* 1102235 */ chpl_bool call_tmp7;
  /* 115446*/ /* 1137620*/ call_tmp = sizeof(chpl_StringWriter_object);
  /* 1137626*/ cast_tmp = chpl_here_alloc(call_tmp, INT16(18), _ln, _fn);
  /* 1137632*/ this8 = ((StringWriter)(cast_tmp));
  /* 1137637*/ ((object)(this8))->chpl__cid = chpl__cid_StringWriter;
  /* 1277022*/ chpl_check_nil(this8, INT64(549), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137639*/ (this8)->s = NULL;
  /* 1137645*/ ret = NULL;
  /* 1277024*/ chpl_check_nil(this8, INT64(549), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137648*/ (this8)->s = ret;
  /* 1137654*/ wrap_call_tmp = _construct_StringWriter(ret, this8, _ln, _fn);
  /* 254525*/ this7 = wrap_call_tmp;
  /* 1276274*/ chpl_check_nil(this7, INT64(550), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117351*/ call_tmp2 = &((this7)->s);
  /* 373579*/ call_tmp3 = string_copy(x, _ln, _fn);
  /* 1278506*/ chpl_check_nil(this7, INT64(550), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1102210*/ coerce_tmp = (this7)->s;
  /* 1102216*/ call_tmp4 = ((c_string)(coerce_tmp));
  /* 1102223*/ call_tmp5 = ((c_string)(NULL));
  /* 1102230*/ call_tmp6 = string_compare(call_tmp4, call_tmp5);
  /* 1102237*/ call_tmp7 = (call_tmp6 != INT64(0));
  /* 1102247*/ if (call_tmp7) /* 1102243*/ {
    /* 1102245*/ chpl_rt_free_c_string(coerce_tmp, _ln, _fn);
  }
  /* 1102248*/ *(call_tmp2) = call_tmp3;
  /* 254529*/ return this7;
}

/* ChapelIO.chpl:552 */
/*  996587 */ static void writePrimitive5(StringWriter this7, chpl_string x, int64_t _ln, c_string _fn) {
  /* 1240792 */ c_string_copy call_tmp;
  /* 1117429 */ _ref_c_string_copy call_tmp2 = NULL;
  /* 1240803 */ c_string_copy coerce_tmp;
  /* 1240809 */ c_string call_tmp3;
  /* 1240816 */ c_string call_tmp4;
  /* 1240823 */ c_string_copy call_tmp5;
  /* 1240833 */ c_string_copy coerce_tmp2;
  /* 1240839 */ c_string call_tmp6;
  /* 1240846 */ c_string call_tmp7;
  /* 1240853 */ int64_t call_tmp8;
  /* 1240860 */ chpl_bool call_tmp9;
  /* 1101956 */ c_string call_tmp10;
  /* 1101963 */ c_string call_tmp11;
  /* 1101970 */ int64_t call_tmp12;
  /* 1101977 */ chpl_bool call_tmp13;
  /* 996598*/ /* 1240794*/ call_tmp = string_copy(x, _ln, _fn);
  /* 1276290*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117431*/ call_tmp2 = &((this7)->s);
  /* 1278508*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1240805*/ coerce_tmp = (this7)->s;
  /* 1240811*/ call_tmp3 = ((c_string)(coerce_tmp));
  /* 1240818*/ call_tmp4 = ((c_string)(call_tmp));
  /* 1240825*/ call_tmp5 = string_concat(call_tmp3, call_tmp4, _ln, _fn);
  /* 1278510*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1240835*/ coerce_tmp2 = (this7)->s;
  /* 1240841*/ call_tmp6 = ((c_string)(coerce_tmp2));
  /* 1240848*/ call_tmp7 = ((c_string)(NULL));
  /* 1240855*/ call_tmp8 = string_compare(call_tmp6, call_tmp7);
  /* 1240862*/ call_tmp9 = (call_tmp8 != INT64(0));
  /* 1240872*/ if (call_tmp9) /* 1240868*/ {
    /* 1240870*/ chpl_rt_free_c_string(coerce_tmp2, _ln, _fn);
  }
  /* 1240873*/ *(call_tmp2) = call_tmp5;
  /* 1101958*/ call_tmp10 = ((c_string)(call_tmp));
  /* 1101965*/ call_tmp11 = ((c_string)(NULL));
  /* 1101972*/ call_tmp12 = string_compare(call_tmp10, call_tmp11);
  /* 1101979*/ call_tmp13 = (call_tmp12 != INT64(0));
  /* 1101989*/ if (call_tmp13) /* 1101985*/ {
    /* 1101987*/ chpl_rt_free_c_string(call_tmp, _ln, _fn);
  }
  /* 996634*/ return;
}

/* ChapelIO.chpl:552 */
/*  999085 */ static void writePrimitive6(StringWriter this7, ioLiteral* const x, int64_t _ln, c_string _fn) {
  /* 1241114 */ _ref_c_string call_tmp = NULL;
  /* 1241116 */ c_string T;
  /* 1241118 */ c_string ret;
  /* 1241132 */ c_string_copy call_tmp2;
  /* 1117439 */ _ref_c_string_copy call_tmp3 = NULL;
  /* 1240881 */ c_string_copy coerce_tmp;
  /* 1240887 */ c_string call_tmp4;
  /* 1240894 */ c_string call_tmp5;
  /* 1240901 */ c_string_copy call_tmp6;
  /* 1240911 */ c_string_copy coerce_tmp2;
  /* 1240917 */ c_string call_tmp7;
  /* 1240924 */ c_string call_tmp8;
  /* 1240931 */ int64_t call_tmp9;
  /* 1240938 */ chpl_bool call_tmp10;
  /* 1101993 */ c_string call_tmp11;
  /* 1102000 */ c_string call_tmp12;
  /* 1102007 */ int64_t call_tmp13;
  /* 1102014 */ chpl_bool call_tmp14;
  /* 999096*/ /* 1241120*/ ret = (x)->val;
  /* 1241125*/ T = ret;
  /* 1241128*/ call_tmp = &T;
  /* 1241134*/ call_tmp2 = string_copy(*(call_tmp), _ln, _fn);
  /* 1276292*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117441*/ call_tmp3 = &((this7)->s);
  /* 1278512*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1240883*/ coerce_tmp = (this7)->s;
  /* 1240889*/ call_tmp4 = ((c_string)(coerce_tmp));
  /* 1240896*/ call_tmp5 = ((c_string)(call_tmp2));
  /* 1240903*/ call_tmp6 = string_concat(call_tmp4, call_tmp5, _ln, _fn);
  /* 1278514*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1240913*/ coerce_tmp2 = (this7)->s;
  /* 1240919*/ call_tmp7 = ((c_string)(coerce_tmp2));
  /* 1240926*/ call_tmp8 = ((c_string)(NULL));
  /* 1240933*/ call_tmp9 = string_compare(call_tmp7, call_tmp8);
  /* 1240940*/ call_tmp10 = (call_tmp9 != INT64(0));
  /* 1240950*/ if (call_tmp10) /* 1240946*/ {
    /* 1240948*/ chpl_rt_free_c_string(coerce_tmp2, _ln, _fn);
  }
  /* 1240951*/ *(call_tmp3) = call_tmp6;
  /* 1101995*/ call_tmp11 = ((c_string)(call_tmp2));
  /* 1102002*/ call_tmp12 = ((c_string)(NULL));
  /* 1102009*/ call_tmp13 = string_compare(call_tmp11, call_tmp12);
  /* 1102016*/ call_tmp14 = (call_tmp13 != INT64(0));
  /* 1102026*/ if (call_tmp14) /* 1102022*/ {
    /* 1102024*/ chpl_rt_free_c_string(call_tmp2, _ln, _fn);
  }
  /* 999132*/ return;
}

/* ChapelIO.chpl:552 */
/* 1001070 */ static void writePrimitive7(StringWriter this7, int64_t x, int64_t _ln, c_string _fn) {
  /* 1138803 */ c_string_copy call_tmp;
  /* 1138805 */ uint32_t call_tmp2;
  /* 1117449 */ _ref_c_string_copy call_tmp3 = NULL;
  /* 1240959 */ c_string_copy coerce_tmp;
  /* 1240965 */ c_string call_tmp4;
  /* 1240972 */ c_string call_tmp5;
  /* 1240979 */ c_string_copy call_tmp6;
  /* 1240989 */ c_string_copy coerce_tmp2;
  /* 1240995 */ c_string call_tmp7;
  /* 1241002 */ c_string call_tmp8;
  /* 1241009 */ int64_t call_tmp9;
  /* 1241016 */ chpl_bool call_tmp10;
  /* 1102030 */ c_string call_tmp11;
  /* 1102037 */ c_string call_tmp12;
  /* 1102044 */ int64_t call_tmp13;
  /* 1102051 */ chpl_bool call_tmp14;
  /* 1001081*/ /* 1138807*/ call_tmp2 = ((uint32_t)(INT64(8)));
  /* 1138812*/ call_tmp = integral_to_c_string_copy(x, call_tmp2, true);
  /* 1276294*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117451*/ call_tmp3 = &((this7)->s);
  /* 1278516*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1240961*/ coerce_tmp = (this7)->s;
  /* 1240967*/ call_tmp4 = ((c_string)(coerce_tmp));
  /* 1240974*/ call_tmp5 = ((c_string)(call_tmp));
  /* 1240981*/ call_tmp6 = string_concat(call_tmp4, call_tmp5, _ln, _fn);
  /* 1278518*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1240991*/ coerce_tmp2 = (this7)->s;
  /* 1240997*/ call_tmp7 = ((c_string)(coerce_tmp2));
  /* 1241004*/ call_tmp8 = ((c_string)(NULL));
  /* 1241011*/ call_tmp9 = string_compare(call_tmp7, call_tmp8);
  /* 1241018*/ call_tmp10 = (call_tmp9 != INT64(0));
  /* 1241028*/ if (call_tmp10) /* 1241024*/ {
    /* 1241026*/ chpl_rt_free_c_string(coerce_tmp2, _ln, _fn);
  }
  /* 1241029*/ *(call_tmp3) = call_tmp6;
  /* 1102032*/ call_tmp11 = ((c_string)(call_tmp));
  /* 1102039*/ call_tmp12 = ((c_string)(NULL));
  /* 1102046*/ call_tmp13 = string_compare(call_tmp11, call_tmp12);
  /* 1102053*/ call_tmp14 = (call_tmp13 != INT64(0));
  /* 1102063*/ if (call_tmp14) /* 1102059*/ {
    /* 1102061*/ chpl_rt_free_c_string(call_tmp, _ln, _fn);
  }
  /* 1001117*/ return;
}

/* ChapelIO.chpl:552 */
/* 1001124 */ static void writePrimitive8(StringWriter this7, uint64_t x, int64_t _ln, c_string _fn) {
  /* 1241141 */ int64_t call_tmp;
  /* 1241148 */ c_string_copy call_tmp2;
  /* 1241150 */ uint32_t call_tmp3;
  /* 1117459 */ _ref_c_string_copy call_tmp4 = NULL;
  /* 1241037 */ c_string_copy coerce_tmp;
  /* 1241043 */ c_string call_tmp5;
  /* 1241050 */ c_string call_tmp6;
  /* 1241057 */ c_string_copy call_tmp7;
  /* 1241067 */ c_string_copy coerce_tmp2;
  /* 1241073 */ c_string call_tmp8;
  /* 1241080 */ c_string call_tmp9;
  /* 1241087 */ int64_t call_tmp10;
  /* 1241094 */ chpl_bool call_tmp11;
  /* 1102067 */ c_string call_tmp12;
  /* 1102074 */ c_string call_tmp13;
  /* 1102081 */ int64_t call_tmp14;
  /* 1102088 */ chpl_bool call_tmp15;
  /* 1001135*/ /* 1241143*/ call_tmp = ((int64_t)(x));
  /* 1241152*/ call_tmp3 = ((uint32_t)(INT64(8)));
  /* 1241157*/ call_tmp2 = integral_to_c_string_copy(call_tmp, call_tmp3, false);
  /* 1276296*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117461*/ call_tmp4 = &((this7)->s);
  /* 1278520*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1241039*/ coerce_tmp = (this7)->s;
  /* 1241045*/ call_tmp5 = ((c_string)(coerce_tmp));
  /* 1241052*/ call_tmp6 = ((c_string)(call_tmp2));
  /* 1241059*/ call_tmp7 = string_concat(call_tmp5, call_tmp6, _ln, _fn);
  /* 1278522*/ chpl_check_nil(this7, INT64(555), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1241069*/ coerce_tmp2 = (this7)->s;
  /* 1241075*/ call_tmp8 = ((c_string)(coerce_tmp2));
  /* 1241082*/ call_tmp9 = ((c_string)(NULL));
  /* 1241089*/ call_tmp10 = string_compare(call_tmp8, call_tmp9);
  /* 1241096*/ call_tmp11 = (call_tmp10 != INT64(0));
  /* 1241106*/ if (call_tmp11) /* 1241102*/ {
    /* 1241104*/ chpl_rt_free_c_string(coerce_tmp2, _ln, _fn);
  }
  /* 1241107*/ *(call_tmp4) = call_tmp7;
  /* 1102069*/ call_tmp12 = ((c_string)(call_tmp2));
  /* 1102076*/ call_tmp13 = ((c_string)(NULL));
  /* 1102083*/ call_tmp14 = string_compare(call_tmp12, call_tmp13);
  /* 1102090*/ call_tmp15 = (call_tmp14 != INT64(0));
  /* 1102100*/ if (call_tmp15) /* 1102096*/ {
    /* 1102098*/ chpl_rt_free_c_string(call_tmp2, _ln, _fn);
  }
  /* 1001171*/ return;
}

/* ChapelIO.chpl:558 */
/*  115492 */ static void chpl___TILDE_StringWriter(StringWriter this7, int64_t _ln, c_string _fn) {
  /* 1137506 */ c_string_copy ret;
  /* 1101882 */ c_string call_tmp;
  /* 1101889 */ c_string call_tmp2;
  /* 1101896 */ int64_t call_tmp3;
  /* 1101903 */ chpl_bool call_tmp4;
  /* 1117359 */ _ref_c_string_copy call_tmp5 = NULL;
  /* 115493*/ /* 1277008*/ chpl_check_nil(this7, INT64(559), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137508*/ ret = (this7)->s;
  /* 1101884*/ call_tmp = ((c_string)(ret));
  /* 1101891*/ call_tmp2 = ((c_string)(NULL));
  /* 1101898*/ call_tmp3 = string_compare(call_tmp, call_tmp2);
  /* 1101905*/ call_tmp4 = (call_tmp3 != INT64(0));
  /* 1101915*/ if (call_tmp4) /* 1101911*/ {
    /* 1101913*/ chpl_rt_free_c_string(ret, _ln, _fn);
  }
  /* 1276276*/ chpl_check_nil(this7, INT64(560), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117361*/ call_tmp5 = &((this7)->s);
  /* 115510*/ *(call_tmp5) = NULL;
  /* 279274*/ return;
}

/* ChapelIO.chpl:580 */
/*  683086 */ static void write9(_ref_c_string this7, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
  /* 1267518 */ int64_t this_x2_x1;
  /*  683767 */ StringWriter sc = NULL;
  /*  683844 */ c_string coerce_tmp;
  /* 1137663 */ Writer call_tmp = NULL;
  /*  691144 */ _tuple_1_star_int64_t coerce_tmp2;
  /* 1137516 */ c_string_copy ret;
  /* 1101588 */ c_string call_tmp2;
  /* 1117369 */ _ref_c_string_copy call_tmp3 = NULL;
  /*  683804 */ StringWriter delete_tmp = NULL;
  /*  683813 */ chpl_opaque call_tmp4;
  /* 683757*/ /* 1267524*/ this_x2_x1 = *(*(_e1_args) + INT64(0));
  /* 683847*/ coerce_tmp = *(this7);
  /* 683769*/ sc = StringWriter2(coerce_tmp, _ln, _fn);
  /* 1137665*/ call_tmp = ((Writer)(sc));
  /* 1267497*/ *(coerce_tmp2 + INT64(0)) = this_x2_x1;
  /* 1275352*/ chpl_check_nil(call_tmp, INT64(582), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 683778*/ write2(call_tmp, _e0_args, &coerce_tmp2, _ln, _fn);
  /* 1277010*/ chpl_check_nil(sc, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137518*/ ret = (sc)->s;
  /* 1101590*/ call_tmp2 = ((c_string)(ret));
  /* 1098139*/ *(this7) = call_tmp2;
  /* 1276278*/ chpl_check_nil(sc, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117371*/ call_tmp3 = &((sc)->s);
  /* 683801*/ *(call_tmp3) = NULL;
  /* 683806*/ delete_tmp = sc;
  /* 1275354*/ chpl_check_nil(sc, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 683810*/ chpl___TILDE_StringWriter(sc, _ln, _fn);
  /* 683815*/ call_tmp4 = ((void*)(delete_tmp));
  /* 683820*/ chpl_here_free(call_tmp4, _ln, _fn);
  /* 683822*/ return;
}

/* ChapelIO.chpl:580 */
/*  747945 */ static void write10(_ref_c_string this7, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
  /*  747989 */ StringWriter sc = NULL;
  /*  748066 */ c_string coerce_tmp;
  /* 1137673 */ Writer call_tmp = NULL;
  /* 1137526 */ c_string_copy ret;
  /* 1101638 */ c_string call_tmp2;
  /* 1117379 */ _ref_c_string_copy call_tmp3 = NULL;
  /*  748026 */ StringWriter delete_tmp = NULL;
  /*  748035 */ chpl_opaque call_tmp4;
  /* 747979*/ /* 748069*/ coerce_tmp = *(this7);
  /* 747991*/ sc = StringWriter2(coerce_tmp, _ln, _fn);
  /* 1137675*/ call_tmp = ((Writer)(sc));
  /* 1275380*/ chpl_check_nil(call_tmp, INT64(582), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 748000*/ write3(call_tmp, _e0_args, _e1_args, _ln, _fn);
  /* 1277012*/ chpl_check_nil(sc, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137528*/ ret = (sc)->s;
  /* 1101640*/ call_tmp2 = ((c_string)(ret));
  /* 1098151*/ *(this7) = call_tmp2;
  /* 1276280*/ chpl_check_nil(sc, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117381*/ call_tmp3 = &((sc)->s);
  /* 748023*/ *(call_tmp3) = NULL;
  /* 748028*/ delete_tmp = sc;
  /* 1275382*/ chpl_check_nil(sc, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 748032*/ chpl___TILDE_StringWriter(sc, _ln, _fn);
  /* 748037*/ call_tmp4 = ((void*)(delete_tmp));
  /* 748042*/ chpl_here_free(call_tmp4, _ln, _fn);
  /* 748044*/ return;
}

/* ChapelIO.chpl:580 */
/*  933123 */ static void write14(_ref_c_string this7, chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn) {
  /*  933167 */ StringWriter sc = NULL;
  /*  933244 */ c_string coerce_tmp;
  /* 1137713 */ Writer call_tmp = NULL;
  /* 1137566 */ c_string_copy ret;
  /* 1101738 */ c_string call_tmp2;
  /* 1117419 */ _ref_c_string_copy call_tmp3 = NULL;
  /*  933204 */ StringWriter delete_tmp = NULL;
  /*  933213 */ chpl_opaque call_tmp4;
  /* 933157*/ /* 933247*/ coerce_tmp = *(this7);
  /* 933169*/ sc = StringWriter2(coerce_tmp, _ln, _fn);
  /* 1137715*/ call_tmp = ((Writer)(sc));
  /* 1275562*/ chpl_check_nil(call_tmp, INT64(582), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 933178*/ write8(call_tmp, _e0_args, _e1_args, _ln, _fn);
  /* 1277020*/ chpl_check_nil(sc, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137568*/ ret = (sc)->s;
  /* 1101740*/ call_tmp2 = ((c_string)(ret));
  /* 1098175*/ *(this7) = call_tmp2;
  /* 1276288*/ chpl_check_nil(sc, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117421*/ call_tmp3 = &((sc)->s);
  /* 933201*/ *(call_tmp3) = NULL;
  /* 933206*/ delete_tmp = sc;
  /* 1275564*/ chpl_check_nil(sc, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 933210*/ chpl___TILDE_StringWriter(sc, _ln, _fn);
  /* 933215*/ call_tmp4 = ((void*)(delete_tmp));
  /* 933220*/ chpl_here_free(call_tmp4, _ln, _fn);
  /* 933222*/ return;
}

/* ChapelIO.chpl:580 */
/*  853934 */ static void write11(_ref_c_string this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, int64_t _ln, c_string _fn) {
  /*  854914 */ StringWriter sc = NULL;
  /*  855005 */ c_string coerce_tmp;
  /* 1137683 */ Writer call_tmp = NULL;
  /* 1137536 */ c_string_copy ret;
  /* 1101708 */ c_string call_tmp2;
  /* 1117389 */ _ref_c_string_copy call_tmp3 = NULL;
  /*  854951 */ StringWriter delete_tmp = NULL;
  /*  854960 */ chpl_opaque call_tmp4;
  /* 854902*/ /* 855008*/ coerce_tmp = *(this7);
  /* 854916*/ sc = StringWriter2(coerce_tmp, _ln, _fn);
  /* 1137685*/ call_tmp = ((Writer)(sc));
  /* 1275490*/ chpl_check_nil(call_tmp, INT64(582), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 854925*/ write4(call_tmp, _e0_args, _e1_args, _e2_args, _e3_args, _ln, _fn);
  /* 1277014*/ chpl_check_nil(sc, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137538*/ ret = (sc)->s;
  /* 1101710*/ call_tmp2 = ((c_string)(ret));
  /* 1098157*/ *(this7) = call_tmp2;
  /* 1276282*/ chpl_check_nil(sc, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117391*/ call_tmp3 = &((sc)->s);
  /* 854948*/ *(call_tmp3) = NULL;
  /* 854953*/ delete_tmp = sc;
  /* 1275492*/ chpl_check_nil(sc, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 854957*/ chpl___TILDE_StringWriter(sc, _ln, _fn);
  /* 854962*/ call_tmp4 = ((void*)(delete_tmp));
  /* 854967*/ chpl_here_free(call_tmp4, _ln, _fn);
  /* 854969*/ return;
}

/* ChapelIO.chpl:580 */
/*  887492 */ static void write12(_ref_c_string this7, chpl_string _e0_args, int64_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn) {
  /*  888550 */ StringWriter sc = NULL;
  /*  888655 */ c_string coerce_tmp;
  /* 1137693 */ Writer call_tmp = NULL;
  /* 1137546 */ c_string_copy ret;
  /* 1101718 */ c_string call_tmp2;
  /* 1117399 */ _ref_c_string_copy call_tmp3 = NULL;
  /*  888587 */ StringWriter delete_tmp = NULL;
  /*  888596 */ chpl_opaque call_tmp4;
  /* 888536*/ /* 888658*/ coerce_tmp = *(this7);
  /* 888552*/ sc = StringWriter2(coerce_tmp, _ln, _fn);
  /* 1137695*/ call_tmp = ((Writer)(sc));
  /* 1275522*/ chpl_check_nil(call_tmp, INT64(582), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888561*/ write5(call_tmp, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _ln, _fn);
  /* 1277016*/ chpl_check_nil(sc, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137548*/ ret = (sc)->s;
  /* 1101720*/ call_tmp2 = ((c_string)(ret));
  /* 1098163*/ *(this7) = call_tmp2;
  /* 1276284*/ chpl_check_nil(sc, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117401*/ call_tmp3 = &((sc)->s);
  /* 888584*/ *(call_tmp3) = NULL;
  /* 888589*/ delete_tmp = sc;
  /* 1275524*/ chpl_check_nil(sc, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 888593*/ chpl___TILDE_StringWriter(sc, _ln, _fn);
  /* 888598*/ call_tmp4 = ((void*)(delete_tmp));
  /* 888603*/ chpl_here_free(call_tmp4, _ln, _fn);
  /* 888605*/ return;
}

/* ChapelIO.chpl:580 */
/*  919250 */ static void write13(_ref_c_string this7, chpl_string _e0_args, chpl_taskID_t _e1_args, chpl_string _e2_args, int64_t _e3_args, chpl_string _e4_args, int64_t _e5_args, chpl_string _e6_args, int64_t _ln, c_string _fn) {
  /*  920347 */ StringWriter sc = NULL;
  /*  920459 */ c_string coerce_tmp;
  /* 1137703 */ Writer call_tmp = NULL;
  /* 1137556 */ c_string_copy ret;
  /* 1101728 */ c_string call_tmp2;
  /* 1117409 */ _ref_c_string_copy call_tmp3 = NULL;
  /*  920384 */ StringWriter delete_tmp = NULL;
  /*  920393 */ chpl_opaque call_tmp4;
  /* 920332*/ /* 920462*/ coerce_tmp = *(this7);
  /* 920349*/ sc = StringWriter2(coerce_tmp, _ln, _fn);
  /* 1137705*/ call_tmp = ((Writer)(sc));
  /* 1275538*/ chpl_check_nil(call_tmp, INT64(582), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920358*/ write6(call_tmp, _e0_args, _e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args, _ln, _fn);
  /* 1277018*/ chpl_check_nil(sc, INT64(584), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1137558*/ ret = (sc)->s;
  /* 1101730*/ call_tmp2 = ((c_string)(ret));
  /* 1098169*/ *(this7) = call_tmp2;
  /* 1276286*/ chpl_check_nil(sc, INT64(586), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 1117411*/ call_tmp3 = &((sc)->s);
  /* 920381*/ *(call_tmp3) = NULL;
  /* 920386*/ delete_tmp = sc;
  /* 1275540*/ chpl_check_nil(sc, INT64(587), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelIO.chpl");
  /* 920390*/ chpl___TILDE_StringWriter(sc, _ln, _fn);
  /* 920395*/ call_tmp4 = ((void*)(delete_tmp));
  /* 920400*/ chpl_here_free(call_tmp4, _ln, _fn);
  /* 920402*/ return;
}

