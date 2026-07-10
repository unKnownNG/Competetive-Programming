<h2><a href="https://codeforces.com/contest/1811/problem/A" target="_blank" rel="noopener noreferrer">1811A — Insert Digit</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1811A](https://codeforces.com/contest/1811/problem/A) |

## Topics
`greedy` `math` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Insert Digit</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a <span class="tex-font-style-bf">positive</span> number of length $$$n$$$ and one additional digit.</p><p>You can insert this digit anywhere in the number, including at the beginning or at the end.</p><p>Your task is to make the result as large as possible.</p><p>For example, you have the number $$$76543$$$, and the additional digit is $$$4$$$. Then the maximum number you can get is $$$765443$$$, and it can be obtained in two ways — by inserting a digit after the $$$3$$$th or after the $$$4$$$th digit of the number.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The descriptions of the test cases follow.</p><p>The first line of the description of each test case contains two integers $$$n$$$ and $$$d$$$ ($$$1 \le n \le 2 \cdot 10^5$$$; $$$0 \le d \le 9$$$) — the length of the number and an additional digit, respectively.</p><p>The second line of the description of each test case contains a string consisting of $$$n$$$ digits — the number that you have initially. It is guaranteed that the number does not contain leading zeros.</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a string consisting of $$$n + 1$$$ digits — the maximum possible number that can be obtained.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005593084033301566" id="id006009182551543506" class="input-output-copier">Copy</div></div><pre id="id005593084033301566"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">5 4</div><div class="test-example-line test-example-line-odd test-example-line-1">76543</div><div class="test-example-line test-example-line-even test-example-line-2">1 0</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-odd test-example-line-3">2 5</div><div class="test-example-line test-example-line-odd test-example-line-3">44</div><div class="test-example-line test-example-line-even test-example-line-4">3 6</div><div class="test-example-line test-example-line-even test-example-line-4">666</div><div class="test-example-line test-example-line-odd test-example-line-5">5 6</div><div class="test-example-line test-example-line-odd test-example-line-5">13579</div><div class="test-example-line test-example-line-even test-example-line-6">5 8</div><div class="test-example-line test-example-line-even test-example-line-6">97531</div><div class="test-example-line test-example-line-odd test-example-line-7">19 4</div><div class="test-example-line test-example-line-odd test-example-line-7">9876543210123456789</div><div class="test-example-line test-example-line-even test-example-line-8">5 7</div><div class="test-example-line test-example-line-even test-example-line-8">73737</div><div class="test-example-line test-example-line-odd test-example-line-9">8 1</div><div class="test-example-line test-example-line-odd test-example-line-9">20000000</div><div class="test-example-line test-example-line-even test-example-line-10">7 0</div><div class="test-example-line test-example-line-even test-example-line-10">7058959</div><div class="test-example-line test-example-line-odd test-example-line-11">12 1</div><div class="test-example-line test-example-line-odd test-example-line-11">828127127732</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008476507937158229" id="id003218396527501657" class="input-output-copier">Copy</div></div><pre id="id008476507937158229">765443
10
544
6666
613579
987531
98765443210123456789
773737
210000000
70589590
8281271277321
</pre></div></div></div>