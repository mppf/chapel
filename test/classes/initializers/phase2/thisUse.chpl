class ThisPhase2 {
  var someField = 5.0 - 3.0i;

  proc init(val: complex) {
    someField = val;
    init this;
    outsideFunc(this);
    // Verifies that we can utilize "this" in Phase 2
  }
}

proc outsideFunc(x: borrowed ThisPhase2) {
  writeln(x.someField);
}

proc main() {
  var ownC = new owned ThisPhase2(2.5 + 1.3i);
  var c: borrowed ThisPhase2 = ownC.borrow();
}
