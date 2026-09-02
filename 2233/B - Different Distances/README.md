<h2><a href="https://codeforces.com/contest/2233/problem/B" target="_blank" rel="noopener noreferrer">2233B — Different Distances</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2233B](https://codeforces.com/contest/2233/problem/B) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">B. Different Distances</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Construct an array of $$$4 \cdot n$$$ integers such that:</p><ul> <li> each number $$$1, 2, \dots, n$$$ appears in the array exactly $$$4$$$ times; </li><li> let $$$p_{x, i}$$$ be the position of the $$$i$$$-th occurrence of number $$$x$$$ in the array; then, for each $$$x$$$ from $$$1$$$ to $$$n$$$, the numbers $$$(p_{x, 2} - p_{x, 1}), (p_{x, 3} - p_{x, 2}), (p_{x, 4} - p_{x, 3})$$$ must be pairwise distinct. </li></ul><p>For example, for $$$n = 3$$$, one possible array is $$$[1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3]$$$, because:</p><ul> <li> $$$p_{1, 2} - p_{1, 1} = 1, p_{1, 3} - p_{1, 2} = 2, p_{1, 4} - p_{1, 3} = 3$$$ — all numbers are distinct; </li><li> $$$p_{2, 2} - p_{2, 1} = 2, p_{2, 3} - p_{2, 2} = 4, p_{2, 4} - p_{2, 3} = 1$$$ — all numbers are distinct; </li><li> $$$p_{3, 2} - p_{3, 1} = 2, p_{3, 3} - p_{3, 2} = 3, p_{3, 4} - p_{3, 3} = 1$$$ — all numbers are distinct. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 200$$$). The description of the test cases follows.</p><p>The only line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 200$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the required array. If there are several suitable arrays, output any of them. It can be shown that at least one suitable array always exists under the constraints of the problem.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001977745595037016" id="id009950579134332133" class="input-output-copier">Copy</div></div><pre id="id001977745595037016"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005453597305648334" id="id008394411152353141" class="input-output-copier">Copy</div></div><pre id="id005453597305648334">1 1 2 1 2 3 1 3 2 2 3 3
1 4 3 4 4 3 3 1 2 1 2 3 4 2 2 1 
5 3 2 4 1 2 2 4 4 5 3 5 2 1 3 1 5 4 1 3 
</pre></div></div></div>