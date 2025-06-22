#include <iostream>
using namespace std;
#include <vector>
#define ll long long 
 
 
void solve(){
    ll a,b;
    cin >> a >> b;
    ll ans = INT8_MAX;
    ll c = 0;
    for(int i  = 0 ; i < 32 ; i++){
        c = i;
        ll newbie = b + i;
        if(newbie == 1) continue;
        ll newa = a;
        while(newa > 0){
            newa = newa/newbie;
            // newbie++;
            c++;
        }
        ans = min(ans, c);
 
    }
    cout << ans << endl;
 
 
}
 
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}