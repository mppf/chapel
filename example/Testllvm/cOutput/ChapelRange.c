/* ChapelRange.chpl:23 */
/*  235290 */ static void chpl__init_ChapelRange(int64_t _ln, c_string _fn) {
  /* 1273835 */ c_string modFormatStr;
  /* 1273836 */ c_string modStr;
  /* 1273852 */ _ref_int32_t refIndentLevel = NULL;
  /* 235291*/ /* 1273871*/ if (chpl__init_ChapelRange_p) /* 1273872*/ {
    /* 1273868*/ goto _exit_chpl__init_ChapelRange;
  }
  /* 1273844*/ modFormatStr = "%*s\n";
  /* 1273847*/ modStr = "ChapelRange";
  /* 1273850*/ printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
  /* 1273856*/ refIndentLevel = &moduleInitLevel;
  /* 1273859*/ *(refIndentLevel) += INT64(1);
  /* 1273833*/ chpl__init_ChapelRange_p = true;
  /* 1273862*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelRange:;
  /* 272992*/ return;
}

/* ChapelRange.chpl:58 */
/*  538072 */ static range_int64_t_bounded_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, c_string _fn) {
  /*  538144 */ range_int64_t_bounded_F this7;
  /* 538198*/ /* 538201*/ this7 = *(meme);
  /* 538216*/ (&this7)->_low = _low;
  /* 538220*/ (&this7)->_high = _high;
  /* 538224*/ (&this7)->_stride = _stride;
  /* 538228*/ (&this7)->_alignment = _alignment;
  /* 538232*/ (&this7)->_aligned = _aligned;
  /* 538236*/ return this7;
}

/* ChapelRange.chpl:58 */
/*  627412 */ static range_int64_t_boundedLow_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, c_string _fn) {
  /*  627484 */ range_int64_t_boundedLow_F this7;
  /* 627847*/ /* 627850*/ this7 = *(meme);
  /* 627865*/ (&this7)->_low = _low;
  /* 627869*/ (&this7)->_high = _high;
  /* 627873*/ (&this7)->_stride = _stride;
  /* 627877*/ (&this7)->_alignment = _alignment;
  /* 627881*/ (&this7)->_aligned = _aligned;
  /* 627885*/ return this7;
}

/* ChapelRange.chpl:93 */
/*  540817 */ static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn) {
  /*  540861 */ range_int64_t_bounded_F this7;
  /* 1120022 */ range_int64_t_bounded_F this8;
  /* 1120064 */ range_int64_t_bounded_F wrap_call_tmp;
  /* 1122872 */ _ref_int64_t call_tmp = NULL;
  /* 1122979 */ _ref_int64_t call_tmp2 = NULL;
  /* 1123096 */ _ref_int64_t call_tmp3 = NULL;
  /* 1100551 */ chpl_bool call_tmp4;
  /* 1123143 */ _ref_chpl_bool call_tmp5 = NULL;
  /* 540868*/ /* 1120024*/ (&this8)->_low = INT64(0);
  /* 1120028*/ (&this8)->_high = INT64(0);
  /* 1120032*/ (&this8)->_stride = INT64(0);
  /* 1120036*/ (&this8)->_alignment = INT64(0);
  /* 1120040*/ (&this8)->_aligned = false;
  /* 1120044*/ (&this8)->_low = INT64(1);
  /* 1120048*/ (&this8)->_high = INT64(0);
  /* 1120052*/ (&this8)->_stride = INT64(1);
  /* 1120056*/ (&this8)->_alignment = INT64(0);
  /* 1120060*/ (&this8)->_aligned = false;
  /* 1120066*/ wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this8, _ln, _fn);
  /* 540871*/ this7 = wrap_call_tmp;
  /* 1122874*/ call_tmp = &((&this7)->_low);
  /* 1102941*/ *(call_tmp) = _low;
  /* 1122981*/ call_tmp2 = &((&this7)->_high);
  /* 1102947*/ *(call_tmp2) = _high;
  /* 1123098*/ call_tmp3 = &((&this7)->_alignment);
  /* 1102953*/ *(call_tmp3) = _alignment;
  /* 1100553*/ call_tmp4 = (_stride == INT64(1));
  /* 541038*/ assert2(call_tmp4, _ln, _fn);
  /* 1123145*/ call_tmp5 = &((&this7)->_aligned);
  /* 1094717*/ *(call_tmp5) = _aligned;
  /* 541053*/ return this7;
}

