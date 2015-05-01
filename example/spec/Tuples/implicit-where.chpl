proc f((x, (y, z))) {
  writeln((x, y, z));
}
proc g(t) where isTuple(t) && t.size == 2 && isTuple(t(2)) && t(2).size == 2 {
  writeln((t(1), t(2)(1), t(2)(2)));
}
f((1, (2, 3)));
g((1, (2, 3)));
