/* Types.chpl:1 */
/*  235359 */ static void chpl__init_Types(int64_t _ln, c_string _fn) {
  /* 1274661 */ c_string modFormatStr;
  /* 1274662 */ c_string modStr;
  /* 1274678 */ _ref_int32_t refIndentLevel = NULL;
  /* 235360*/ /* 1274697*/ if (chpl__init_Types_p) /* 1274698*/ {
    /* 1274694*/ goto _exit_chpl__init_Types;
  }
  /* 1274670*/ modFormatStr = "%*s\n";
  /* 1274673*/ modStr = "Types";
  /* 1274676*/ printModuleInit(modFormatStr, modStr, INT64(5), _ln, _fn);
  /* 1274682*/ refIndentLevel = &moduleInitLevel;
  /* 1274685*/ *(refIndentLevel) += INT64(1);
  /* 1274659*/ chpl__init_Types_p = true;
  /* 1274688*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Types:;
  /* 282763*/ return;
}

/* Types.chpl:387 */
/*  600442 */ static int64_t min2(int64_t _ln, c_string _fn) {
  /* 1026777 */ int64_t _formal_type_tmp_;
  /*  600566 */ int64_t call_tmp;
  /* 600563*/ /* 600568*/ call_tmp = MIN_INT64;
  /* 600576*/ return call_tmp;
}

/* Types.chpl:387 */
/*  904995 */ static uint64_t min3(int64_t _ln, c_string _fn) {
  /* 1027375 */ uint64_t _formal_type_tmp_;
  /*  905119 */ uint64_t call_tmp;
  /* 905116*/ /* 905121*/ call_tmp = MIN_UINT64;
  /* 905129*/ return call_tmp;
}

/* Types.chpl:404 */
/*  600093 */ static int64_t max2(int64_t _ln, c_string _fn) {
  /* 1026775 */ int64_t _formal_type_tmp_;
  /*  600217 */ int64_t call_tmp;
  /* 600214*/ /* 600219*/ call_tmp = MAX_INT64;
  /* 600227*/ return call_tmp;
}

