<h2><a href="https://codeforces.com/contest/2241/problem/B" target="_blank" rel="noopener noreferrer">2241B — Good times Good times</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2241B](https://codeforces.com/contest/2241/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Good times Good times</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An integer $$$n$$$ is said to be <span class="tex-font-style-it">good</span> if it contains <span class="tex-font-style-bf">at most</span> two distinct digits in its decimal representation. For example, the integers $$$3$$$, $$$8588$$$, $$$67$$$ are good, whereas the integers $$$123$$$, $$$9447$$$ are not. </p><p>You are given an integer $$$x$$$ ($$$1 \le x  \lt  10^8$$$), which is good. Your task is to find an integer $$$y$$$ ($$$2 \le y \le 10^9$$$) such that both of the following conditions are satisfied: </p><ul> <li> $$$y$$$ is good. </li><li> $$$x \times y$$$ is good. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of each test case follows. </p><p>Each test case contains a single integer $$$x$$$ ($$$1 \le x  \lt  10^8$$$). <span class="tex-font-style-bf">It is guaranteed that $$$x$$$ is good.</span></p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer $$$y$$$ ($$$2 \le y \le 10^9$$$) such that both the integers $$$y$$$ and $$$x \times y$$$ are good.</p><p>If there are multiple valid answers, output any one of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0038917834908392235" id="id0021278976429450847" class="input-output-copier">Copy</div></div><pre id="id0038917834908392235"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">8</div><div class="test-example-line test-example-line-even test-example-line-2">73</div><div class="test-example-line test-example-line-odd test-example-line-3">299</div><div class="test-example-line test-example-line-even test-example-line-4">6767</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002583071062256016" id="id0044010818888703673" class="input-output-copier">Copy</div></div><pre id="id002583071062256016">11
4
26
3366</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, we have $$$x = 8$$$; choosing $$$y = 11$$$ is valid because both $$$y = 11$$$ and $$$x \times y = 88$$$ are good.</p><p>For the second test case, we have $$$x = 73$$$; choosing $$$y = 4$$$ is valid because both $$$y = 4$$$ and $$$x \times y = 292$$$ are good.</p></div>