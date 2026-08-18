#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    long long total_popcount = 0;
    long long p2 = 1;
 
    // FIX: Stop when p2 exceeds n to prevent infinite loops and overflow
    while (p2 <= n) {
        long long take = min(k, n / p2);
        total_popcount += take;
        n -= take * p2;
        p2 <<= 1;
    }
 
    cout << total_popcount << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}