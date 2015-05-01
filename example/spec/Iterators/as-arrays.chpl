iter squares(n: int): int {
  for i in 1..n do
    yield i * i;
}
writeln(squares(5));
