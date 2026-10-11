<h2><a href="https://codeforces.com/contest/1183/problem/D" target="_blank" rel="noopener noreferrer">1183D — Candy Box (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1183D](https://codeforces.com/contest/1183/problem/D) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Candy Box (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This problem is actually a subproblem of problem G from the same contest.</span></p><p>There are $$$n$$$ candies in a candy box. The type of the $$$i$$$-th candy is $$$a_i$$$ ($$$1 \le a_i \le n$$$).</p><p>You have to prepare a gift using some of these candies with the following restriction: the numbers of candies of each type presented in a gift should be all distinct (i. e. for example, a gift having two candies of type $$$1$$$ and two candies of type $$$2$$$ is bad). </p><p><span class="tex-font-style-bf">It is possible that multiple types of candies are completely absent from the gift</span>. It is also possible that <span class="tex-font-style-bf">not all candies</span> of some types will be taken to a gift.</p><p>Your task is to find out the <span class="tex-font-style-bf">maximum</span> possible size of the single gift you can prepare using the candies you have.</p><p>You have to answer $$$q$$$ independent queries.</p><p><span class="tex-font-style-bf">If you are Python programmer, consider using PyPy instead of Python when you submit your code.</span></p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 2 \cdot 10^5$$$) — the number of queries. Each query is represented by two lines.</p><p>The first line of each query contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of candies.</p><p>The second line of each query contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the type of the $$$i$$$-th candy in the box.</p><p>It is guaranteed that the sum of $$$n$$$ over all queries does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query print one integer — the <span class="tex-font-style-bf">maximum</span> possible size of the single gift you can compose using candies you got in this query with the restriction described in the problem statement.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00009677996941973244" id="id009923873635738637" class="input-output-copier">Copy</div></div><pre id="id00009677996941973244">3
8
1 4 8 4 5 6 3 8
16
2 1 3 3 4 3 4 4 1 3 2 2 2 4 1 1
9
2 2 4 4 4 7 7 7 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009138868671489164" id="id003949914036280152" class="input-output-copier">Copy</div></div><pre id="id0009138868671489164">3
10
9
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first query, you can prepare a gift with two candies of type $$$8$$$ and one candy of type $$$5$$$, totalling to $$$3$$$ candies.</p><p>Note that this is not the only possible solution — taking two candies of type $$$4$$$ and one candy of type $$$6$$$ is also valid.</p></div>