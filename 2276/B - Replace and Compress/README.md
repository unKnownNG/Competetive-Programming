<h2><a href="https://codeforces.com/contest/2276/problem/B" target="_blank" rel="noopener noreferrer">2276B — Replace and Compress</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2276B](https://codeforces.com/contest/2276/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Replace and Compress</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ of length $$$n$$$ consisting of the characters <span class="tex-font-style-tt">0</span> and/or <span class="tex-font-style-tt">1</span>. You need to perform exactly one operation consisting of two steps:</p><ol> <li> choose <span class="tex-font-style-bf">at most one</span> character with index from $$$2$$$ to $$$n-1$$$ inclusive and replace it with the opposite one: <span class="tex-font-style-tt">0</span> to <span class="tex-font-style-tt">1</span> or <span class="tex-font-style-tt">1</span> to <span class="tex-font-style-tt">0</span>. You may choose not to change any character. <span class="tex-font-style-bf">The first and the last characters of the string cannot be changed</span>; </li><li> replace each maximal block of consecutive equal characters with one such character. </li></ol><p>A block is called maximal if it cannot be extended to the left or to the right by adding the same character. For example, after the second step, the string <span class="tex-font-style-tt">100111011</span> will become <span class="tex-font-style-tt">10101</span>.</p><p>Count the number of different strings that can be obtained after performing this operation.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing a string $$$s$$$ ($$$3 \le |s| \le 3 \cdot 10^5$$$) consisting only of the characters <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span>.</p><p>Additional constraints on the input:</p><ul> <li> the sum of the lengths of strings $$$s$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$. </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of different strings that can be obtained after performing the operation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009345776353285099" id="id007157469415436601" class="input-output-copier">Copy</div></div><pre data-content="7
001
000
010
00010
100111011
001011010
1111
" id="id009345776353285099"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">001</div><div class="test-example-line test-example-line-even test-example-line-2">000</div><div class="test-example-line test-example-line-odd test-example-line-3">010</div><div class="test-example-line test-example-line-even test-example-line-4">00010</div><div class="test-example-line test-example-line-odd test-example-line-5">100111011</div><div class="test-example-line test-example-line-even test-example-line-6">001011010</div><div class="test-example-line test-example-line-odd test-example-line-7">1111</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008451887130774988" id="id005247366459709899" class="input-output-copier">Copy</div></div><pre data-content="1
2
2
3
3
2
2
" id="id008451887130774988"><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-even test-example-line-6">2</div><div class="test-example-line test-example-line-odd test-example-line-7">2</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you may choose not to change any character or replace the second character. Before compression, the resulting strings are <span class="tex-font-style-tt">001</span> and <span class="tex-font-style-tt">011</span>, respectively. After compression, both strings become <span class="tex-font-style-tt">01</span>, so the answer is $$$1$$$.</p><p>In the fifth test case:</p><ul> <li> if no character is changed, after compression we get <span class="tex-font-style-tt">10101</span>; </li><li> if the second character is replaced, we get <span class="tex-font-style-tt">110111011</span>, and after compression — <span class="tex-font-style-tt">10101</span>; </li><li> if the fifth character is replaced, we get <span class="tex-font-style-tt">100101011</span>, and after compression — <span class="tex-font-style-tt">1010101</span>; </li><li> if the seventh character is replaced, we get <span class="tex-font-style-tt">100111111</span>, and after compression — <span class="tex-font-style-tt">101</span>. </li></ul><p>In total, three different strings can be obtained: <span class="tex-font-style-tt">101</span>, <span class="tex-font-style-tt">10101</span>, and <span class="tex-font-style-tt">1010101</span>.</p></div>