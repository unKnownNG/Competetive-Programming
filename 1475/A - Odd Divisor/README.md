<h3><a href="https://codeforces.com/contest/1475/problem/A" target="_blank" rel="noopener noreferrer">Odd Divisor</a></h3>

<div class="header"><div class="title">A. Odd Divisor</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$. Check if $$$n$$$ has an <span class="tex-font-style-bf">odd</span> divisor, greater than one (does there exist such a number $$$x$$$ ($$$x  \gt  1$$$) that $$$n$$$ is divisible by $$$x$$$ and $$$x$$$ is odd).</p><p>For example, if $$$n=6$$$, then there is $$$x=3$$$. If $$$n=4$$$, then such a number does not exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case contains one integer $$$n$$$ ($$$2 \le n \le 10^{14}$$$).</p><p>Please note, that the input for some test cases won't fit into $$$32$$$-bit integer type, so you should use at least $$$64$$$-bit integer type in your programming language.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output on a separate line: </p><ul> <li> "<span class="tex-font-style-tt">YES</span>" if $$$n$$$ has an <span class="tex-font-style-bf">odd</span> divisor, greater than one; </li><li> "<span class="tex-font-style-tt">NO</span>" otherwise. </li></ul><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will be recognized as positive).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0045445210569083094" id="id007928792352539867" class="input-output-copier">Copy</div></div><pre id="id0045445210569083094">6
2
3
4
5
998244353
1099511627776
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048230005942753096" id="id0009591454631324703" class="input-output-copier">Copy</div></div><pre id="id0048230005942753096">NO
YES
NO
YES
YES
NO
</pre></div></div></div>