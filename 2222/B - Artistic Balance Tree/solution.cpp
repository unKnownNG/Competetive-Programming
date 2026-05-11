#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vll vector<long long>
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
void solve() {
    ll n, k;
    cin >> n >> k;
    
    vll odd, even;
    ll total_sum = 0;
    
    // 1. Separate by INDEX (1-based) and track total sum
    for (int i = 1; i <= n; i++) {
        ll val;
        cin >> val;
        total_sum += val;
        
        if (i & 1) odd.pb(val);
        else even.pb(val);
    }
 
    // 2. Count operation targets (Offline frequency tracking)
    ll o = 0, e = 0;
    for (int i = 0; i < k; i++) {
        ll target;
        cin >> target;
        if (target & 1) o++;
        else e++;
    }
 
    // 3. Sort descending to access the most optimal elements first
    sort(all(odd), greater<ll>());
    sort(all(even), greater<ll>());
 
    // 4. Process Odd Parity
    if (o > 0 && !odd.empty()) {
        total_sum -= odd[0]; // The forced first mark (taken even if negative)
        
        // Edge Case Prevention: Take the minimum of available ops or available elements
        ll limit = min((ll)odd.size(), o);
        
        for (int i = 1; i < limit; i++) {
            if (odd[i] >= 0) {
                total_sum -= odd[i]; // The optional advantageous marks
            } else {
                break; // Array is sorted descending; everything else is negative
            }
        }
    }
 
    // 5. Process Even Parity
    if (e > 0 && !even.empty()) {
        total_sum -= even[0]; // The forced first mark
        
        ll limit = min((ll)even.size(), e);
        
        for (int i = 1; i < limit; i++) {
            if (even[i] >= 0) {
                total_sum -= even[i];
            } else {
                break; 
            }
        }
    }
 
    cout << total_sum << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}