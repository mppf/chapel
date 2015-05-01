/* DSIUtil.chpl:1 */
/*  235371 */ static void chpl__init_DSIUtil(int64_t _ln, c_string _fn) {
  /* 1274753 */ c_string modFormatStr;
  /* 1274754 */ c_string modStr;
  /* 1274770 */ _ref_int32_t refIndentLevel = NULL;
  /* 235372*/ /* 1274789*/ if (chpl__init_DSIUtil_p) /* 1274790*/ {
    /* 1274786*/ goto _exit_chpl__init_DSIUtil;
  }
  /* 1274762*/ modFormatStr = "%*s\n";
  /* 1274765*/ modStr = "DSIUtil";
  /* 1274768*/ printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
  /* 1274774*/ refIndentLevel = &moduleInitLevel;
  /* 1274777*/ *(refIndentLevel) += INT64(1);
  /* 1274751*/ chpl__init_DSIUtil_p = true;
  /* 1274780*/ *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_DSIUtil:;
  /* 285430*/ return;
}

/* DSIUtil.chpl:37 */
/* 1040024 */ static void createTuple(int64_t val, _ref__tuple_1_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  /* 1265150 */ int64_t tup_x1;
  /* 1040054 */ _ref_int64_t call_tmp = NULL;
  /* 1040028*/ /* 1265156*/ tup_x1 = INT64(0);
  /* 1040056*/ call_tmp = &tup_x1;
  /* 1103295*/ *(call_tmp) = val;
  /* 1265148*/ *(*(_retArg) + INT64(0)) = tup_x1;
  /* 1040077*/ return;
}

