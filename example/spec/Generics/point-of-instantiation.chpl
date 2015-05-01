module M1 {
  record R {
    var x: int;
    proc foo() { }
  }
}

module M2 {
  proc bar(x) {
    x.foo();
  }
}

module M3 {
  use M1, M2;
  proc main() {
    var r: R;
    bar(r);
  }
}
