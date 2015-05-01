/* ChapelUtil.chpl:25 */
/*  235338 */ static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn) {
  /* 1274387 */ c_string modFormatStr;
  /* 1274388 */ c_string modStr;
  /* 1274404 */ _ref_int32_t refIndentLevel = NULL;
  /* 235339*/ /* 1274423*/ if (chpl__init_ChapelUtil_p) /* 1274424*/ {
    /* 1274420*/ goto _exit_chpl__init_ChapelUtil;
  }
  /* 1274396*/ modFormatStr = "%*s\n";
  /* 1274399*/ modStr = "ChapelUtil";
  /* 1274402*/ printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
  /* 1274408*/ refIndentLevel = &moduleInitLevel;
  /* 1274411*/ *(refIndentLevel) += INT64(1);
  /* 1274385*/ chpl__init_ChapelUtil_p = true;
  /* 1274414*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelUtil:;
  /* 280685*/ return;
}

