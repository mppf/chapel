/* LocaleTree.chpl:25 */
/*  235320 */ static void chpl__init_LocaleTree(int64_t _ln, c_string _fn) {
  /* 1274203 */ c_string modFormatStr;
  /* 1274204 */ c_string modStr;
  /* 1274220 */ _ref_int32_t refIndentLevel = NULL;
  /* 1117694 */ chpl_localeTreeRecord this7;
  /* 1117704 */ locale call_tmp = NULL;
  /* 1117715 */ locale call_tmp2 = NULL;
  /* 1117726 */ chpl_localeTreeRecord wrap_call_tmp;
  /* 235321*/ /* 1274239*/ if (chpl__init_LocaleTree_p) /* 1274240*/ {
    /* 1274236*/ goto _exit_chpl__init_LocaleTree;
  }
  /* 1274212*/ modFormatStr = "%*s\n";
  /* 1274215*/ modStr = "LocaleTree";
  /* 1274218*/ printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
  /* 1274224*/ refIndentLevel = &moduleInitLevel;
  /* 1274227*/ *(refIndentLevel) += INT64(1);
  /* 1274201*/ chpl__init_LocaleTree_p = true;
  /* 1273262*/ {
    /* 1273263*/ chpl__init_ChapelLocale(_ln, _fn);
  }
  /* 1117696*/ (&this7)->left = nil;
  /* 1117700*/ (&this7)->right = nil;
  /* 1117706*/ call_tmp = ((locale)(nil));
  /* 1117711*/ (&this7)->left = call_tmp;
  /* 1117717*/ call_tmp2 = ((locale)(nil));
  /* 1117722*/ (&this7)->right = call_tmp2;
  /* 1117728*/ wrap_call_tmp = _construct_chpl_localeTreeRecord(call_tmp, call_tmp2, &this7, _ln, _fn);
  /* 298494*/ chpl_localeTree = wrap_call_tmp;
  /* 116425*/ chpl_initLocaleTree(_ln, _fn);
  /* 1274230*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleTree:;
  /* 279381*/ return;
}

/* LocaleTree.chpl:29 */
/*  195962 */ static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, int64_t _ln, c_string _fn) {
  /*  195964 */ chpl_localeTreeRecord this7;
  /* 195963*/ /* 195971*/ this7 = *(meme);
  /* 195984*/ (&this7)->left = left;
  /* 195999*/ (&this7)->right = right;
  /* 196004*/ return this7;
}

