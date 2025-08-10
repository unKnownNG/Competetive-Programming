#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    string s;
    int n;
    cin >> n >> s;
    int l = 0, r = n - 1;
    for(l;l < n;l++){
        if(s[l] == 'B')break;
    }
    for(;r >=0;r--){
        if(s[r] == 'B') break;
 
    }
    cout << r - l + 1 << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}