/* ChapelRange.chpl:93 */
/*  627034 */ static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn) {
  /*  627078 */ range_int64_t_boundedLow_F this7;
  /* 1133401 */ range_int64_t_boundedLow_F this8;
  /* 1133443 */ range_int64_t_boundedLow_F wrap_call_tmp;
  /* 1133465 */ _ref_int64_t call_tmp = NULL;
  /* 1133512 */ _ref_int64_t call_tmp2 = NULL;
  /* 1133559 */ _ref_int64_t call_tmp3 = NULL;
  /* 1100581 */ chpl_bool call_tmp4;
  /* 1133596 */ _ref_chpl_bool call_tmp5 = NULL;
  /* 627085*/ /* 1133403*/ (&this8)->_low = INT64(0);
  /* 1133407*/ (&this8)->_high = INT64(0);
  /* 1133411*/ (&this8)->_stride = INT64(0);
  /* 1133415*/ (&this8)->_alignment = INT64(0);
  /* 1133419*/ (&this8)->_aligned = false;
  /* 1133423*/ (&this8)->_low = INT64(1);
  /* 1133427*/ (&this8)->_high = INT64(0);
  /* 1133431*/ (&this8)->_stride = INT64(1);
  /* 1133435*/ (&this8)->_alignment = INT64(0);
  /* 1133439*/ (&this8)->_aligned = false;
  /* 1133445*/ wrap_call_tmp = _construct_range2(INT64(1), INT64(0), INT64(1), INT64(0), false, &this8, _ln, _fn);
  /* 627088*/ this7 = wrap_call_tmp;
  /* 1133467*/ call_tmp = &((&this7)->_low);
  /* 1103055*/ *(call_tmp) = _low;
  /* 1133514*/ call_tmp2 = &((&this7)->_high);
  /* 1103061*/ *(call_tmp2) = _high;
  /* 1133561*/ call_tmp3 = &((&this7)->_alignment);
  /* 1103067*/ *(call_tmp3) = _alignment;
  /* 1100583*/ call_tmp4 = (_stride == INT64(1));
  /* 627255*/ assert2(call_tmp4, _ln, _fn);
  /* 1133598*/ call_tmp5 = &((&this7)->_aligned);
  /* 1094741*/ *(call_tmp5) = _aligned;
  /* 627270*/ return this7;
}

/* ChapelRange.chpl:128 */
/* 1037693 */ static void _build_range(int64_t low, int64_t high2, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  /* 1122854 */ range_int64_t_bounded_F wrap_call_tmp;
  /* 1037699*/ /* 1122856*/ wrap_call_tmp = range(low, high2, INT64(1), INT64(0), false, _ln, _fn);
  /* 1037728*/ *(_retArg) = wrap_call_tmp;
  /* 1037722*/ return;
}

/* ChapelRange.chpl:140 */
/* 1040092 */ static void _build_range2(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, c_string _fn) {
  /* 1133387 */ range_int64_t_boundedLow_F wrap_call_tmp;
  /* 1040096*/ /* 1133389*/ wrap_call_tmp = range2(bound, bound, INT64(1), INT64(0), false, _ln, _fn);
  /* 1040125*/ *(_retArg) = wrap_call_tmp;
  /* 1040119*/ return;
}

