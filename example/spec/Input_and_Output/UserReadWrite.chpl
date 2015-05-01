class IntPair {
  var x: int;
  var y: int;
  proc readWriteThis(f) {
    f <~> x <~> new ioLiteral(",") <~> y <~> new ioNewline();
  }
}
var ip = new IntPair(17,2);
write(ip);
delete ip;
