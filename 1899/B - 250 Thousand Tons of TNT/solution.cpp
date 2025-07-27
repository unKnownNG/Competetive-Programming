#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    
    
    vector<long long> v(n);
    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }
    vector<long long> pref(n);
    pref[0] = v[0];
    long long s = 0;
    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + v[i];
    }
    long long ans = 0;
    for(int i = 1; i <= n ; i++){
        if(n % i ) continue;
        long long min_sum = pref[i - 1], max_sum = pref[i - 1];
        for(int j = i; j < n ; j += i){
            long long cur = pref[j + i - 1] - pref[j - 1];
            max_sum = max(max_sum, cur);
            min_sum = min(min_sum, cur);
        }
        ans = max(max_sum - min_sum, ans);
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