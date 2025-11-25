<h3><a href="https://codeforces.com/contest/1294/problem/C" target="_blank" rel="noopener noreferrer">Product of Three Numbers</a></h3>

<div class="header"><div class="title">C. Product of Three Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given one integer number $$$n$$$. Find three <span class="tex-font-style-bf">distinct integers</span> $$$a, b, c$$$ such that $$$2 \le a, b, c$$$ and $$$a \cdot b \cdot c = n$$$ or say that it is impossible to do it.</p><p>If there are several answers, you can print any.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The next $$$n$$$ lines describe test cases. The $$$i$$$-th test case is given on a new line as one integer $$$n$$$ ($$$2 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer on it. Print "<span class="tex-font-style-tt">NO</span>" if it is impossible to represent $$$n$$$ as $$$a \cdot b \cdot c$$$ for some <span class="tex-font-style-bf">distinct integers</span> $$$a, b, c$$$ such that $$$2 \le a, b, c$$$.</p><p>Otherwise, print "<span class="tex-font-style-tt">YES</span>" and <span class="tex-font-style-bf">any</span> possible such representation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009847955330397826" id="id005751266915314267" class="input-output-copier">Copy</div></div><pre id="id009847955330397826">5
64
32
97
2
12345
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007527048213259707" id="id009910230255796172" class="input-output-copier">Copy</div></div><pre id="id007527048213259707">YES
2 4 8 
NO
NO
NO
YES
3 5 823 
</pre></div></div></div>