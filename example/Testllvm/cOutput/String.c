/* String.chpl:23 */
/*  235257 */ static void chpl__init_String(int64_t _ln, c_string _fn) {
  /* 1273467 */ c_string modFormatStr;
  /* 1273468 */ c_string modStr;
  /* 1273484 */ _ref_int32_t refIndentLevel = NULL;
  /* 235258*/ /* 1273503*/ if (chpl__init_String_p) /* 1273504*/ {
    /* 1273500*/ goto _exit_chpl__init_String;
  }
  /* 1273476*/ modFormatStr = "%*s\n";
  /* 1273479*/ modStr = "String";
  /* 1273482*/ printModuleInit(modFormatStr, modStr, INT64(6), _ln, _fn);
  /* 1273488*/ refIndentLevel = &moduleInitLevel;
  /* 1273491*/ *(refIndentLevel) += INT64(1);
  /* 1273465*/ chpl__init_String_p = true;
  /* 1273214*/ {
    /* 1273215*/ chpl__init_CString(_ln, _fn);
  }
  /* 1273494*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_String:;
  /* 264093*/ return;
}

