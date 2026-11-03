<h2><a href="https://codeforces.com/contest/2171/problem/C1" target="_blank" rel="noopener noreferrer">2171C1 — Renako Amaori and XOR Game (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2171C1](https://codeforces.com/contest/2171/problem/C1) |

## Topics
`bitmasks` `games` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C1. Renako Amaori and XOR Game (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it">Yup. I couldn't do this any longer. No. Freaking. Way.</span></div><div class="epigraph-source">— Renako Amaori</div></div><p><span class="tex-font-style-bf">This is the easy version of the problem. The only difference between the easy and hard versions is that in the easy version, $$$a_i, b_i \leq 1$$$.</span></p><p><span class="tex-font-style-it">Renako is stuck between a rock and a hard place... and by that, of course, I mean Ajisai and Mai! Both of them want to hang out with her, and she just can't decide! So Ajisai and Mai have decided to play the XOR game.</span></p><p>Ajisai and Mai are given arrays $$$a$$$ and $$$b$$$ of length $$$n$$$ ($$$0\leq a_i, b_i\leq {\color{red}{1}}$$$). They will play a game that lasts for $$$n$$$ turns, where Ajisai moves on odd-numbered turns and Mai moves on even-numbered turns. On the $$$i$$$-th turn, the player to move may choose to swap $$$a_i$$$ and $$$b_i$$$, or pass.</p><p>Note that if a swap occurs, <span class="tex-font-style-bf">the index that is being swapped must match the turn number</span>. For example, on the first turn, Ajisai may choose to swap $$$a_1$$$ and $$$b_1$$$, or pass. On the second turn, Mai may choose to swap $$$a_2$$$ and $$$b_2$$$, or pass. This continues for $$$n$$$ turns. Thus, only Ajisai can swap odd indices, and only Mai can swap even indices.</p><p>At the end of the game, Ajisai achieves a score of $$$a_1 \oplus a_2 \oplus \dots \oplus a_n$$$, and Mai achieves a score of $$$b_1 \oplus b_2 \oplus \dots \oplus b_n$$$$$$^{\text{∗}}$$$. The player with the higher score wins. If the players have the same score, the game ends in a tie.</p><p>Determine the outcome of the game with optimal play. More formally, one player is considered to win with optimal play if there exists a strategy for them such that they always win, regardless of their opponent's choices. The game is considered a tie with optimal play if neither player has such a strategy.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$$$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a></p></div></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\leq t\leq 10^4$$$)  — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\leq n\leq 2\cdot 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers, $$$a_1, a_2, \dots, a_n$$$ ($$$0\leq a_i\leq 1$$$).</p><p>The third line of each test case contains $$$n$$$ integers, $$$b_1, b_2, \dots, b_n$$$ ($$$0\leq b_i\leq 1$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output on a single line "<span class="tex-font-style-tt">Ajisai</span>" if Ajisai wins with optimal play, "<span class="tex-font-style-tt">Mai</span>" if Mai wins with optimal play, or "<span class="tex-font-style-tt">Tie</span>" if the game ends in a tie with optimal play.</p><p>You may output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">mAi</span>", "<span class="tex-font-style-tt">mai</span>", "<span class="tex-font-style-tt">MAI</span>", and "<span class="tex-font-style-tt">maI</span>" will be recognized as "<span class="tex-font-style-tt">Mai</span>".</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006246281835534887" id="id007359355461662404" class="input-output-copier">Copy</div></div><pre data-content="6
4
1 0 0 1
1 0 1 1
6
0 1 1 1 1 0
0 0 1 0 1 1
4
0 0 1 0
1 0 1 1
5
1 0 1 1 1
0 1 1 1 0
6
1 1 1 1 1 1
1 1 1 1 1 1
5
0 1 0 0 1
1 0 0 1 1
" id="id006246281835534887"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 0 0 1</div><div class="test-example-line test-example-line-odd test-example-line-1">1 0 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">6</div><div class="test-example-line test-example-line-even test-example-line-2">0 1 1 1 1 0</div><div class="test-example-line test-example-line-even test-example-line-2">0 0 1 0 1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0 1 0</div><div class="test-example-line test-example-line-odd test-example-line-3">1 0 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">1 0 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">0 1 1 1 0</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">1 1 1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5">1 1 1 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-6">5</div><div class="test-example-line test-example-line-even test-example-line-6">0 1 0 0 1</div><div class="test-example-line test-example-line-even test-example-line-6">1 0 0 1 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010466729036634403" id="id0017586545409877097" class="input-output-copier">Copy</div></div><pre data-content="Ajisai
Mai
Tie
Ajisai
Tie
Mai
" id="id0010466729036634403"><div class="test-example-line test-example-line-odd test-example-line-1">Ajisai</div><div class="test-example-line test-example-line-even test-example-line-2">Mai</div><div class="test-example-line test-example-line-odd test-example-line-3">Tie</div><div class="test-example-line test-example-line-even test-example-line-4">Ajisai</div><div class="test-example-line test-example-line-odd test-example-line-5">Tie</div><div class="test-example-line test-example-line-even test-example-line-6">Mai</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, one way the game might play out is as follows:</p><p>On turn 1, Ajisai chooses to swap $$$a_1$$$ and $$$b_1$$$. Now the arrays are $$$a = [1, 0, 0, 1]$$$ and $$$b = [1, 0, 1, 1]$$$.</p><p>On turn 2, Mai chooses to pass.</p><p>On turn 3, Ajisai chooses to swap $$$a_3$$$ and $$$b_3$$$. Now the arrays are $$$a = [1, 0, 1, 1]$$$ and $$$b = [1, 0, 0, 1]$$$.</p><p>On turn 4, Mai chooses to swap $$$a_4$$$ and $$$b_4$$$. Now the arrays are $$$a = [1, 0, 1, 1]$$$ and $$$b = [1, 0, 0, 1]$$$.</p><p>Now, Ajisai's final score is $$$1\oplus 0\oplus 1\oplus 1 = 1$$$ and Mai's final score is $$$1\oplus 0\oplus 0\oplus 1 = 0$$$. Therefore, Ajisai wins the game.</p><p>It is not guaranteed that the above description is representative of optimal play.</p></div>