record TimeStamp {
  var time: string = "1/1/1011";
}

var timestampDefault: TimeStamp;                  // use the default for 'time'
var timestampCustom = new TimeStamp("2/2/2022");  // ... or a different one
writeln(timestampDefault);
writeln(timestampCustom);

var idCounter = 0;
record UniqueID {
  var id: int;
  proc UniqueID() { idCounter += 1; id = idCounter; }
}

writeln(new UniqueID());  // create and use a record value without a variable
writeln(new UniqueID());
