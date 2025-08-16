<h3><a href="https://codeforces.com/contest/1327/problem/A" target="_blank" rel="noopener noreferrer">Sum of Odd Integers</a></h3>

<div class="header"><div class="title">A. Sum of Odd Integers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$n$$$ and $$$k$$$. Your task is to find if $$$n$$$ can be represented as a sum of $$$k$$$ <span class="tex-font-style-bf">distinct positive odd</span> (not divisible by $$$2$$$) integers or not.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases.</p><p>The next $$$t$$$ lines describe test cases. The only line of the test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 10^7$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer — "<span class="tex-font-style-tt">YES</span>" (without quotes) if $$$n$$$ can be represented as a sum of $$$k$$$ <span class="tex-font-style-bf">distinct positive odd</span> (not divisible by $$$2$$$) integers and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023947178760748533" id="id002947532043236646" class="input-output-copier">Copy</div></div><pre id="id0023947178760748533">6
3 1
4 2
10 3
10 2
16 4
16 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009498702907303578" id="id00999415669371343" class="input-output-copier">Copy</div></div><pre id="id009498702907303578">YES
YES
NO
YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can represent $$$3$$$ as $$$3$$$.</p><p>In the second test case, the only way to represent $$$4$$$ is $$$1+3$$$.</p><p>In the third test case, you cannot represent $$$10$$$ as the sum of three distinct positive odd integers.</p><p>In the fourth test case, you can represent $$$10$$$ as $$$3+7$$$, for example.</p><p>In the fifth test case, you can represent $$$16$$$ as $$$1+3+5+7$$$.</p><p>In the sixth test case, you cannot represent $$$16$$$ as the sum of five distinct positive odd integers.</p></div>