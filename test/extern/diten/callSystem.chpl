use CTypes;
var ret: int(32);

extern proc system(s: c_ptrConst(c_char)): int(32);

ret = system("/bin/echo hello".c_str());
if ret != 0 then
  halt("echo failed");
