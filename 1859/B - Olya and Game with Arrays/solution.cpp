#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    long long small = 10e9;
    long long total = 0;
    vector<int> secondMin;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        int arr[c];
        for (int j = 0; j < c; j++) {
            cin >> arr[j];
        }
        // v[i] = arr;  // direct assignment, no push_back
        sort(arr, arr + c);
        secondMin.push_back(arr[1]);
        total += arr[1];
        small = min(small, (long long)arr[0]);
 
 
    }
    sort(secondMin.begin(), secondMin.end());
    total -= secondMin[0];
    total += small;
    cout << total << endl;
    // for(auto i:v){
    //     for(auto j:i){
    //         cout << j << ' ';
    //     }
    //     cout << endl;
    
 
 
 
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}