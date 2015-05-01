class MyGenericClass {
  type t1;
  param p1;
  const c1;
  var v1;
  var x1: t1; // this field is not generic

  type t5 = real;
  param p5 = "a string";
  const c5 = 5.5;
  var v5 = 555;
  var x5: t5; // this field is not generic

  proc MyGenericClass(c1, v1, type t1, param p1) { }
  proc MyGenericClass(type t5, param p5, c5, v5, x5,
                     type t1, param p1, c1, v1, x1) { }
}  // class MyGenericClass

var g1 = new MyGenericClass(11, 111, int, 1);
var g2 = new MyGenericClass(int, "this is g2", 3.3, 333, 3333,
                            real, 2, 222, 222.2, 22);
writeln(g1);
writeln(g2);
delete g1;
delete g2;
