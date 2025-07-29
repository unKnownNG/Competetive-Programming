#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    int c = 0;
    vector<int> d(n, 0);
    for(int i = 0; i < n; i++){
        m[s[i]]++;
        if(m[s[i]] == 1){
            c++;
        }
        d[i] = c;
    }
    // for(auto i: d){
    //     cout << i << " ";
    // }
    // cout << endl;
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans += d[i];
    }
    cout << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}