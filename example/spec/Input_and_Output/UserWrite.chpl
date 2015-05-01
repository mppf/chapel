class NoRead {
  var x: int;
  var y: int;
  proc writeThis(f:Writer) {
    f.writeln("hello");
  }
  // Note that no readThis function will be generated.
}
var nr = new NoRead();
write(nr);
// Note that read(nr) will generate a compiler error.
delete nr;
