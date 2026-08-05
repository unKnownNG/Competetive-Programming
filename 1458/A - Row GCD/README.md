<h2><a href="https://codeforces.com/contest/1458/problem/A" target="_blank" rel="noopener noreferrer">1458A — Row GCD</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1458A](https://codeforces.com/contest/1458/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Row GCD</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two positive integer sequences $$$a_1, \ldots, a_n$$$ and $$$b_1, \ldots, b_m$$$. For each $$$j = 1, \ldots, m$$$ find the greatest common divisor of $$$a_1 + b_j, \ldots, a_n + b_j$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 2 \cdot 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^{18})$$$.</p><p>The third line contains $$$m$$$ integers $$$b_1, \ldots, b_m$$$ ($$$1 \leq b_j \leq 10^{18})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$m$$$ integers. The $$$j$$$-th of them should be equal to GCD$$$(a_1 + b_j, \ldots, a_n + b_j)$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00035223144583758415" id="id004208772679178522" class="input-output-copier">Copy</div></div><pre id="id00035223144583758415">4 4
1 25 121 169
1 2 7 23
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006082808174031945" id="id007378063991934649" class="input-output-copier">Copy</div></div><pre id="id006082808174031945">2 3 8 24
</pre></div></div></div>