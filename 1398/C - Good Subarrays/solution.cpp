#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    string s;
    int n;
    cin >> n;
    cin >> s;
    long long ans = 0;
    map<long long ,long long> m;
    m[0] = 1;
    vector<long long> v, pref(n);
    for(auto i:s){
        v.push_back(i - '0' - 1);
    }
    pref[0] = v[0];
    for(int i = 1; i< n; i++){
        pref[i] = v[i] + pref[i - 1];
    }
 
    
    for(int i = 0; i < n; i++){
        if(m.count(pref[i])) ans += m[pref[i]];
        m[pref[i]]++;
    }
    cout << ans<< endl;
    // cout << c << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}