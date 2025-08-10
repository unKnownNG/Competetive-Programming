#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    if(n&1){
        for(int i = 0; i < n; i++){
            cout << 2 << " ";
        }
        
    }
    else{
        cout << "1 3 ";
        for(int i = 0; i < n- 2;i++){
            cout << "2 ";
        }
    }
    cout << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}