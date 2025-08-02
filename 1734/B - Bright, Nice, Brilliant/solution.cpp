#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= i ;j++){
            if(j == 1 || j == i){
                cout << 1 << " ";
            }
            else cout << 0 << " ";
        }
        cout << endl;
    }
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}