/* CommDiagnostics.chpl:23 */
/*  235389 */ static void chpl__init_CommDiagnostics(int64_t _ln, c_string _fn) {
  /* 1274937 */ c_string modFormatStr;
  /* 1274938 */ c_string modStr;
  /* 1274954 */ _ref_int32_t refIndentLevel = NULL;
  /* 235390*/ /* 1274973*/ if (chpl__init_CommDiagnostics_p) /* 1274974*/ {
    /* 1274970*/ goto _exit_chpl__init_CommDiagnostics;
  }
  /* 1274946*/ modFormatStr = "%*s\n";
  /* 1274949*/ modStr = "CommDiagnostics";
  /* 1274952*/ printModuleInit(modFormatStr, modStr, INT64(15), _ln, _fn);
  /* 1274958*/ refIndentLevel = &moduleInitLevel;
  /* 1274961*/ *(refIndentLevel) += INT64(1);
  /* 1274935*/ chpl__init_CommDiagnostics_p = true;
  /* 1274964*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CommDiagnostics:;
  /* 290152*/ return;
}

