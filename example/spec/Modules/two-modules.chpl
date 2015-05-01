module MX {
  var x: string = "Module MX";
  proc printX() {
    writeln(x);
  }
}

module MY {
  var y: string = "Module MY";
  proc printY() {
    writeln(y);
  }
}
MX.printX();
MY.printY();
