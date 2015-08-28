use Tuner;

config var granularity :uint = 1;
config var verbose = 1;

for i in 1..100 do {
  var x = tune(0.0, 1.0, 0.001, .5);
  var y = tune(0.0, 1.0, 0.001, .5);
  var z = 0;

  tuningGranularity(granularity);

  for j in 1..(x * 10000):int do {
    for k in 1..(y * 10000):int do {
      z += j * k;
    }
  }
  if verbose then writeln(x, " & ", y, " == ", z);
}
