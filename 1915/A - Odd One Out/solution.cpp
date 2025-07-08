#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int a , b , c, r;
    cin >> a >> b >> c;
    if(a == b) r = c;
    else if( a == c) r = b;
    else if( b == c) r = a;
    cout << r << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}