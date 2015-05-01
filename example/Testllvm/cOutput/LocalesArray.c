/* LocalesArray.chpl:40 */
/*  235308 */ static void chpl__init_LocalesArray(int64_t _ln, c_string _fn) {
  /* 1274019 */ c_string modFormatStr;
  /* 1274020 */ c_string modStr;
  /* 1274036 */ _ref_int32_t refIndentLevel = NULL;
  /* 1131723 */ RootLocale _formal_type_tmp_ = NULL;
  /* 1131725 */ RootLocale T = NULL;
  /* 1131727 */ object call_tmp = NULL;
  /* 1131734 */ chpl_bool call_tmp2;
  /* 1131743 */ RootLocale call_tmp3 = NULL;
  /* 1131754 */ RootLocale call_tmp4 = NULL;
  /*  355348 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp5 = NULL;
  /* 1038223 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  /*  355353 */ DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
  /* 1039306 */ _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  /*  296763 */ DefaultRectangularDom_1_int64_t_F const_tmp = NULL;
  /* 1038295 */ _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  /* 235309*/ /* 1274055*/ if (chpl__init_LocalesArray_p) /* 1274056*/ {
    /* 1274052*/ goto _exit_chpl__init_LocalesArray;
  }
  /* 1274028*/ modFormatStr = "%*s\n";
  /* 1274031*/ modStr = "LocalesArray";
  /* 1274034*/ printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
  /* 1274040*/ refIndentLevel = &moduleInitLevel;
  /* 1274043*/ *(refIndentLevel) += INT64(1);
  /* 1274017*/ chpl__init_LocalesArray_p = true;
  /* 84173*/ chpl_init_rootLocale(_ln, _fn);
  /* 1131729*/ call_tmp = ((object)(rootLocale));
  /* 1131736*/ call_tmp2 = (call_tmp != nil);
  /* 1131764*/ if (call_tmp2) /* 1131742*/ {
    /* 1131745*/ call_tmp3 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
    /* 1131750*/ T = call_tmp3;
  } else /* 1131753*/ {
    /* 1131756*/ call_tmp4 = ((RootLocale)(nil));
    /* 1131761*/ T = call_tmp4;
  }
  /* 1038226*/ ret_to_arg_ref_tmp_ = &call_tmp5;
  /* 1275120*/ chpl_check_nil(T, INT64(51), "/export/home/hzhang86/chapel/chapel/modules/internal/LocalesArray.chpl");
  /* 84184*/ getDefaultLocaleArray2(T, ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1039309*/ ret_to_arg_ref_tmp_2 = &call_tmp6;
  /* 1275248*/ chpl_check_nil(call_tmp5, INT64(51), "/export/home/hzhang86/chapel/chapel/modules/internal/LocalesArray.chpl");
  /* 296756*/ newAlias(call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
  /* 296761*/ Locales = call_tmp6;
  /* 1038298*/ ret_to_arg_ref_tmp_3 = &const_tmp;
  /* 1275122*/ chpl_check_nil(Locales, INT64(55), "/export/home/hzhang86/chapel/chapel/modules/internal/LocalesArray.chpl");
  /* 84189*/ _dom(Locales, ret_to_arg_ref_tmp_3, _ln, _fn);
  /* 296765*/ LocaleSpace = const_tmp;
  /* 1036676*/ chpl__autoDestroy4(call_tmp5, _ln, _fn);
  /* 1274046*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocalesArray:;
  /* 275325*/ return;
}

