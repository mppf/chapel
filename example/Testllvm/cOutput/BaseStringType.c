/* NewString.chpl:72 */
/*  235353 */ static void chpl__init_BaseStringType(int64_t _ln, c_string _fn) {
  /* 1274569 */ c_string modFormatStr;
  /* 1274570 */ c_string modStr;
  /* 1274586 */ _ref_int32_t refIndentLevel = NULL;
  /* 235354*/ /* 1274605*/ if (chpl__init_BaseStringType_p) /* 1274606*/ {
    /* 1274602*/ goto _exit_chpl__init_BaseStringType;
  }
  /* 1274578*/ modFormatStr = "%*s\n";
  /* 1274581*/ modStr = "BaseStringType";
  /* 1274584*/ printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
  /* 1274590*/ refIndentLevel = &moduleInitLevel;
  /* 1274593*/ *(refIndentLevel) += INT64(1);
  /* 1274567*/ chpl__init_BaseStringType_p = true;
  /* 1273286*/ {
    /* 1273287*/ chpl__init_CString(_ln, _fn);
  }
  /* 1274596*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_BaseStringType:;
  /* 280750*/ return;
}

