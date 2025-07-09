#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    long long n, m;
    cin >> n;
    m = n;
    long long c = 1;
    while(m/10){
        m /= 10;
        c *= 10;
    }
    cout << abs(n - c) << endl;
 
}
 
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}