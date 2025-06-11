#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
 
void solve(){
    int n,p;
    cin >> n >> p;
    int a[n], b[n];
    long long cost = 0;
    long long count  = 0;
    vector<pair<int, int>> v;
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++) cin >> b[i];
    for(int i = 0; i< n;i++) v.push_back({b[i], a[i]});
    v.push_back({p,n});
    sort(v.begin(), v.end());
    count = 1;
    cost = p;
    // cout << ;
    // for(auto i:v) cout << i.first << " " << i.second << endl;
    while(count < n){
        for(auto i:v){
            if(i.second + count <= n){
                count += i.second;
                cost += (i.second * i.first);
            }
            else{
                long long diff = n - count;
                count += diff;
                cost +=(diff * i.first);
            }
        }
 
 
    }
    cout << cost << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}