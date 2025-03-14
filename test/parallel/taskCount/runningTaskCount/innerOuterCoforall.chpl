use Collectives;

config const tasksPerLoc = 4;
var taskCounts: [0..#numLocales, 0..#tasksPerLoc] (int, int);

proc main() {
  coforall loc in Locales with (ref taskCounts) do on loc {
    var bar = new barrier(tasksPerLoc);
    coforall tid in 0..#tasksPerLoc with (ref taskCounts) {
      bar.barrier();
      const taskID = (loc.id * tasksPerLoc) + tid;
      const rt = here.runningTaskCounter.read();
      bar.barrier();
      taskCounts[loc.id, tid] = (taskID, rt);
    }
  }
  for taskCount in taskCounts do 
    writeln("TASK ", taskCount(0), ": running = ", taskCount(1));
}
