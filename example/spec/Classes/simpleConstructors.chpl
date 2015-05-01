class MessagePoint {
  var x, y: real;
  var message: string;

  proc MessagePoint(x: real, y: real) {
    this.x = x;
    this.y = y;
    this.message = "a point";
  }

  proc MessagePoint(message: string) {
    this.x = 0;
    this.y = 0;
    this.message = message;
  }
}  // class MessagePoint

// create two objects
var mp1 = new MessagePoint(1.0,2.0);
var mp2 = new MessagePoint("point mp2");
writeln(mp1);
writeln(mp2);
delete mp1;
delete mp2;
