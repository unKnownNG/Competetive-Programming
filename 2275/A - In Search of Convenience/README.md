<h2><a href="https://codeforces.com/contest/2275/problem/A" target="_blank" rel="noopener noreferrer">2275A — In Search of Convenience</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2275A](https://codeforces.com/contest/2275/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. In Search of Convenience</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>K1o0n got a router and placed it at point $$$(x_0, y_0)$$$; we will consider the apartment layout as a coordinate plane, and the floor is tiled, so the furniture can stand only at lattice points with integer coordinates.</p><p>The internet spreads exactly $$$R$$$ meters around the router. K1o0n wants to move his computer as far away from it as possible — but still so that the internet is available. Therefore, the desk with the computer must be placed exactly on the reception boundary, at a distance of $$$R$$$ from the router. For example, if the router is at point $$$(5, 5)$$$ and $$$R = 5$$$, then the desk can be placed at point $$$(2,1)$$$, because $$$(5 - 2)^2 + (5 - 1)^2 = 5^2$$$.</p><p>Find any point with integer coordinates that is exactly $$$R$$$ away from $$$(x_0, y_0)$$$.</p><p>Recall that the distance from the point $$$(x_0, y_0)$$$ to the point $$$(x, y)$$$ is $$$\sqrt{(x_0 - x)^2 + (y_0 - y)^2}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of testcases.</p><p>The only line of each testcase contains three integers $$$x_0$$$, $$$y_0$$$, and $$$R$$$ ($$$-10 \le x_0, y_0 \le 10$$$, $$$1 \le R \le 25$$$) — the coordinates of the router and the coverage radius.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output two integers $$$x$$$ and $$$y$$$ — the coordinates of the desk.</p><p>If there are several suitable points, output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00520727416643262" id="id00534491526418137" class="input-output-copier">Copy</div></div><pre id="id00520727416643262">3
0 0 1
5 5 5
10 10 13
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012427199651286414" id="id009453418044944617" class="input-output-copier">Copy</div></div><pre id="id0012427199651286414">0 1
2 1
-2 5</pre></div></div></div>