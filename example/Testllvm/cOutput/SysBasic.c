/* SysBasic.chpl:1 */
/*  235377 */ static void chpl__init_SysBasic(int64_t _ln, c_string _fn) {
  /* 1274845 */ c_string modFormatStr;
  /* 1274846 */ c_string modStr;
  /* 1274862 */ _ref_int32_t refIndentLevel = NULL;
  /* 235378*/ /* 1274881*/ if (chpl__init_SysBasic_p) /* 1274882*/ {
    /* 1274878*/ goto _exit_chpl__init_SysBasic;
  }
  /* 1274854*/ modFormatStr = "%*s\n";
  /* 1274857*/ modStr = "SysBasic";
  /* 1274860*/ printModuleInit(modFormatStr, modStr, INT64(8), _ln, _fn);
  /* 1274866*/ refIndentLevel = &moduleInitLevel;
  /* 1274869*/ *(refIndentLevel) += INT64(1);
  /* 1274843*/ chpl__init_SysBasic_p = true;
  /* 1273298*/ {
    /* 1273299*/ chpl__init_SysCTypes(_ln, _fn);
  }
  /* 1274872*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_SysBasic:;
  /* 285951*/ return;
}

