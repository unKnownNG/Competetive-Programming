#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
 
    vector<long long> v(n + 1);  // Include starting time 0
    v[0] = 0;  // Starting time
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
 
    for (int i = 1; i <= n; i++) {
        f -= min((v[i] - v[i - 1]) * a, b);
    }
 
    cout << (f > 0 ? "YES" : "NO") << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}