/* DSIUtil.chpl:47 */
/* 1044582 */ static void _computeChunkStuff(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_1_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  /* 1044593 */ _tuple_2_star_int64_t ret;
  /* 1044599 */ uint64_t numElems;
  /* 1044612 */ _ref_range_int64_t_bounded_F call_tmp = NULL;
  /* 1044619 */ int64_t call_tmp2;
  /* 1150079 */ uint64_t call_tmp3;
  /* 1044639 */ int64_t numChunks;
  /* 1044641 */ int64_t call_tmp4;
  /* 1100811 */ chpl_bool call_tmp5;
  /* 1044673 */ _tuple_2_star_int64_t call_tmp6;
  /* 1164931 */ int64_t T;
  /* 1164938 */ int64_t T2;
  /* 1115315 */ chpl_bool call_tmp7;
  /* 1044712 */ int64_t parDim;
  /* 1044717 */ int64_t maxDim;
  /* 1044722 */ uint64_t maxElems;
  /* 1044724 */ uint64_t call_tmp8;
  /* 1044737 */ range_int64_t_bounded_F call_tmp9;
  /* 1044741 */ _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  /* 1263447 */ range_int64_t_bounded_F _ic__F0_this;
  /* 1070066 */ _ref_range_int64_t_bounded_F this7 = NULL;
  /* 1069865 */ int64_t i;
  /* 1128696 */ int64_t ret2;
  /* 1069898 */ int64_t end;
  /* 1129037 */ int64_t ret3;
  /* 1069942 */ int64_t i2;
  /* 1069950 */ uint64_t curElems;
  /* 1069952 */ _ref_range_int64_t_bounded_F call_tmp10 = NULL;
  /* 1069954 */ _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  /* 1069966 */ int64_t call_tmp11;
  /* 1150089 */ uint64_t call_tmp12;
  /* 1150099 */ uint64_t call_tmp13;
  /* 1114965 */ chpl_bool call_tmp14;
  /* 1115335 */ chpl_bool call_tmp15;
  /* 1100821 */ chpl_bool call_tmp16;
  /* 1197652 */ uint64_t call_tmp17;
  /* 1197665 */ chpl_bool call_tmp18;
  /* 1119473 */ int64_t call_tmp19;
  /* 1044930 */ _tuple_2_star_int64_t call_tmp20;
  /* 1164958 */ int64_t T3;
  /* 1164965 */ int64_t T4;
  /* 1044592*/ /* 1044601*/ numElems = UINT64(1);
  /* 1044614*/ call_tmp = (*(ranges) + INT64(0));
  /* 1044621*/ call_tmp2 = length(call_tmp, _ln, _fn);
  /* 1150081*/ call_tmp3 = ((uint64_t)(call_tmp2));
  /* 1116307*/ numElems *= call_tmp3;
  /* 1044643*/ call_tmp4 = _computeNumChunks(maxTasks, ignoreRunning, minSize, numElems, _ln, _fn);
  /* 1044651*/ numChunks = call_tmp4;
  /* 1100813*/ call_tmp5 = (call_tmp4 == INT64(0));
  /* 1044700*/ if (call_tmp5) /* 1044672*/ {
    /* 1269702*/ *(call_tmp6 + INT64(0)) = INT64(0);
    /* 1269706*/ *(call_tmp6 + INT64(1)) = INT64(-1);
    /* 1197814*/ *(ret + INT64(0)) = *(call_tmp6 + INT64(0));
    *(ret + INT64(1)) = *(call_tmp6 + INT64(1));
    /* 1164933*/ T = *(ret + INT64(0));
    /* 1164940*/ T2 = *(ret + INT64(1));
    /* 1269592*/ *(*(_retArg) + INT64(0)) = T;
    /* 1269596*/ *(*(_retArg) + INT64(1)) = T2;
    /* 1044699*/ goto _end__computeChunkStuff;
  }
  /* 1115317*/ call_tmp7 = (numChunks > INT64(0));
  /* 1044710*/ assert2(call_tmp7, _ln, _fn);
  /* 1044714*/ parDim = INT64(-1);
  /* 1044719*/ maxDim = INT64(-1);
  /* 1044726*/ call_tmp8 = min3(_ln, _fn);
  /* 1044730*/ maxElems = call_tmp8;
  /* 1044743*/ ret_to_arg_ref_tmp_ = &call_tmp9;
  /* 1044748*/ _build_range(INT64(1), INT64(1), ret_to_arg_ref_tmp_, _ln, _fn);
  /* 1127325*/ _ic__F0_this = call_tmp9;
  /* 1070071*/ this7 = &_ic__F0_this;
  /* 1128388*/ checkIfIterWillOverflow(this7, true, _ln, _fn);
  /* 1128698*/ ret2 = (&_ic__F0_this)->_low;
  /* 1129039*/ ret3 = (&_ic__F0_this)->_high;
  /* 1069912*/ end = ret3;
  /* 1069915*/ for (i = ret2; ((i <= end)); i += INT64(1)) {
    /* 1069944*/ i2 = i;
    /* 1069956*/ _ref_tmp_ = ranges;
    /* 1069960*/ call_tmp10 = this5(_ref_tmp_, i, _ln, _fn);
    /* 1069968*/ call_tmp11 = length(call_tmp10, _ln, _fn);
    /* 1150091*/ call_tmp12 = ((uint64_t)(call_tmp11));
    /* 1069985*/ curElems = call_tmp12;
    /* 1150101*/ call_tmp13 = ((uint64_t)(numChunks));
    /* 1114967*/ call_tmp14 = (call_tmp12 >= call_tmp13);
    /* 1070024*/ if (call_tmp14) /* 1070011*/ {
      /* 1103349*/ parDim = i;
      /* 1070023*/ goto _breakLabel;
    }
    /* 1115337*/ call_tmp15 = (curElems > maxElems);
    /* 1070062*/ if (call_tmp15) /* 1070041*/ {
      /* 1114709*/ maxElems = curElems;
      /* 1103355*/ maxDim = i2;
    }
  }
  _breakLabel:;
  /* 1100823*/ call_tmp16 = (parDim == INT64(-1));
  /* 1044929*/ if (call_tmp16) /* 1044883*/ {
    /* 1103313*/ parDim = maxDim;
    /* 1197654*/ call_tmp17 = ((uint64_t)(numChunks));
    /* 1197667*/ call_tmp18 = (maxElems < call_tmp17);
    /* 1044928*/ if (call_tmp18) /* 1044916*/ {
      /* 1119475*/ call_tmp19 = ((int64_t)(maxElems));
      /* 1103319*/ numChunks = call_tmp19;
    }
  }
  /* 1269738*/ *(call_tmp20 + INT64(0)) = numChunks;
  /* 1269742*/ *(call_tmp20 + INT64(1)) = parDim;
  /* 1197820*/ *(ret + INT64(0)) = *(call_tmp20 + INT64(0));
  *(ret + INT64(1)) = *(call_tmp20 + INT64(1));
  /* 1164960*/ T3 = *(ret + INT64(0));
  /* 1164967*/ T4 = *(ret + INT64(1));
  /* 1269606*/ *(*(_retArg) + INT64(0)) = T3;
  /* 1269610*/ *(*(_retArg) + INT64(1)) = T4;
  _end__computeChunkStuff:;
  /* 1044964*/ return;
}

