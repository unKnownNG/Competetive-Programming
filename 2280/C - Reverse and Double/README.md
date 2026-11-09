<h2><a href="https://codeforces.com/contest/2280/problem/C" target="_blank" rel="noopener noreferrer">2280C — Reverse and Double</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2280C](https://codeforces.com/contest/2280/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Reverse and Double</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given an array $$$a$$$ consisting of $$$n$$$ positive integers.</p><p>In one operation, you choose two indices $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le n$$$). Then the segment $$$a_l, a_{l+1}, \ldots, a_r$$$ is reversed, and every value in this segment is doubled.</p><p>In other words, after applying the operation, the chosen segment becomes $$$2\cdot a_r, 2\cdot a_{r-1}, \ldots, 2\cdot a_l$$$ and the full array is $$$$$$[a_1, a_2, \ldots, a_{l-1}, 2\cdot a_r, 2\cdot a_{r-1}, \ldots, 2\cdot a_l, a_{r+1}, \ldots, a_n].$$$$$$</p><p>The <span class="tex-font-style-it">gap value</span> of an array is the <span class="tex-font-style-bf">maximum</span> value of $$$|a_i-a_{i+1}|$$$ over all $$$1 \le i  \lt  n$$$.</p><p>Find the minimum possible gap value of $$$a$$$ after applying <span class="tex-font-style-it">at most one</span> operation.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$2\le n\le 3\cdot 10^5$$$) — the length of $$$a$$$.</p><p>The second line of each testcase contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^6$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimum possible gap value after applying at most one operation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020733435421491608" id="id009487462681133775" class="input-output-copier">Copy</div></div><pre data-content="6
9
9 9 8 2 4 4 3 5 3
2
5 6
5
1 7 4 1 10
2
10 16
5
5 2 6 5 3
6
8 3 9 9 9 8
" id="id0020733435421491608"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">9</div><div class="test-example-line test-example-line-odd test-example-line-1">9 9 8 2 4 4 3 5 3</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">5 6</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">1 7 4 1 10</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">10 16</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">5 2 6 5 3</div><div class="test-example-line test-example-line-even test-example-line-6">6</div><div class="test-example-line test-example-line-even test-example-line-6">8 3 9 9 9 8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011802663624236476" id="id006180165957467" class="input-output-copier">Copy</div></div><pre data-content="4
1
6
4
2
3
" id="id0011802663624236476"><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">2</div><div class="test-example-line test-example-line-even test-example-line-6">3</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it is optimal to choose $$$l = 4$$$ and $$$r = 5$$$. The resulting array is $$$$$$[9, 9, 8, \mathbf{8}, \mathbf{4}, 4, 3, 5, 3]$$$$$$ and the resulting gap value is $$$4$$$, achieved at $$$i = 4$$$.</p><p>In the second test case, the gap value before applying any operations is $$$1$$$. We can show that applying any operation will increase this value, so the answer is $$$1$$$.</p></div>