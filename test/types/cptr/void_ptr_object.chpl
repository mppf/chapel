
class C {
  var x:int;
}


proc main() {
  use CTypes;
  var c = new unmanaged C(1);
  // cast it to a c_ptr(void)
  var ptr1 = c:c_ptr(void);
  // cast that back to an object
  var c2 = ptr1:unmanaged C?;
  // cast nil into a c_ptr(void)
  var mynil = nil:c_ptr(void);
  assert(ptr1 != mynil);
  assert(c == c2);

  var my_cstr:c_string = c"test";
  // cast c_string into c_ptr(void)
  var my_cstr_v = my_cstr:c_ptr(void);
  assert(my_cstr_v != mynil);
  // cast c_ptr(void) into c_string
  var my_cstr2 = my_cstr_v:c_string;
  assert(my_cstr == my_cstr2);


  // cast c_string to c_ptr(c_uchar)
  var my_cstr_ptr = my_cstr:c_ptr(c_uchar);
  assert(my_cstr_ptr != mynil);
  // cast c_ptr(c_uchar) back to c_string
  var my_cstr3 = my_cstr_ptr:c_string;
  assert(my_cstr == my_cstr3);


  // cast c_string to c_ptrConst(c_uchar)
  var my_cstr_ptrConst_uchar = my_cstr:c_ptrConst(c_uchar);
  assert(my_cstr_ptrConst_uchar != mynil);
  // cast c_ptrConst(c_uchar) back to c_string
  var my_cstr4 = my_cstr_ptrConst_uchar:c_string;
  assert(my_cstr == my_cstr4);

  // cast c_string to c_ptrConst(c_char)
  var my_cstr_ptrConst_char = my_cstr:c_ptrConst(c_char);
  assert(my_cstr_ptrConst_char != mynil);
  // cast c_ptrConst(c_char) back to c_string
  var my_cstr5 = my_cstr_ptrConst_char:c_string;
  assert(my_cstr == my_cstr5);

  // cast c_string to c_ptr(c_char)
  var my_cstr_ptr_char = my_cstr:c_ptr(c_char);
  assert(my_cstr_ptr_char != mynil);
  // cast c_ptr(c_char) back to c_string
  var my_cstr6 = my_cstr_ptr_char:c_string;
  assert(my_cstr == my_cstr6);

  delete c;
}

