#include <bits/stdc++.h>
using namespace std;
 
int search(vector<int> &arr, int val, int length){
    int l = 0, r = length - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(arr[mid] <= val){
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n), l(k);
    for(int i = 0; i < n; i++) cin >> h[i];
    for(int i = 0; i < k; i++) cin >> l[i];
 
    vector<long long> pref(n);
    vector<int> pmax(n);
    pref[0] = h[0];
    pmax[0] = h[0];
    for(int i = 1; i < n; i++){
        pmax[i] = max(pmax[i - 1], h[i]);
        pref[i] = h[i] + pref[i - 1];
    }
 
    for(int i = 0; i < k; i++){
        int idx = search(pmax, l[i], n);
        if(idx == -1){
            cout << "0 ";
        } else {
            cout << pref[idx] << " ";
        }
    }
    cout << "\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
}