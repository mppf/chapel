/* ChapelStandard.chpl:24 */
/*  235251 */ void chpl__init_ChapelStandard(int64_t _ln, c_string _fn) {
  /* 1273375 */ c_string modFormatStr;
  /* 1273376 */ c_string modStr;
  /* 1273392 */ _ref_int32_t refIndentLevel = NULL;
  /* 235252*/ /* 1273411*/ if (chpl__init_ChapelStandard_p) /* 1273412*/ {
    /* 1273408*/ goto _exit_chpl__init_ChapelStandard;
  }
  /* 1273384*/ modFormatStr = "%*s\n";
  /* 1273387*/ modStr = "ChapelStandard";
  /* 1273390*/ printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
  /* 1273396*/ refIndentLevel = &moduleInitLevel;
  /* 1273399*/ *(refIndentLevel) += INT64(1);
  /* 1273373*/ chpl__init_ChapelStandard_p = true;
  /* 1273162*/ {
    /* 1273163*/ chpl__init_ChapelBase(_ln, _fn);
    /* 1273165*/ chpl__init_String(_ln, _fn);
    /* 1273167*/ chpl__init_MemConsistency(_ln, _fn);
    /* 1273169*/ chpl__init_Atomics(_ln, _fn);
    /* 1273171*/ chpl__init_NetworkAtomics(_ln, _fn);
    /* 1273173*/ chpl__init_AtomicsCommon(_ln, _fn);
    /* 1273175*/ chpl__init_NewString(_ln, _fn);
    /* 1273177*/ chpl__init_ChapelThreads(_ln, _fn);
    /* 1273179*/ chpl__init_ChapelTuple(_ln, _fn);
    /* 1273181*/ chpl__init_ChapelRange(_ln, _fn);
    /* 1273183*/ chpl__init_LocaleModel(_ln, _fn);
    /* 1273185*/ chpl__init_ChapelLocale(_ln, _fn);
    /* 1273187*/ chpl__init_DefaultRectangular(_ln, _fn);
    /* 1273189*/ chpl__init_LocalesArray(_ln, _fn);
    /* 1273191*/ chpl__init_ChapelArray(_ln, _fn);
    /* 1273193*/ chpl__init_ChapelDistribution(_ln, _fn);
    /* 1273195*/ chpl__init_ChapelIO(_ln, _fn);
    /* 1273197*/ chpl__init_LocaleTree(_ln, _fn);
    /* 1273199*/ chpl__init_DefaultAssociative(_ln, _fn);
    /* 1273201*/ chpl__init_ChapelTaskTable(_ln, _fn);
    /* 1273203*/ chpl__init_MemTracking(_ln, _fn);
    /* 1273205*/ chpl__init_ChapelUtil(_ln, _fn);
    /* 1273207*/ chpl__init_ChapelDynDispHack(_ln, _fn);
    /* 1273209*/ chpl__init_Types(_ln, _fn);
    /* 1273211*/ chpl__init_CommDiagnostics(_ln, _fn);
  }
  /* 1273402*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelStandard:;
  /* 263386*/ return;
}