/* DSIUtil.chpl:92 */
/*  899629 */ static int64_t _computeNumChunks(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, uint64_t numElems, int64_t _ln, c_string _fn) {
  /*  899643 */ int64_t ret;
  /* 1119682 */ chpl_bool call_tmp;
  /*  899697 */ uint64_t unumElems;
  /*  899715 */ int64_t numChunks;
  /* 1095624 */ chpl_bool call_tmp2;
  /* 1106769 */ int32_t call_tmp3;
  /* 1106775 */ chpl_localeID_t call_tmp4;
  /* 1106777 */ _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  /* 1106788 */ chpl_localeID_t call_tmp5;
  /* 1106795 */ locale call_tmp6 = NULL;
  /*  899756 */ int64_t call_tmp7;
  /* 1104154 */ int64_t call_tmp8;
  /* 1197675 */ int64_t T;
  /* 1197677 */ chpl_bool call_tmp9;
  /* 1197686 */ int64_t call_tmp10;
  /* 1115165 */ chpl_bool call_tmp11;
  /*  899874 */ chpl_bool T2;
  /* 1197710 */ int64_t call_tmp12;
  /* 1197717 */ uint64_t call_tmp13;
  /* 1197724 */ chpl_bool call_tmp14;
  /* 1197731 */ chpl_bool T3;
  /* 1197741 */ chpl_bool call_tmp15;
  /* 1197765 */ int64_t call_tmp16;
  /* 1197772 */ uint64_t call_tmp17;
  /* 1197779 */ chpl_bool call_tmp18;
  /* 1197786 */ chpl_bool T4;
  /* 1197796 */ chpl_bool call_tmp19;
  /* 1149909 */ uint64_t call_tmp20;
  /* 1115325 */ chpl_bool call_tmp21;
  /* 1119433 */ int64_t call_tmp22;
  /* 899656*/ /* 1119684*/ call_tmp = (numElems <= UINT64(0));
  /* 899686*/ if (call_tmp) /* 899679*/ {
    /* 1103205*/ ret = INT64(0);
    /* 899685*/ goto _end__computeNumChunks;
  }
  /* 899712*/ unumElems = numElems;
  /* 899725*/ numChunks = maxTasks;
  /* 1095626*/ call_tmp2 = (! ignoreRunning);
  /* 899856*/ if (call_tmp2) /* 899745*/ {
    /* 1106771*/ call_tmp3 = chpl_task_getRequestedSubloc();
    /* 1106779*/ ret_to_arg_ref_tmp_ = &call_tmp4;
    /* 1106784*/ chpl_buildLocaleID(chpl_nodeID, call_tmp3, ret_to_arg_ref_tmp_, _ln, _fn);
    /* 1106790*/ call_tmp5 = chpl__initCopy_chpl_rt_localeID_t(call_tmp4);
    /* 1106797*/ call_tmp6 = chpl_localeID_to_locale(&call_tmp5, _ln, _fn);
    /* 899758*/ call_tmp7 = runningTasks(call_tmp6, _ln, _fn);
    /* 1104156*/ call_tmp8 = (call_tmp7 - INT64(1));
    /* 1197679*/ call_tmp9 = (call_tmp8 < maxTasks);
    /* 1197700*/ if (call_tmp9) /* 1197685*/ {
      /* 1197688*/ call_tmp10 = (maxTasks - call_tmp8);
      /* 1197693*/ T = call_tmp10;
    } else /* 1197696*/ {
      /* 1197697*/ T = INT64(1);
    }
    /* 1103211*/ numChunks = T;
  }
  /* 1115167*/ call_tmp11 = (minSize > INT64(0));
  /* 900110*/ if (call_tmp11) /* 899873*/ {
    /* 1197712*/ call_tmp12 = (minSize * numChunks);
    /* 1197719*/ call_tmp13 = ((uint64_t)(call_tmp12));
    /* 1197726*/ call_tmp14 = (numElems < call_tmp13);
    /* 1197755*/ if (call_tmp14) /* 1197734*/ {
      /* 1197743*/ call_tmp15 = (numChunks > INT64(1));
      /* 1197748*/ T3 = call_tmp15;
    } else /* 1197751*/ {
      /* 1197752*/ T3 = false;
    }
    /* 899982*/ T2 = T3;
    /* 899987*/ while (T2) {
      /* 1116301*/ numChunks -= INT64(1);
      /* 1197767*/ call_tmp16 = (minSize * numChunks);
      /* 1197774*/ call_tmp17 = ((uint64_t)(call_tmp16));
      /* 1197781*/ call_tmp18 = (unumElems < call_tmp17);
      /* 1197810*/ if (call_tmp18) /* 1197789*/ {
        /* 1197798*/ call_tmp19 = (numChunks > INT64(1));
        /* 1197803*/ T4 = call_tmp19;
      } else /* 1197806*/ {
        /* 1197807*/ T4 = false;
      }
      /* 900103*/ T2 = T4;
    }
  }
  /* 1149911*/ call_tmp20 = ((uint64_t)(numChunks));
  /* 1115327*/ call_tmp21 = (call_tmp20 > unumElems);
  /* 900148*/ if (call_tmp21) /* 900135*/ {
    /* 1119435*/ call_tmp22 = ((int64_t)(unumElems));
    /* 1103217*/ numChunks = call_tmp22;
  }
  /* 1103223*/ ret = numChunks;
  _end__computeNumChunks:;
  /* 900155*/ return ret;
}

