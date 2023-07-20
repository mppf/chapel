proc bad(type t, x:c_string) {
  try! {
    return string.createCopyingBuffer(x:c_ptrConst(c_char)):t;
  }
}

bad(string, c"1"); // OK

use CTypes;
proc bad(type t, x:c_ptrConst(c_char)) {
  try! {
    return string.createCopyingBuffer(x):t;
  }
}

bad(string, "1".c_str()); // OK
