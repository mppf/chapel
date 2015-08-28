use Tuner;

config var granularity :uint = 1;
config var verbose = 1;

for i in 1..100 do {
  var x = tune(1..100 by 3 align 3, 3);
  var y = tune(1..100 by 5 align 5, 5);
  var n = 0;
  var z = 0;

  tuningGranularity(granularity);

  for j in 1..(x * 100):int do {
    for k in 1..(y * 100):int do {
      z += j * k;


      if (i == (j + 31)) {
        // This tuning variable doesn't always get set in the loop.
        n = tune(1..100 by 10 align 10, 50);
        for l in 1..(n * 100):int do {
          z -= j * k + n;
        }
      }
    }
  }

  if verbose then writeln("(", x, ", ", y, ", ", n, ") == ", z);
}
