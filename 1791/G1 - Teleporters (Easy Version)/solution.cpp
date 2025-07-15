#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n ; i++){
        int a;
        cin >> a;
        v[i] = a + i + 1;
    }
 
    sort(v.begin(), v.end());
    int c = 0;
    for(int i = 0; i < n; i++){
        if(v[i] <= k){
            c++ ;
            k -= v[i];
        }
        else{
            break;
        }
    }
    cout << c << endl;
 
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}