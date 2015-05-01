/*** Compilation Info ***/


#include <stdio.h>
const char* chpl_compileCommand = "chpl example/experiment.chpl --gen-ids --savec example/Testllvm/cOutput/ ";
const char* chpl_compileVersion = "1.10.0.c224448";
const char* CHPL_HOME = "/export/home/hzhang86/chapel/chapel";
const char* CHPL_HOST_PLATFORM = "linux64";
const char* CHPL_HOST_COMPILER = "gnu";
const char* CHPL_TARGET_PLATFORM = "linux64";
const char* CHPL_TARGET_COMPILER = "gnu";
const char* CHPL_TARGET_ARCH = "native";
const char* CHPL_LOCALE_MODEL = "flat";
const char* CHPL_COMM = "none";
const char* CHPL_COMM_SUBSTRATE = "none";
const char* CHPL_GASNET_SEGMENT = "none";
const char* CHPL_TASKS = "qthreads";
const char* CHPL_THREADS = "none";
const char* CHPL_LAUNCHER = "none";
const char* CHPL_TIMERS = "generic";
const char* CHPL_MEM = "cstdlib";
const char* CHPL_MAKE = "make";
const char* CHPL_ATOMICS = "intrinsics";
const char* CHPL_NETWORK_ATOMICS = "none";
const char* CHPL_GMP = "gmp";
const char* CHPL_HWLOC = "hwloc";
const char* CHPL_REGEXP = "re2";
const char* CHPL_WIDE_POINTERS = "node16";
const char* CHPL_LLVM = "llvm";
const char* CHPL_AUX_FILESYS = "none";
const int CHPL_STACK_CHECKS = 1;
const int CHPL_CACHE_REMOTE = 0;

void chpl_program_about(void);

void chpl_program_about() {
  printf("%s", "Compilation command: chpl example/experiment.chpl --gen-ids --savec example/Testllvm/cOutput/ \n");
  printf("%s", "Chapel compiler version: 1.10.0.c224448\n");
  printf("Chapel environment:\n");
  printf("%s", "  CHPL_HOME: /export/home/hzhang86/chapel/chapel\n");
  printf("%s", "  CHPL_HOST_PLATFORM: linux64\n");
  printf("%s", "  CHPL_HOST_COMPILER: gnu\n");
  printf("%s", "  CHPL_TARGET_PLATFORM: linux64\n");
  printf("%s", "  CHPL_TARGET_COMPILER: gnu\n");
  printf("%s", "  CHPL_TARGET_ARCH: native\n");
  printf("%s", "  CHPL_LOCALE_MODEL: flat\n");
  printf("%s", "  CHPL_COMM: none\n");
  printf("%s", "  CHPL_COMM_SUBSTRATE: none\n");
  printf("%s", "  CHPL_GASNET_SEGMENT: none\n");
  printf("%s", "  CHPL_TASKS: qthreads\n");
  printf("%s", "  CHPL_THREADS: none\n");
  printf("%s", "  CHPL_LAUNCHER: none\n");
  printf("%s", "  CHPL_TIMERS: generic\n");
  printf("%s", "  CHPL_MEM: cstdlib\n");
  printf("%s", "  CHPL_MAKE: make\n");
  printf("%s", "  CHPL_ATOMICS: intrinsics\n");
  printf("%s", "  CHPL_NETWORK_ATOMICS: none\n");
  printf("%s", "  CHPL_GMP: gmp\n");
  printf("%s", "  CHPL_HWLOC: hwloc\n");
  printf("%s", "  CHPL_REGEXP: re2\n");
  printf("%s", "  CHPL_WIDE_POINTERS: node16\n");
  printf("%s", "  CHPL_LLVM: llvm\n");
  printf("%s", "  CHPL_AUX_FILESYS: none\n");
}
