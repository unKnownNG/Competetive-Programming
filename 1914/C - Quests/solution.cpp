#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n , k;
    cin >> n >> k;
    vector<int> v(n), b(n);
    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n ; i++){
        cin >> b[i];
    }
 
    int c = 0, m = 0, res = 0;
    vector<int> p(n);
    p[0] = v[0];
    for(int i = 1; i < n; i++){
        p[i] = v[i] + p[i - 1];
    }
    
 
        for(int i = 0; i < min(k, n); i++){
            c += v[i];
            m = max(m, b[i]);
            res = max(res, c + m * ( k - i - 1));
            
            // cout << "p " << c << cm << m;
        }
        cout << res << endl;
 
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}