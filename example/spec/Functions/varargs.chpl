proc mywriteln(x ...?k) {
  for param i in 1..k do
    writeln(x(i));
}
mywriteln("hi", "there");
mywriteln(1, 2.0, 3, 4.0);