/* DSIUtil.chpl:163 */
/*  906651 */ static uint64_t intCeilXDivByY(uint64_t x, uint64_t y, int64_t _ln, c_string _fn) {
  /* 1119227 */ uint64_t call_tmp;
  /* 1115764 */ uint64_t call_tmp2;
  /* 1198055 */ uint64_t call_tmp3;
  /* 906664*/ /* 1119229*/ call_tmp = (x - UINT64(1));
  /* 1115766*/ call_tmp2 = (call_tmp / y);
  /* 1198057*/ call_tmp3 = (UINT64(1) + call_tmp2);
  /* 906695*/ return call_tmp3;
}

/* DSIUtil.chpl:165 */
/* 1044392 */ static void _computeBlock(int64_t numelems, int64_t numblocks, int64_t blocknum, int64_t wayhi, int64_t waylo, int64_t lo, _ref__tuple_2_star_int64_t _retArg, int64_t _ln, c_string _fn) {
  /* 1100801 */ chpl_bool call_tmp;
  /* 1197890 */ int64_t T;
  /* 1197892 */ chpl_bool call_tmp2;
  /* 1197905 */ uint64_t call_tmp3;
  /* 1197912 */ uint64_t call_tmp4;
  /* 1197919 */ uint64_t call_tmp5;
  /* 1197926 */ uint64_t call_tmp6;
  /* 1197933 */ uint64_t call_tmp7;
  /* 1197941 */ int64_t call_tmp8;
  /* 1197948 */ int64_t call_tmp9;
  /* 1197962 */ int64_t T2;
  /* 1197964 */ int64_t call_tmp10;
  /* 1197971 */ chpl_bool call_tmp11;
  /* 1197984 */ uint64_t call_tmp12;
  /* 1197991 */ int64_t call_tmp13;
  /* 1197998 */ uint64_t call_tmp14;
  /* 1198005 */ uint64_t call_tmp15;
  /* 1198012 */ uint64_t call_tmp16;
  /* 1198019 */ uint64_t call_tmp17;
  /* 1198027 */ int64_t call_tmp18;
  /* 1198034 */ int64_t call_tmp19;
  /* 1198041 */ int64_t call_tmp20;
  /* 1044406*/ /* 1100803*/ call_tmp = (numelems == INT64(0));
  /* 1044453*/ if (call_tmp) /* 1044425*/ {
    /* 1269810*/ *(*(_retArg) + INT64(0)) = INT64(1);
    /* 1269814*/ *(*(_retArg) + INT64(1)) = INT64(0);
    /* 1044452*/ goto _end__computeBlock;
  }
  /* 1197894*/ call_tmp2 = (blocknum == INT64(0));
  /* 1197958*/ if (call_tmp2) /* 1197900*/ {
    /* 1197901*/ T = waylo;
  } else /* 1197904*/ {
    /* 1197907*/ call_tmp3 = ((uint64_t)(numelems));
    /* 1197914*/ call_tmp4 = ((uint64_t)(blocknum));
    /* 1197921*/ call_tmp5 = (call_tmp3 * call_tmp4);
    /* 1197928*/ call_tmp6 = ((uint64_t)(numblocks));
    /* 1197935*/ call_tmp7 = intCeilXDivByY(call_tmp5, call_tmp6, _ln, _fn);
    /* 1197943*/ call_tmp8 = ((int64_t)(call_tmp7));
    /* 1197950*/ call_tmp9 = (lo + call_tmp8);
    /* 1197955*/ T = call_tmp9;
  }
  /* 1197966*/ call_tmp10 = (numblocks - INT64(1));
  /* 1197973*/ call_tmp11 = (blocknum == call_tmp10);
  /* 1198051*/ if (call_tmp11) /* 1197979*/ {
    /* 1197980*/ T2 = wayhi;
  } else /* 1197983*/ {
    /* 1197986*/ call_tmp12 = ((uint64_t)(numelems));
    /* 1197993*/ call_tmp13 = (blocknum + INT64(1));
    /* 1198000*/ call_tmp14 = ((uint64_t)(call_tmp13));
    /* 1198007*/ call_tmp15 = (call_tmp12 * call_tmp14);
    /* 1198014*/ call_tmp16 = ((uint64_t)(numblocks));
    /* 1198021*/ call_tmp17 = intCeilXDivByY(call_tmp15, call_tmp16, _ln, _fn);
    /* 1198029*/ call_tmp18 = ((int64_t)(call_tmp17));
    /* 1198036*/ call_tmp19 = (lo + call_tmp18);
    /* 1198043*/ call_tmp20 = (call_tmp19 - INT64(1));
    /* 1198048*/ T2 = call_tmp20;
  }
  /* 1269846*/ *(*(_retArg) + INT64(0)) = T;
  /* 1269850*/ *(*(_retArg) + INT64(1)) = T2;
  _end__computeBlock:;
  /* 1044527*/ return;
}

