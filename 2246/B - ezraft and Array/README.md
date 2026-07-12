<h2><a href="https://codeforces.com/contest/2246/problem/B" target="_blank" rel="noopener noreferrer">2246B — ezraft and Array</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2246B](https://codeforces.com/contest/2246/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">B. ezraft and Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a single integer $$$n.$$$ Construct an array of $$$n$$$ distinct positive integers $$$a_1, \ldots, a_n$$$ such that for all $$$i \, (1 \le i \le n)$$$, $$$a_1 + a_2 + a_3 + \ldots + a_n$$$ is divisible by $$$a_i,$$$ or determine that no such array exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 50$$$). The description of the test cases follows.</p><p>The first and only line of each test case contains a single integer $$$n \, (1 \le n \le 50).$$$</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no solution, output a single integer $$$-1$$$.</p><p>Otherwise, output $$$n$$$ integers $$$a_1, \ldots, a_n \, (1 \le a_i \le 10^{17})$$$ — an array satisfying the conditions.</p><p>If there are multiple solutions, print any of them. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022001558233883634" id="id002536048476713758" class="input-output-copier">Copy</div></div><pre id="id0022001558233883634"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005672710432579988" id="id004052403467299749" class="input-output-copier">Copy</div></div><pre id="id005672710432579988">1
1 9 2 6
12 3 10 20 15
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the condition is clearly satisfied, since $$$1$$$ is divisible by itself.</p><p>In the second test case, the output is $$$a = [1,9,2,6].$$$ We have $$$a_1 + a_2 + a_3 + a_4 = 18,$$$ which is divisible by all $$$a_i.$$$</p></div>