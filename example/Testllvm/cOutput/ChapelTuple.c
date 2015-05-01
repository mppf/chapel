/* ChapelTuple.chpl:25 */
/*  235287 */ static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn) {
  /* 1273789 */ c_string modFormatStr;
  /* 1273790 */ c_string modStr;
  /* 1273806 */ _ref_int32_t refIndentLevel = NULL;
  /* 235288*/ /* 1273825*/ if (chpl__init_ChapelTuple_p) /* 1273826*/ {
    /* 1273822*/ goto _exit_chpl__init_ChapelTuple;
  }
  /* 1273798*/ modFormatStr = "%*s\n";
  /* 1273801*/ modStr = "ChapelTuple";
  /* 1273804*/ printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  /* 1273810*/ refIndentLevel = &moduleInitLevel;
  /* 1273813*/ *(refIndentLevel) += INT64(1);
  /* 1273787*/ chpl__init_ChapelTuple_p = true;
  /* 1273816*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTuple:;
  /* 271545*/ return;
}

/* ChapelTuple.chpl:109 */
/*  747052 */ static int64_t this4(_ref__tuple_27_star_int64_t this7, int64_t i, int64_t _ln, c_string _fn) {
  /*  747069 */ int64_t ret;
  /* 1143732 */ chpl_bool call_tmp;
  /* 1143739 */ chpl_bool T;
  /* 1143747 */ chpl_bool call_tmp2;
  /* 1104597 */ chpl_string call_tmp3;
  /* 747068*/ /* 1143734*/ call_tmp = (i < INT64(1));
  /* 1143757*/ if (call_tmp) /* 1143742*/ {
    /* 1143743*/ T = true;
  } else /* 1143746*/ {
    /* 1143749*/ call_tmp2 = (i > INT64(27));
    /* 1143754*/ T = call_tmp2;
  }
  /* 747218*/ if (T) /* 747213*/ {
    /* 1104599*/ string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), _ln, _fn);
    /* 747215*/ halt3(call_tmp3, i, _ln, _fn);
  }
  /* 747227*/ ret = *(*(this7) + (i - INT64(1)));
  /* 747231*/ return ret;
}

/* ChapelTuple.chpl:109 */
/* 1050193 */ static void this6(_ref__tuple_1_star_range_int64_t_bounded_F this7, int64_t i, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  /* 1050202 */ range_int64_t_bounded_F ret;
  /* 1197861 */ chpl_bool call_tmp;
  /* 1197868 */ chpl_bool T;
  /* 1197876 */ chpl_bool call_tmp2;
  /* 1105333 */ chpl_string call_tmp3;
  /* 1050201*/ /* 1197863*/ call_tmp = (i < INT64(1));
  /* 1197886*/ if (call_tmp) /* 1197871*/ {
    /* 1197872*/ T = true;
  } else /* 1197875*/ {
    /* 1197878*/ call_tmp2 = (i > INT64(1));
    /* 1197883*/ T = call_tmp2;
  }
  /* 1050232*/ if (T) /* 1050220*/ {
    /* 1105335*/ string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), _ln, _fn);
    /* 1050229*/ halt3(call_tmp3, i, _ln, _fn);
  }
  /* 1050240*/ ret = *(*(this7) + (i - INT64(1)));
  /* 1050254*/ *(_retArg) = ret;
  /* 1050248*/ return;
}

/* ChapelTuple.chpl:109 */
/*  905138 */ static _ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this7, int64_t i, int64_t _ln, c_string _fn) {
  /* 1197832 */ chpl_bool call_tmp;
  /* 1197839 */ chpl_bool T;
  /* 1197847 */ chpl_bool call_tmp2;
  /* 1104901 */ chpl_string call_tmp3;
  /*  905309 */ _ref_range_int64_t_bounded_F call_tmp4 = NULL;
  /* 905157*/ /* 1197834*/ call_tmp = (i < INT64(1));
  /* 1197857*/ if (call_tmp) /* 1197842*/ {
    /* 1197843*/ T = true;
  } else /* 1197846*/ {
    /* 1197849*/ call_tmp2 = (i > INT64(1));
    /* 1197854*/ T = call_tmp2;
  }
  /* 905307*/ if (T) /* 905302*/ {
    /* 1104903*/ string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), _ln, _fn);
    /* 905304*/ halt3(call_tmp3, i, _ln, _fn);
  }
  /* 905311*/ call_tmp4 = (*(this7) + (i - INT64(1)));
  /* 905320*/ return call_tmp4;
}

