#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> v;
    for(int i = 0; i< n; i++){
        int a ;
        cin >> a;
        a %= k;
        if (!a) v.push_back({k, i + 1});
        else v.push_back({a, i + 1});   
    }
 
    sort(v.begin(), v.end(), [&](pair<int, int> x, pair<int, int> y) {
        if (x.first != y.first)
            return x.first > y.first;       // Descending on first
        else
            return x.second < y.second;     // Ascending on second
    });
 
    for(auto i:v) cout << i.second << " ";
    cout << endl;
 
 
 
}
 
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}