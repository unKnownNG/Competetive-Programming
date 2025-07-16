#include <bits/stdc++.h>
using namespace std;
 
vector<int> find3max(vector<int> &arr){
    int n;
    vector<int> ans(3);
    vector<pair<int, int>> tem(n = arr.size());
 
    for(int i = 0; i < n ;i++){
        tem[i].first = arr[i];
        tem[i].second = i;
    }
 
    sort(tem.rbegin(), tem.rend());
    for(int i = 0; i < 3 ; i++){
        ans[i] = tem[i].second;
    }
    return ans;
}
 
 
void solve(){
    // LOGIC
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
 
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n ; i++) cin >> b[i];
    for(int i = 0 ; i < n ; i++) cin >> c[i];
 
    vector<int> first = find3max(a);
    vector<int> second = find3max(b);
    vector<int> third = find3max(c);
    int lar = 0;
 
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            for(int k = 0 ; k < 3 ; k++){
                int x = first[i], y =  second[j], z = third[k];
                if((x == y) || (x == z) || (y == z)) continue;
                lar = max(lar, a[x] + b[y] + c[z]); 
            }
        }
    }
    cout << lar << endl;
}
 
int main(){
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr);            // Untie cin from cout
 
    int n;
    cin >> n;
    while(n--) solve();
}