/* ChapelTuple.chpl:171 */
/*  693807 */ static void readWriteThis(_ref__tuple_1_star_int64_t this7, Writer f, int64_t _ln, c_string _fn) {
  /* 1272475 */ int64_t local_QIO_TUPLE_FORMAT_JSON;
  /* 1272469 */ int64_t local_QIO_TUPLE_FORMAT_SPACE;
  /* 1272463 */ int64_t local_QIO_STYLE_ELEMENT_TUPLE;
  /*  693825 */ int64_t call_tmp;
  /*  693840 */ ioLiteral start;
  /* 1119137 */ ioLiteral this8;
  /* 1119155 */ ioLiteral wrap_call_tmp;
  /*  693852 */ ioLiteral comma;
  /* 1119167 */ ioLiteral this9;
  /* 1119185 */ ioLiteral wrap_call_tmp2;
  /*  693864 */ ioLiteral end;
  /* 1119197 */ ioLiteral this10;
  /* 1119215 */ ioLiteral wrap_call_tmp3;
  /*  693878 */ chpl_bool call_tmp2;
  /* 1100631 */ chpl_bool call_tmp3;
  /* 1137742 */ ioLiteral this11;
  /* 1137760 */ ioLiteral wrap_call_tmp4;
  /* 1054118 */ _ref_ioLiteral _ref_tmp_ = NULL;
  /* 1137772 */ ioLiteral this12;
  /* 1137790 */ ioLiteral wrap_call_tmp5;
  /* 1054124 */ _ref_ioLiteral _ref_tmp_2 = NULL;
  /* 1137802 */ ioLiteral this13;
  /* 1137820 */ ioLiteral wrap_call_tmp6;
  /* 1054130 */ _ref_ioLiteral _ref_tmp_3 = NULL;
  /* 1100641 */ chpl_bool call_tmp4;
  /* 1137832 */ ioLiteral this14;
  /* 1137850 */ ioLiteral wrap_call_tmp7;
  /* 1054136 */ _ref_ioLiteral _ref_tmp_4 = NULL;
  /* 1137862 */ ioLiteral this15;
  /* 1137880 */ ioLiteral wrap_call_tmp8;
  /* 1054142 */ _ref_ioLiteral _ref_tmp_5 = NULL;
  /* 1137892 */ ioLiteral this16;
  /* 1137910 */ ioLiteral wrap_call_tmp9;
  /* 1054148 */ _ref_ioLiteral _ref_tmp_6 = NULL;
  /* 1137922 */ ioLiteral this17;
  /* 1137940 */ ioLiteral wrap_call_tmp10;
  /* 1054154 */ _ref_ioLiteral _ref_tmp_7 = NULL;
  /* 1137952 */ ioLiteral this18;
  /* 1137970 */ ioLiteral wrap_call_tmp11;
  /* 1054160 */ _ref_ioLiteral _ref_tmp_8 = NULL;
  /* 1137982 */ ioLiteral this19;
  /* 1138000 */ ioLiteral wrap_call_tmp12;
  /* 1054166 */ _ref_ioLiteral _ref_tmp_9 = NULL;
  /* 1095570 */ chpl_bool call_tmp5;
  /*  698325 */ int64_t coerce_tmp;
  /* 1095579 */ chpl_bool call_tmp6;
  /* 693822*/ /* 1272476*/ local_QIO_TUPLE_FORMAT_JSON = QIO_TUPLE_FORMAT_JSON;
  /* 1272470*/ local_QIO_TUPLE_FORMAT_SPACE = QIO_TUPLE_FORMAT_SPACE;
  /* 1272464*/ local_QIO_STYLE_ELEMENT_TUPLE = QIO_STYLE_ELEMENT_TUPLE;
  /* 1275360*/ chpl_check_nil(f, INT64(172), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTuple.chpl");
  /* 693827*/ call_tmp = styleElement(f, local_QIO_STYLE_ELEMENT_TUPLE);
  /* 1119139*/ (&this8)->val = "";
  /* 1119143*/ (&this8)->ignoreWhiteSpace = false;
  /* 1119147*/ (&this8)->val = "";
  /* 1119151*/ (&this8)->ignoreWhiteSpace = true;
  /* 1119157*/ wrap_call_tmp = _construct_ioLiteral("", true, &this8, _ln, _fn);
  /* 693849*/ start = wrap_call_tmp;
  /* 1119169*/ (&this9)->val = "";
  /* 1119173*/ (&this9)->ignoreWhiteSpace = false;
  /* 1119177*/ (&this9)->val = "";
  /* 1119181*/ (&this9)->ignoreWhiteSpace = true;
  /* 1119187*/ wrap_call_tmp2 = _construct_ioLiteral("", true, &this9, _ln, _fn);
  /* 693861*/ comma = wrap_call_tmp2;
  /* 1119199*/ (&this10)->val = "";
  /* 1119203*/ (&this10)->ignoreWhiteSpace = false;
  /* 1119207*/ (&this10)->val = "";
  /* 1119211*/ (&this10)->ignoreWhiteSpace = true;
  /* 1119217*/ wrap_call_tmp3 = _construct_ioLiteral("", true, &this10, _ln, _fn);
  /* 693873*/ end = wrap_call_tmp3;
  /* 1275362*/ chpl_check_nil(f, INT64(176), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTuple.chpl");
  /* 693880*/ call_tmp2 = binary(f);
  /* 1100633*/ call_tmp3 = (call_tmp == local_QIO_TUPLE_FORMAT_SPACE);
  /* 694028*/ if (call_tmp3) /* 693908*/ {
    /* 1137744*/ (&this11)->val = "";
    /* 1137748*/ (&this11)->ignoreWhiteSpace = false;
    /* 1137752*/ (&this11)->val = "";
    /* 1137756*/ (&this11)->ignoreWhiteSpace = true;
    /* 1137762*/ wrap_call_tmp4 = _construct_ioLiteral("", true, &this11, _ln, _fn);
    /* 1054122*/ _ref_tmp_ = &start;
    /* 693917*/ chpl___ASSIGN_8(_ref_tmp_, &wrap_call_tmp4, _ln, _fn);
    /* 1137774*/ (&this12)->val = "";
    /* 1137778*/ (&this12)->ignoreWhiteSpace = false;
    /* 1137782*/ (&this12)->val = " ";
    /* 1137786*/ (&this12)->ignoreWhiteSpace = true;
    /* 1137792*/ wrap_call_tmp5 = _construct_ioLiteral(" ", true, &this12, _ln, _fn);
    /* 1054128*/ _ref_tmp_2 = &comma;
    /* 693928*/ chpl___ASSIGN_8(_ref_tmp_2, &wrap_call_tmp5, _ln, _fn);
    /* 1137804*/ (&this13)->val = "";
    /* 1137808*/ (&this13)->ignoreWhiteSpace = false;
    /* 1137812*/ (&this13)->val = "";
    /* 1137816*/ (&this13)->ignoreWhiteSpace = true;
    /* 1137822*/ wrap_call_tmp6 = _construct_ioLiteral("", true, &this13, _ln, _fn);
    /* 1054134*/ _ref_tmp_3 = &end;
    /* 693939*/ chpl___ASSIGN_8(_ref_tmp_3, &wrap_call_tmp6, _ln, _fn);
  } else /* 693942*/ {
    /* 1100643*/ call_tmp4 = (call_tmp == local_QIO_TUPLE_FORMAT_JSON);
    /* 694027*/ if (call_tmp4) /* 693959*/ {
      /* 1137834*/ (&this14)->val = "";
      /* 1137838*/ (&this14)->ignoreWhiteSpace = false;
      /* 1137842*/ (&this14)->val = "[";
      /* 1137846*/ (&this14)->ignoreWhiteSpace = true;
      /* 1137852*/ wrap_call_tmp7 = _construct_ioLiteral("[", true, &this14, _ln, _fn);
      /* 1054140*/ _ref_tmp_4 = &start;
      /* 693968*/ chpl___ASSIGN_8(_ref_tmp_4, &wrap_call_tmp7, _ln, _fn);
      /* 1137864*/ (&this15)->val = "";
      /* 1137868*/ (&this15)->ignoreWhiteSpace = false;
      /* 1137872*/ (&this15)->val = ", ";
      /* 1137876*/ (&this15)->ignoreWhiteSpace = true;
      /* 1137882*/ wrap_call_tmp8 = _construct_ioLiteral(", ", true, &this15, _ln, _fn);
      /* 1054146*/ _ref_tmp_5 = &comma;
      /* 693979*/ chpl___ASSIGN_8(_ref_tmp_5, &wrap_call_tmp8, _ln, _fn);
      /* 1137894*/ (&this16)->val = "";
      /* 1137898*/ (&this16)->ignoreWhiteSpace = false;
      /* 1137902*/ (&this16)->val = "]";
      /* 1137906*/ (&this16)->ignoreWhiteSpace = true;
      /* 1137912*/ wrap_call_tmp9 = _construct_ioLiteral("]", true, &this16, _ln, _fn);
      /* 1054152*/ _ref_tmp_6 = &end;
      /* 693990*/ chpl___ASSIGN_8(_ref_tmp_6, &wrap_call_tmp9, _ln, _fn);
    } else /* 693993*/ {
      /* 1137924*/ (&this17)->val = "";
      /* 1137928*/ (&this17)->ignoreWhiteSpace = false;
      /* 1137932*/ (&this17)->val = "(";
      /* 1137936*/ (&this17)->ignoreWhiteSpace = true;
      /* 1137942*/ wrap_call_tmp10 = _construct_ioLiteral("(", true, &this17, _ln, _fn);
      /* 1054158*/ _ref_tmp_7 = &start;
      /* 694002*/ chpl___ASSIGN_8(_ref_tmp_7, &wrap_call_tmp10, _ln, _fn);
      /* 1137954*/ (&this18)->val = "";
      /* 1137958*/ (&this18)->ignoreWhiteSpace = false;
      /* 1137962*/ (&this18)->val = ", ";
      /* 1137966*/ (&this18)->ignoreWhiteSpace = true;
      /* 1137972*/ wrap_call_tmp11 = _construct_ioLiteral(", ", true, &this18, _ln, _fn);
      /* 1054164*/ _ref_tmp_8 = &comma;
      /* 694013*/ chpl___ASSIGN_8(_ref_tmp_8, &wrap_call_tmp11, _ln, _fn);
      /* 1137984*/ (&this19)->val = "";
      /* 1137988*/ (&this19)->ignoreWhiteSpace = false;
      /* 1137992*/ (&this19)->val = ")";
      /* 1137996*/ (&this19)->ignoreWhiteSpace = true;
      /* 1138002*/ wrap_call_tmp12 = _construct_ioLiteral(")", true, &this19, _ln, _fn);
      /* 1054170*/ _ref_tmp_9 = &end;
      /* 694024*/ chpl___ASSIGN_8(_ref_tmp_9, &wrap_call_tmp12, _ln, _fn);
    }
  }
  /* 1095572*/ call_tmp5 = (! call_tmp2);
  /* 694049*/ if (call_tmp5) /* 694044*/ {
    /* 1277026*/ chpl_check_nil(f, INT64(193), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTuple.chpl");
    /* 1138061*/ readwrite(f, &start, _ln, _fn);
  }
  /* 698328*/ coerce_tmp = *(*(this7) + INT64(0));
  /* 1277030*/ chpl_check_nil(f, INT64(196), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTuple.chpl");
  /* 1138075*/ readwrite2(f, coerce_tmp, _ln, _fn);
  /* 1095581*/ call_tmp6 = (! call_tmp2);
  /* 694174*/ if (call_tmp6) /* 694169*/ {
    /* 1277028*/ chpl_check_nil(f, INT64(205), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelTuple.chpl");
    /* 1138068*/ readwrite(f, &end, _ln, _fn);
  }
  /* 694175*/ return;
}

