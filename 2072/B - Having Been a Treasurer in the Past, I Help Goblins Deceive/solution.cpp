#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    string s;
    long long n;
    cin >> n >> s;
    long long d = 0, u = 0;
    for(int i = 0 ; i < n; i++){
        if(s[i] == '_') u++;
        else d++;
    }
    cout << u *(d*d/4)<< endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}