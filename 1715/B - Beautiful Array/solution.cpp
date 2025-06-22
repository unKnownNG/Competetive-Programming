#include <iostream>
using namespace std;
#include <vector>
#define ll long long 
 
 
void solve(){
    ll n, k , b,s ;
    cin >> n >> k >> b >> s;
    ll min_s, max_s;
    min_s = k * b;
    max_s = (k * b) +  (k - 1) * n;
    int f = 1;
    vector<ll> v(n, 0);
    if(s < min_s || s > max_s  ) {cout << -1 <<  endl ;
    return;
    }
    v[0] = min(s,(b * k) + k - 1);
    s -= v[0];
 
    for(int i = 1; i < n && s > 0;i++){
        v[i] = min(k - 1LL, s);
        s -= min(k - 1LL, s);
 
    }    
 
    // for(int i = 1; i < n ;i++){
    //     if(s >=1){
    //         v[i] = k - 1;
    //         s -= k - 1;
    //     }
    //     else continue;
 
    // }   
    for(auto i:v) cout << i << ' ';
    cout << endl;
    
}
 
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}