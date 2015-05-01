/*
var word: string;
word = stdin.readln(string);
writeln(word);

var length:int = 5;
var A: [1..length] string = ( "sudo", "make", "me", "a", "sandwich!" );

//This iterates through the numbers 1, 2, 3
for i in (1..3) { // range should use (), not [], otherwise it'll just print 1..3
writeln(i," ");
}

//This has the functionality of a foreach loop in Java
for a in A {
write(a," ");
}

//////////////////////////////////
config var n: int = 10;
var A: [0..n] int;

for i in (0..n){
	A(i) = 2**i;
}

for a in A{
	write(a," ");
}

writeln();
writeln("It's done!");



config var n: int = 10;
var A: [0..n] int;
var x: int = 1;

//Notice how "a" is an element of the array A and that you can store values in the array by assigning them to "a"
for a in A {
    x *= 2;
    a = x;
}

for i in 0..n {
    writeln(A(i));
}



//config const numTasks = here.numCores;
config const numTasks = 20;
coforall i in 1..numTasks {
writeln("Hello, world"," from task ",i," of numCores ",here.numCores,"!");
}


cobegin{
writeln("I'm one thread");
writeln("I'm another thread");
writeln("I'm yet another thread");
}
writeln("I am less important and can wait"); 


const numRect = 10000000;
const width = 2.0 / numRect; // rectangle width
const numThreads = here.numCores; // number of cores the computers processor has
var globalSum: real = 0.0;

proc calculateArea(init) {
var partialSum: real = 0.0;
var x: real;
var i: int = init;
do {
x = -1 + ( i + 0.5) * width;
partialSum += sqrt(1.0 - x*x) * width;
i += numThreads;
} while (i < numRect-1);
globalSum += partialSum;
writeln("Thread: ", init, " globalSum: ", globalSum);
}

for i in 1..numThreads {
 begin calculateArea(i);
}

writeln("This code estimates pi as ", globalSum*2); 

*/

use Time;
use Random;

var timer: Timer;
var speedup: real;
var serialSeconds: real;

config const n: int = 10;
var realArray : [0..n-1] real;
var randomStream = new RandomStream(SeedGenerator.currentTime);
randomStream.fillRandom(realArray);
//writeln("realArray: ", realArray);

proc findMaxInRange(array, lower, upper) {
    var i = lower;
    var arrayMax = array[i];
    while (i <= upper) {
        if (array[i] > arrayMax) {
            arrayMax = array[i];
        }
        i += 1;
    }
    return arrayMax;
}

proc serialFindMax(array) {
    var max: real;
    max = findMaxInRange(array, 0, array.numElements - 1);
    return max;
}

//proc parallelFindMax(array) {
//    return fastFindMaxInRange(array, 0, array.numElements - 1);
//}

var serialMax: real;
//var serialSeconds: real;

timer.clear();
timer.start();
serialMax = serialFindMax(realArray);
timer.stop();
serialSeconds = timer.elapsed();
writeln("SERIAL test: found the max to be ", serialMax, " in ", serialSeconds, " seconds.");
timer.clear();

proc hybridFindMaxInRange(array, lower, upper, numTasks) : real {
    if (lower == upper) { return array[lower]; }
    if (numTasks == 1) {
        return findMaxInRange(array, lower, upper);
    }
    var lowerMax, upperMax: real;
    var middle = ((upper - lower) / 2) + lower;
    var lowerTasks : int = numTasks / 2;
    var upperTasks = numTasks - lowerTasks;
    cobegin ref(lowerMax, upperMax) {
        lowerMax = hybridFindMaxInRange(array, lower, middle, lowerTasks);
        upperMax = hybridFindMaxInRange(array, middle+1, upper, upperTasks);
    }
    return max(lowerMax, upperMax);
}

proc hybridFindMax(array, numTasks) {
    return hybridFindMaxInRange(array, 0, array.numElements-1, numTasks);
}

config const threads = 8;

timer.clear();
timer.start();
var hybridMax = hybridFindMax(realArray, threads);
timer.stop();
var hybridSeconds = timer.elapsed();
timer.clear();
writeln("HYBRID test: found the max to be ", hybridMax, " in ", hybridSeconds, " seconds.");
speedup = serialSeconds / hybridSeconds;
if (speedup > 1) {
    writeln("    The hybrid achieved a ", speedup, "x speedup over the serial trial!");
} else {
    writeln("    No speedup attained.");
}

timer.clear();
timer.start();
var reduceMax = max reduce realArray;
timer.stop();
var reduceSeconds = timer.elapsed();
writeln("REDUCE test: found the max to be ", reduceMax, " in ", reduceSeconds, " seconds.");
speedup = serialSeconds / reduceSeconds;
if (speedup > 1) {
    writeln("    The reduce call achieved a ", speedup, "x speedup over the serial trial!");
} else {
    writeln("    No speedup attained.");
}

