<h3><a href="https://codeforces.com/contest/1520/problem/D" target="_blank" rel="noopener noreferrer">Same Differences</a></h3>

<div class="header"><div class="title">D. Same Differences</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers. Count the number of pairs of indices $$$(i, j)$$$ such that $$$i < j$$$ and $$$a_j - a_i = j - i$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$). Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$) — array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output the number of pairs of indices $$$(i, j)$$$ such that $$$i < j$$$ and $$$a_j - a_i = j - i$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008160906424284999" id="id006229995052300257" class="input-output-copier">Copy</div></div><pre id="id008160906424284999">4
6
3 5 1 4 6 6
3
1 2 3
4
1 3 3 4
6
1 6 3 4 5 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0023468011036388747" id="id005564815016020379" class="input-output-copier">Copy</div></div><pre id="id0023468011036388747">1
3
3
10
</pre></div></div></div>