/* NetworkAtomics.chpl:22 */
/*  235269 */ static void chpl__init_NetworkAtomics(int64_t _ln, c_string _fn) {
  /* 1273651 */ c_string modFormatStr;
  /* 1273652 */ c_string modStr;
  /* 1273668 */ _ref_int32_t refIndentLevel = NULL;
  /* 235270*/ /* 1273687*/ if (chpl__init_NetworkAtomics_p) /* 1273688*/ {
    /* 1273684*/ goto _exit_chpl__init_NetworkAtomics;
  }
  /* 1273660*/ modFormatStr = "%*s\n";
  /* 1273663*/ modStr = "NetworkAtomics";
  /* 1273666*/ printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
  /* 1273672*/ refIndentLevel = &moduleInitLevel;
  /* 1273675*/ *(refIndentLevel) += INT64(1);
  /* 1273649*/ chpl__init_NetworkAtomics_p = true;
  /* 292388*/ LINENO = INT32(-1);
  /* 1273678*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_NetworkAtomics:;
  /* 270614*/ return;
}

