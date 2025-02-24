<table>
  <tr>
    <th colspan="3">value returned by fork()</th>
  </tr>
  <tr>
    <td>return value = 0 <br>(pid = 0)</td>
    <td>return value > 0 <br>(pid > 0)</td>
    <td>return value < 0 <br>(pid < 0)</td>
  </tr>
  <tr>
    <td>This process is a child process</td>
    <td>This process is the parent of the process with pid</td>
    <td>Something went wrong</td>
  </tr>
</table>
<p><i>Note: pid 1 usually belongs to the system itself, so it won't be asigned to any other programs</i></p>
<table>
  <tr>
    <th colspan="2">useful functions</th>
  </tr>
  <tr>
    <td>getpid()</td>
    <td>getppid()</td>
  </tr>
  <tr>
    <td>Returns the pid of the calling process</td>
    <td>Returns the pid of the parent process, <br><i>or if already terminated the pid of the process it has been reparented to</i></td>
  </tr>
</table>
<br>
<h4>Installation:</h4>
cmake .<br>
make<br>
./fork_pids
