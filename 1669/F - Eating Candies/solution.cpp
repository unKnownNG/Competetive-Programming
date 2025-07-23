#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    ll sr = v[n - 1], sl = v[0];
    int ans = 0;
    int i = 0, j = n -1 ;
    while(i < j){
        if(sr == sl){
            ans = max(ans, i - j + 1 + n);
        }
        if(sl >= sr){
            j--;
            sr += v[j];
            
        }
        else{
            i++;
            sl += v[i];
        }
 
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