#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    long long sum = a + b + c;
    long long ans = 0;
    long long div = n/ sum * 3;
    if(n % sum == 0) ans = div;
    else if(n % sum <= a) ans = div + 1;
    else if(n%sum <= a + b) ans = div + 2;
    else ans = div + 3;
    cout << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}