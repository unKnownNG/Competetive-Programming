#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }
    map<int, bool> mp;
    for(int i = 0 ; i < n; i++){
        mp[v[i]] = true;
    }
    for(int i = 0; i< n; i++){
        if(mp.find(v[i] - k) != mp.end())
        {
            cout << "Yes\n";
            return;
        }
    }
    cout <<"No\n";
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}