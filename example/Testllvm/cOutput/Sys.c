/* Sys.chpl:21 */
/*  235368 */ static void chpl__init_Sys(int64_t _ln, c_string _fn) {
  /* 1274707 */ c_string modFormatStr;
  /* 1274708 */ c_string modStr;
  /* 1274724 */ _ref_int32_t refIndentLevel = NULL;
  /* 235369*/ /* 1274743*/ if (chpl__init_Sys_p) /* 1274744*/ {
    /* 1274740*/ goto _exit_chpl__init_Sys;
  }
  /* 1274716*/ modFormatStr = "%*s\n";
  /* 1274719*/ modStr = "Sys";
  /* 1274722*/ printModuleInit(modFormatStr, modStr, INT64(3), _ln, _fn);
  /* 1274728*/ refIndentLevel = &moduleInitLevel;
  /* 1274731*/ *(refIndentLevel) += INT64(1);
  /* 1274705*/ chpl__init_Sys_p = true;
  /* 1273293*/ {
    /* 1273294*/ chpl__init_SysBasic(_ln, _fn);
  }
  /* 1274734*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Sys:;
  /* 285041*/ return;
}

