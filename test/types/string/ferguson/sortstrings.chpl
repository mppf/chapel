config const n = 1;
config const m = 10*1000*1000;

use Random;
use Sort;
use Time;

proc digitToString(d:uint):string {
  select d {
    when 0 do return "0";
    when 1 do return "1";
    when 2 do return "2";
    when 2 do return "2";
    when 3 do return "3";
    when 4 do return "4";
    when 5 do return "5";
    when 6 do return "6";
    when 7 do return "7";
    when 8 do return "8";
    when 9 do return "9";
    when 10 do return "a";
    when 11 do return "b";
    when 12 do return "c";
    when 13 do return "d";
    when 14 do return "e";
    when 15 do return "f";
    otherwise return " ";
  }
}

proc makestring(arg:uint(32)) {
  var ret:string;
  ret += digitToString((arg>>28) & 7);
  ret += digitToString((arg>>24) & 7);
  ret += digitToString((arg>>20) & 7);
  ret += digitToString((arg>>16) & 7);
  ret += digitToString((arg>>12) & 7);
  ret += digitToString((arg>>8) & 7);
  ret += digitToString((arg>>4) & 7);
  ret += digitToString( arg     & 7);
  return ret;
}

var makeTime: Timer;
var sortTime: Timer;

proc kernel() {
  var R:[1..m] uint(32);
  fillRandom(R, seed=1);

  var A:[1..m] string;
  makeTime.start();
  forall i in 1..m {
    A[i] = makestring(R[i]);
  }
  makeTime.stop();

  sortTime.start();
  sort(A);
  sortTime.stop();

  return (A[1]:int) + (A[m]:int);
}

proc main() {
  var sum = 0;
  for i in 1..n {
    sum += kernel();
  }
  writeln(sum);

  writeln("Make time: ", makeTime.elapsed());
  writeln("Sort time: ", sortTime.elapsed());
}
