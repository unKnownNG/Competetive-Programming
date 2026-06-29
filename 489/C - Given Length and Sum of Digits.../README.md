<h2><a href="https://codeforces.com/contest/489/problem/C" target="_blank" rel="noopener noreferrer">489C — Given Length and Sum of Digits...</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 489C](https://codeforces.com/contest/489/problem/C) |

## Topics
`dp` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Given Length and Sum of Digits...</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You have a positive integer <span class="tex-span"><i>m</i></span> and a non-negative integer <span class="tex-span"><i>s</i></span>. Your task is to find the smallest and the largest of the numbers that have length <span class="tex-span"><i>m</i></span> and sum of digits <span class="tex-span"><i>s</i></span>. The required numbers should be non-negative integers written in the decimal base without leading zeroes.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The single line of the input contains a pair of integers <span class="tex-span"><i>m</i></span>, <span class="tex-span"><i>s</i></span> (<span class="tex-span">1 ≤ <i>m</i> ≤ 100, 0 ≤ <i>s</i> ≤ 900</span>) — the length and the sum of the digits of the required numbers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the output print the pair of the required non-negative integer numbers — first the minimum possible number, then — the maximum possible number. If no numbers satisfying conditions required exist, print the pair of numbers "<span class="tex-font-style-tt">-1 -1</span>" (without the quotes).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004305291663602713" id="id002381137994048882" class="input-output-copier">Copy</div></div><pre id="id004305291663602713">2 15<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007607528064345652" id="id0018398056606742552" class="input-output-copier">Copy</div></div><pre id="id007607528064345652">69 96<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008848817980301609" id="id0003519708915753772" class="input-output-copier">Copy</div></div><pre id="id008848817980301609">3 0<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009034064715710987" id="id0037024909325041966" class="input-output-copier">Copy</div></div><pre id="id009034064715710987">-1 -1<br></pre></div></div></div>