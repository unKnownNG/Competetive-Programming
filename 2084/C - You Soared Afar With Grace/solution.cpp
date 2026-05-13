#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define vll vector<ll>
#define pb push_back
 
void solve(){
    // Logic
    ll n;
    cin >> n;
 
    vll a(n), b(n);
 
    for(auto &i: a) cin >> i;
    for(auto &i: b) cin >> i;
 
    // O(1) tracking array instead of map
    vll pos(n + 1);
 
    for(int i = 0; i < n; i++){
        pos[a[i]] = i;
    }
 
    ll e = 0, ne = 0;
    ll self_idx = -1; // To track where the self-loop is sitting
 
    // Validation using purely 0-indexed arrays
    for(int i = 0; i < n; i++){
        // Check for invalid cyclic pairs: "Does b[i]'s pair map back to a[i]?"
        if(b[pos[b[i]]] != a[i]){
            ne++;
        }
        // Count self-loops and record its index
        if(a[i] == b[i]){
            e++;
            self_idx = i;
        }
    }
 
    // Your exact conditional structure
    if((n & 1)){
        if(e != 1 || ne){
            cout << "-1
";
            return;
        }
    }
    else if(ne){
        cout << "-1
";
        return;
    }
    else if(e >= 1){
        cout << "-1
";
        return;
    }
 
    vector<pair<int,int>> ans;
 
    // PRE-PROCESSING: Safely route the self-loop to the center if n is odd
    if((n & 1)){
        ll ind = self_idx;
        ll tar = n / 2;
        
        if(ind != tar){
            ans.pb({ind + 1, tar + 1});
            
            swap(a[ind], a[tar]);
            swap(b[ind], b[tar]);
            
            pos[a[ind]] = ind;
            pos[a[tar]] = tar;
        }
    }
 
    // MAIN LOOP: Your exact greedy logic, completely safe from traps
    for(int i = 0; i < n/2; i++){
        ll ind = pos[b[i]];
        ll tar = n - i - 1;
 
        // Added the simple 'if(ind != tar)' check here so we don't swap elements in place
        if(ind != tar){
            ans.pb({ ind + 1, tar + 1});
            
            swap(a[ind], a[tar]);
            swap(b[ind], b[tar]);
 
            pos[a[ind]] = ind;
            pos[a[tar]] = tar;
        }
    }
 
    cout << ans.size() << "
";
    for(auto i : ans){
        cout << i.first << " " << i.second << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}