/* ChapelRange.chpl:228 */
/*  595861 */ static int64_t length(_ref_range_int64_t_bounded_F this7, int64_t _ln, c_string _fn) {
  /*  595874 */ int64_t ret;
  /* 1122915 */ int64_t ret2;
  /* 1122992 */ int64_t ret3;
  /* 1115005 */ chpl_bool call_tmp;
  /*  596175 */ int64_t s;
  /*  596216 */ int64_t call_tmp2;
  /* 1126604 */ int64_t ret4;
  /* 1126606 */ int64_t ret5;
  /* 1126079 */ int64_t ret6;
  /* 1126081 */ int64_t ret7;
  /* 1104004 */ int64_t call_tmp3;
  /* 1115714 */ int64_t call_tmp4;
  /* 1115414 */ int64_t call_tmp5;
  /* 595881*/ /* 1276444*/ chpl_check_nil(this7, INT64(244), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1122917*/ ret2 = (this7)->_low;
  /* 1276446*/ chpl_check_nil(this7, INT64(244), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1122994*/ ret3 = (this7)->_high;
  /* 1115007*/ call_tmp = (ret2 > ret3);
  /* 596172*/ if (call_tmp) /* 596149*/ {
    /* 1103031*/ ret = INT64(0);
    /* 596171*/ goto _end_length;
  }
  /* 596213*/ s = INT64(1);
  /* 1276624*/ chpl_check_nil(this7, INT64(246), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1126608*/ ret5 = (this7)->_high;
  /* 1126613*/ ret4 = ret5;
  /* 1126617*/ goto _end_alignedHigh;
  _end_alignedHigh:;
  /* 596218*/ call_tmp2 = ret4;
  /* 1276612*/ chpl_check_nil(this7, INT64(246), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1126083*/ ret7 = (this7)->_low;
  /* 1126088*/ ret6 = ret7;
  /* 1126092*/ goto _end_alignedLow;
  _end_alignedLow:;
  /* 1104006*/ call_tmp3 = (call_tmp2 - ret6);
  /* 1115716*/ call_tmp4 = (call_tmp3 / s);
  /* 1115416*/ call_tmp5 = (call_tmp4 + INT64(1));
  /* 1103037*/ ret = call_tmp5;
  _end_length:;
  /* 596281*/ return ret;
}

/* ChapelRange.chpl:771 */
/* 1049754 */ static void this3(_ref_range_int64_t_bounded_F this7, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  /* 1240257 */ int64_t ret;
  /* 1240268 */ int64_t ret2;
  /* 1240279 */ int64_t ret3;
  /* 1240290 */ int64_t ret4;
  /* 1049885 */ _tuple_2_star_int64_t type_tmp;
  /* 1049897 */ _tuple_2_star_int64_t call_tmp;
  /* 1049950 */ range_int64_t_bounded_F result;
  /* 1240420 */ int64_t T;
  /* 1240422 */ chpl_bool call_tmp2;
  /* 1240464 */ int64_t T2;
  /* 1240466 */ chpl_bool call_tmp3;
  /* 1240338 */ chpl_bool call_tmp4;
  /* 1240344 */ chpl_bool T3;
  /* 1240348 */ chpl_bool ret5;
  /* 1240355 */ chpl_bool T4;
  /* 1240363 */ chpl_bool ret6;
  /* 1049760*/ /* 1278176*/ chpl_check_nil(this7, INT64(809), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1240259*/ ret = (this7)->_low;
  /* 1278178*/ chpl_check_nil(this7, INT64(810), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1240270*/ ret2 = (this7)->_high;
  /* 1240281*/ ret3 = (other)->_low;
  /* 1240292*/ ret4 = (other)->_high;
  /* 1270224*/ *(type_tmp + INT64(0)) = INT64(0);
  /* 1270228*/ *(type_tmp + INT64(1)) = INT64(0);
  /* 1269774*/ *(call_tmp + INT64(0)) = INT64(1);
  /* 1269778*/ *(call_tmp + INT64(1)) = INT64(0);
  /* 1197826*/ *(type_tmp + INT64(0)) = *(call_tmp + INT64(0));
  *(type_tmp + INT64(1)) = *(call_tmp + INT64(1));
  /* 1240424*/ call_tmp2 = (ret > ret3);
  /* 1240438*/ if (call_tmp2) /* 1240430*/ {
    /* 1240431*/ T = ret;
  } else /* 1240434*/ {
    /* 1240435*/ T = ret3;
  }
  /* 1240468*/ call_tmp3 = (ret2 < ret4);
  /* 1240482*/ if (call_tmp3) /* 1240474*/ {
    /* 1240475*/ T2 = ret2;
  } else /* 1240478*/ {
    /* 1240479*/ T2 = ret4;
  }
  /* 1240340*/ call_tmp4 = (! false);
  /* 1240381*/ if (call_tmp4) /* 1240347*/ {
    /* 1278180*/ chpl_check_nil(this7, INT64(842), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
    /* 1240350*/ ret5 = (this7)->_aligned;
    /* 1240373*/ if (ret5) /* 1240358*/ {
      /* 1240359*/ T4 = true;
    } else /* 1240362*/ {
      /* 1240365*/ ret6 = (other)->_aligned;
      /* 1240370*/ T4 = ret6;
    }
    /* 1240374*/ T3 = T4;
  } else /* 1240377*/ {
    /* 1240378*/ T3 = false;
  }
  /* 1050005*/ result = range(T, T2, INT64(1), INT64(0), T3, _ln, _fn);
  /* 1050033*/ *(_retArg) = result;
  /* 1050027*/ return;
}

/* ChapelRange.chpl:893 */
/* 1040270 */ static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  /* 1100791 */ chpl_bool call_tmp;
  /* 1040304 */ range_int64_t_bounded_F call_tmp2;
  /* 1133651 */ chpl_bool call_tmp3;
  /* 1133657 */ chpl_bool T;
  /* 1133661 */ chpl_bool call_tmp4;
  /* 1111159 */ int64_t call_tmp5;
  /* 1133681 */ int64_t T2;
  /* 1133689 */ chpl_bool call_tmp6;
  /* 1133698 */ int64_t ret;
  /* 1133709 */ int64_t ret2;
  /* 1133722 */ int64_t call_tmp7;
  /* 1133729 */ int64_t call_tmp8;
  /* 1133746 */ int64_t T3;
  /* 1133754 */ chpl_bool call_tmp9;
  /* 1133763 */ int64_t ret3;
  /* 1133774 */ int64_t ret4;
  /* 1133787 */ int64_t call_tmp10;
  /* 1133794 */ int64_t call_tmp11;
  /* 1133582 */ int64_t ret5;
  /* 1133619 */ chpl_bool ret6;
  /* 1040481 */ range_int64_t_bounded_F call_tmp12;
  /* 1040276*/ /* 1100793*/ call_tmp = (count == INT64(0));
  /* 1040323*/ if (call_tmp) /* 1040303*/ {
    /* 1040306*/ call_tmp2 = range(INT64(1), INT64(0), INT64(1), INT64(0), false, _ln, _fn);
    /* 1040522*/ *(_retArg) = call_tmp2;
    /* 1040322*/ goto _end_chpl_count_help;
  }
  /* 1133653*/ call_tmp3 = (! false);
  /* 1133675*/ if (call_tmp3) /* 1133660*/ {
    /* 1133663*/ call_tmp4 = (count < INT64(0));
    /* 1133668*/ T = call_tmp4;
  } else /* 1133671*/ {
    /* 1133672*/ T = false;
  }
  /* 1040350*/ if (T) /* 1040346*/ {
    /* 1040348*/ halt("With a negative count, the range must have a last index.", _ln, _fn);
  }
  /* 1111161*/ call_tmp5 = (count * INT64(1));
  /* 1133691*/ call_tmp6 = (call_tmp5 > INT64(0));
  /* 1133740*/ if (call_tmp6) /* 1133697*/ {
    /* 1133700*/ ret = (r)->_low;
    /* 1133705*/ T2 = ret;
  } else /* 1133708*/ {
    /* 1133711*/ ret2 = (r)->_high;
    /* 1133724*/ call_tmp7 = (call_tmp5 + INT64(1));
    /* 1133731*/ call_tmp8 = chpl__add(ret2, call_tmp7, _ln, _fn);
    /* 1133737*/ T2 = call_tmp8;
  }
  /* 1133756*/ call_tmp9 = (call_tmp5 < INT64(0));
  /* 1133805*/ if (call_tmp9) /* 1133762*/ {
    /* 1133765*/ ret3 = (r)->_high;
    /* 1133770*/ T3 = ret3;
  } else /* 1133773*/ {
    /* 1133776*/ ret4 = (r)->_low;
    /* 1133789*/ call_tmp10 = (call_tmp5 - INT64(1));
    /* 1133796*/ call_tmp11 = chpl__add(ret4, call_tmp10, _ln, _fn);
    /* 1133802*/ T3 = call_tmp11;
  }
  /* 1133584*/ ret5 = (r)->_alignment;
  /* 1133621*/ ret6 = (r)->_aligned;
  /* 1040495*/ call_tmp12 = range(T2, T3, INT64(1), ret5, ret6, _ln, _fn);
  /* 1040527*/ *(_retArg) = call_tmp12;
  _end_chpl_count_help:;
  /* 1040516*/ return;
}

/* ChapelRange.chpl:965 */
/* 1040134 */ static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
  /* 1040143 */ range_int64_t_bounded_F call_tmp;
  /* 1051672 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1040140*/ /* 1051675*/ ret_to_arg_ref_tmp_ = &call_tmp;
  /* 1040150*/ chpl_count_help(r, count, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1040174*/ *(_retArg) = call_tmp;
  /* 1040168*/ return;
}

/* ChapelRange.chpl:984 */
/*  598597 */ static chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this7, chpl_bool shouldHalt, int64_t _ln, c_string _fn) {
  /*  598611 */ chpl_bool ret;
  /* 1128516 */ int64_t ret2;
  /* 1128877 */ int64_t ret3;
  /* 1115015 */ chpl_bool call_tmp;
  /*  598659 */ chpl_bool willOverFlow;
  /* 1128171 */ int64_t ret4;
  /* 1128178 */ chpl_bool call_tmp2;
  /* 1128185 */ chpl_bool T;
  /*  598821 */ int64_t call_tmp3;
  /* 1128141 */ int64_t ret5;
  /* 1104024 */ int64_t call_tmp4;
  /* 1115035 */ chpl_bool call_tmp5;
  /* 1128200 */ int64_t ret6;
  /* 1128207 */ chpl_bool call_tmp6;
  /* 1128214 */ chpl_bool T2;
  /*  598998 */ int64_t call_tmp7;
  /* 1128161 */ int64_t ret7;
  /* 1104034 */ int64_t call_tmp8;
  /* 1109342 */ chpl_bool call_tmp9;
  /* 1128235 */ chpl_bool T3;
  /* 598616*/ /* 1276644*/ chpl_check_nil(this7, INT64(986), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1128518*/ ret2 = (this7)->_low;
  /* 1276656*/ chpl_check_nil(this7, INT64(986), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1128879*/ ret3 = (this7)->_high;
  /* 1115017*/ call_tmp = (ret2 > ret3);
  /* 598658*/ if (call_tmp) /* 598651*/ {
    /* 598652*/ ret = false;
    /* 598657*/ goto _end_checkIfIterWillOverflow;
  }
  /* 598661*/ willOverFlow = false;
  /* 1276640*/ chpl_check_nil(this7, INT64(992), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
  /* 1128173*/ ret4 = (this7)->_high;
  /* 1128180*/ call_tmp2 = (ret4 > INT64(0));
  /* 1128196*/ if (call_tmp2) /* 1128188*/ {
    /* 1128189*/ T = true;
  } else /* 1128192*/ {
    /* 1128193*/ T = false;
  }
  /* 599044*/ if (T) /* 598804*/ {
    /* 598823*/ call_tmp3 = max2(_ln, _fn);
    /* 1276636*/ chpl_check_nil(this7, INT64(993), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
    /* 1128143*/ ret5 = (this7)->_high;
    /* 1104026*/ call_tmp4 = (call_tmp3 - ret5);
    /* 1115037*/ call_tmp5 = (INT64(1) > call_tmp4);
    /* 598865*/ if (call_tmp5) /* 598860*/ {
      /* 1094729*/ willOverFlow = true;
    }
  } else /* 598866*/ {
    /* 1276642*/ chpl_check_nil(this7, INT64(996), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
    /* 1128202*/ ret6 = (this7)->_high;
    /* 1128209*/ call_tmp6 = (ret6 < INT64(0));
    /* 1128225*/ if (call_tmp6) /* 1128217*/ {
      /* 1128218*/ T2 = false;
    } else /* 1128221*/ {
      /* 1128222*/ T2 = false;
    }
    /* 599043*/ if (T2) /* 598981*/ {
      /* 599000*/ call_tmp7 = min2(_ln, _fn);
      /* 1276638*/ chpl_check_nil(this7, INT64(997), "/export/home/hzhang86/chapel/chapel/modules/internal/ChapelRange.chpl");
      /* 1128163*/ ret7 = (this7)->_high;
      /* 1104036*/ call_tmp8 = (call_tmp7 - ret7);
      /* 1109344*/ call_tmp9 = (INT64(1) < call_tmp8);
      /* 599042*/ if (call_tmp9) /* 599037*/ {
        /* 1094735*/ willOverFlow = true;
      }
    }
  }
  /* 1128246*/ if (willOverFlow) /* 1128238*/ {
    /* 1128239*/ T3 = shouldHalt;
  } else /* 1128242*/ {
    /* 1128243*/ T3 = false;
  }
  /* 599361*/ if (T3) /* 599357*/ {
    /* 599359*/ halt("Overflow detected for iteration over a bounded range.", _ln, _fn);
  }
  /* 599362*/ ret = willOverFlow;
  _end_checkIfIterWillOverflow:;
  /* 599368*/ return ret;
}

/* ChapelRange.chpl:1495 */
/*  634557 */ static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, c_string _fn) {
  /*  634568 */ int64_t ret;
  /* 1133838 */ chpl_bool call_tmp;
  /* 1133845 */ chpl_bool T;
  /* 1133849 */ chpl_bool call_tmp2;
  /* 1133864 */ chpl_bool T2;
  /* 1133868 */ int64_t call_tmp3;
  /* 1133874 */ int64_t call_tmp4;
  /* 1133881 */ chpl_bool call_tmp5;
  /*  634813 */ int64_t call_tmp6;
  /* 1133928 */ chpl_bool call_tmp7;
  /* 1133935 */ chpl_bool T3;
  /* 1133939 */ chpl_bool call_tmp8;
  /* 1133954 */ chpl_bool T4;
  /* 1133958 */ int64_t call_tmp9;
  /* 1133964 */ int64_t call_tmp10;
  /* 1133971 */ chpl_bool call_tmp11;
  /*  635029 */ int64_t call_tmp12;
  /* 1115434 */ int64_t call_tmp13;
  /* 634575*/ /* 1133840*/ call_tmp = (a > INT64(0));
  /* 1133863*/ if (call_tmp) /* 1133848*/ {
    /* 1133851*/ call_tmp2 = (b > INT64(0));
    /* 1133856*/ T = call_tmp2;
  } else /* 1133859*/ {
    /* 1133860*/ T = false;
  }
  /* 1133895*/ if (T) /* 1133867*/ {
    /* 1133870*/ call_tmp3 = max2(_ln, _fn);
    /* 1133876*/ call_tmp4 = (call_tmp3 - a);
    /* 1133883*/ call_tmp5 = (b > call_tmp4);
    /* 1133888*/ T2 = call_tmp5;
  } else /* 1133891*/ {
    /* 1133892*/ T2 = false;
  }
  /* 634826*/ if (T2) /* 634812*/ {
    /* 634815*/ call_tmp6 = max2(_ln, _fn);
    /* 634820*/ ret = call_tmp6;
    /* 634825*/ goto _end_chpl__add;
  }
  /* 1133930*/ call_tmp7 = (a < INT64(0));
  /* 1133953*/ if (call_tmp7) /* 1133938*/ {
    /* 1133941*/ call_tmp8 = (b < INT64(0));
    /* 1133946*/ T3 = call_tmp8;
  } else /* 1133949*/ {
    /* 1133950*/ T3 = false;
  }
  /* 1133985*/ if (T3) /* 1133957*/ {
    /* 1133960*/ call_tmp9 = min2(_ln, _fn);
    /* 1133966*/ call_tmp10 = (call_tmp9 - a);
    /* 1133973*/ call_tmp11 = (b < call_tmp10);
    /* 1133978*/ T4 = call_tmp11;
  } else /* 1133981*/ {
    /* 1133982*/ T4 = false;
  }
  /* 635042*/ if (T4) /* 635028*/ {
    /* 635031*/ call_tmp12 = min2(_ln, _fn);
    /* 635036*/ ret = call_tmp12;
    /* 635041*/ goto _end_chpl__add;
  }
  /* 1115436*/ call_tmp13 = (a + b);
  /* 635736*/ ret = call_tmp13;
  _end_chpl__add:;
  /* 635742*/ return ret;
}

