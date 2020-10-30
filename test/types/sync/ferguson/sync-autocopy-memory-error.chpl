proc foo() {
  var a: sync int = 0;
  ref ra = a;
  return ra;
}

{
  var y: sync int = foo();
  y.readXX();
}
