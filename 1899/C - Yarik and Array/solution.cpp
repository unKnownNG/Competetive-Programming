#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long ans = INT_MIN;
 
    int i = 0, j = 0;
    long long sum = 0;
    while(j < n){
        if(sum < 0){
            sum = 0;
            i = j;
        }
        if(i < j){
            if((v[j] ^ v[j - 1]) & 1){
                sum += v[j];
            }
            else{
                sum = v[j];
                i = j;
 
            }
        }
        else{
            sum = v[j];
        }
        ans = max(ans, sum);
        j++;
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