/* LocaleTree.chpl:35 */
/*  116288 */ static void chpl_initLocaleTree(int64_t _ln, c_string _fn) {
  /* 1272302 */ int64_t local_numLocales;
  /* 1272296 */ DefaultRectangularDom_1_int64_t_F local_LocaleSpace = NULL;
  /* 1132131 */ DefaultRectangularDom_1_int64_t_F ret = NULL;
  /* 1132153 */ _tuple_1_star_int64_t default_argoffset;
  /* 1132155 */ _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  /* 1061718 */ DefaultRectangularDom_1_int64_t_F this7 = NULL;
  /* 1259140 */ range_int64_t_bounded_F ret_x1;
  /* 1259144 */ _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
  /* 1263487 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1073535 */ _ref_range_int64_t_bounded_F this8 = NULL;
  /* 1073207 */ int64_t i;
  /* 1128766 */ int64_t ret2;
  /* 1073240 */ int64_t end;
  /* 1129107 */ int64_t ret3;
  /* 1073303 */ locale left = NULL;
  /* 1073306 */ locale type_tmp = NULL;
  /* 1073325 */ locale right = NULL;
  /* 1073328 */ locale type_tmp2 = NULL;
  /* 1073347 */ int64_t child;
  /* 1115644 */ int64_t call_tmp;
  /* 1111199 */ int64_t call_tmp2;
  /* 1104324 */ int64_t call_tmp3;
  /* 1109492 */ chpl_bool call_tmp4;
  /* 1073395 */ locale call_tmp5 = NULL;
  /* 1073397 */ int32_t _virtual_method_tmp_;
  /* 1109502 */ chpl_bool call_tmp6;
  /* 1073447 */ locale call_tmp7 = NULL;
  /* 1073449 */ int32_t _virtual_method_tmp_2;
  /* 1073477 */ int32_t _virtual_method_tmp_3;
  /* 1117473 */ _ref_locale call_tmp8 = NULL;
  /* 1117487 */ _ref_locale call_tmp9 = NULL;
  /* 116289*/ /* 1272303*/ local_numLocales = numLocales;
  /* 1272297*/ local_LocaleSpace = LocaleSpace;
  /* 1132133*/ ret = local_LocaleSpace;
  /* 1132157*/ ret_to_arg_ref_tmp_ = &default_argoffset;
  /* 1132162*/ createTuple(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1061723*/ this7 = ret;
  /* 1278250*/ chpl_check_nil(this7, INT64(36), "/export/home/hzhang86/chapel/chapel/modules/internal/LocaleTree.chpl");
  /* 1259148*/ ret_ = &((this7)->ranges);
  /* 1259153*/ ret_x1 = *(*(ret_) + INT64(0));
  /* 1127553*/ _ic__F0_this = ret_x1;
  /* 1073540*/ this8 = &_ic__F0_this;
  /* 1128465*/ checkIfIterWillOverflow(this8, true, _ln, _fn);
  /* 1128768*/ ret2 = (&_ic__F0_this)->_low;
  /* 1129109*/ ret3 = (&_ic__F0_this)->_high;
  /* 1073254*/ end = ret3;
  /* 1073257*/ for (i = ret2; ((i <= end)); i += INT64(1)) {
    /* 1118568*/ type_tmp = nil;
    /* 1073322*/ left = type_tmp;
    /* 1118574*/ type_tmp2 = nil;
    /* 1073344*/ right = type_tmp2;
    /* 1115646*/ call_tmp = (i + INT64(1));
    /* 1111201*/ call_tmp2 = (call_tmp * INT64(2));
    /* 1104326*/ call_tmp3 = (call_tmp2 - INT64(1));
    /* 1073373*/ child = call_tmp3;
    /* 1109494*/ call_tmp4 = (call_tmp3 < local_numLocales);
    /* 1073473*/ if (call_tmp4) /* 1073394*/ {
      /* 1275800*/ chpl_check_nil(rootLocale, INT64(41), "/export/home/hzhang86/chapel/chapel/modules/internal/LocaleTree.chpl");
      /* 1073399*/ _virtual_method_tmp_ = ((object)(rootLocale))->chpl__cid;
      /* 1073403*/ call_tmp5 = ((locale(*)(locale, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(3))])(rootLocale, call_tmp3, _ln, _fn);
      /* 1118580*/ left = call_tmp5;
      /* 1116283*/ child += INT64(1);
      /* 1109504*/ call_tmp6 = (child < local_numLocales);
      /* 1073472*/ if (call_tmp6) /* 1073446*/ {
        /* 1275802*/ chpl_check_nil(rootLocale, INT64(44), "/export/home/hzhang86/chapel/chapel/modules/internal/LocaleTree.chpl");
        /* 1073451*/ _virtual_method_tmp_2 = ((object)(rootLocale))->chpl__cid;
        /* 1073455*/ call_tmp7 = ((locale(*)(locale, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(3))])(rootLocale, child, _ln, _fn);
        /* 1118586*/ right = call_tmp7;
      }
    }
    /* 1275804*/ chpl_check_nil(rootLocale, INT64(46), "/export/home/hzhang86/chapel/chapel/modules/internal/LocaleTree.chpl");
    /* 1073479*/ _virtual_method_tmp_3 = ((object)(rootLocale))->chpl__cid;
    /* 1073485*/ ((locale(*)(locale, int64_t, int64_t, c_string))chpl_vmtable[((INT64(8) * _virtual_method_tmp_3) + INT64(3))])(rootLocale, i, _ln, _fn);
    /* 1117475*/ call_tmp8 = &((&chpl_localeTree)->left);
    /* 1118592*/ *(call_tmp8) = left;
    /* 1117489*/ call_tmp9 = &((&chpl_localeTree)->right);
    /* 1118598*/ *(call_tmp9) = right;
  }
  /* 279379*/ return;
}

