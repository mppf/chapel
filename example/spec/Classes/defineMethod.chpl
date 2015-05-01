use useActor1;
proc Actor.print() {
  writeln("Actor ", name, " is ", age, " years old");
}
anActor.print();
delete anActor;
