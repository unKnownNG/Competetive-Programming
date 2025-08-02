#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    vector<int> pref(n + 1);
    pref[0] = 0;
 
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i - 1];
    }
 
    for(int i = 0 ; i< k; i++){
        int a,b,c;
        cin >> a >> b >> c;
        long long sum = pref[n] - (pref[b ] - pref[a - 1]) + (b-a + 1 ) * c ;
        if(sum &1)cout  << "yes\n";
        else cout << "no\n";
    }
 
 
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}