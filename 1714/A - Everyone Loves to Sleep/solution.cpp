#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n, h,m;
    cin >> n >> h >> m;
    int og = h * 60 + m;
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        int t = x * 60 + y;
        if(t < og) t += 24 *60;
        int diff = t - og;
        ans = min(ans, diff);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}