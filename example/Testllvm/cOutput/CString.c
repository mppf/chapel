/* String.chpl:321 */
/*  235260 */ static void chpl__init_CString(int64_t _ln, c_string _fn) {
  /* 1273513 */ c_string modFormatStr;
  /* 1273514 */ c_string modStr;
  /* 1273530 */ _ref_int32_t refIndentLevel = NULL;
  /* 235261*/ /* 1273549*/ if (chpl__init_CString_p) /* 1273550*/ {
    /* 1273546*/ goto _exit_chpl__init_CString;
  }
  /* 1273522*/ modFormatStr = "%*s\n";
  /* 1273525*/ modStr = "CString";
  /* 1273528*/ printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
  /* 1273534*/ refIndentLevel = &moduleInitLevel;
  /* 1273537*/ *(refIndentLevel) += INT64(1);
  /* 1273511*/ chpl__init_CString_p = true;
  /* 1273540*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CString:;
  /* 264774*/ return;
}

