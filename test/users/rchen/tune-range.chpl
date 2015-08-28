use Tuner;

config var granularity :uint = 1;
config var verbose = 1;

for i in 1..100 do {
  var x = tune(1..100 by 3 align 3, 3);
  var y = tune(1..100 by 5 align 5, 5);
  var z = 0;

  tuningGranularity(granularity);

  for j in 1..(x * 100):int do {
    for k in 1..(y * 100):int do {
      z += j * k;
    }
  }
  if verbose then writeln(x, " & ", y, " == ", z);
}
