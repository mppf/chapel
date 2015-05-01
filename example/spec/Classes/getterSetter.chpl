class C {
  var setCount: int;
  var x: int;
  proc x var {
    if setter then
      setCount += 1;
    return x;
  }
}
var c = new C();
c.x = 1;
writeln(c.x);
c.x = 2;
writeln(c.x);
c.x = 3;
writeln(c.x);
writeln(c.setCount);
delete c;
