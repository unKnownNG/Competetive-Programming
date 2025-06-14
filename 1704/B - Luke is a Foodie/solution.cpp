#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;
 
 
void solve(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    int c = 0;
    for(int i = 0; i<n; i++) cin >> arr[i];
    int l = arr[0] - x;
    int r = x + arr[0];
    for(int i = 1; i < n; i++){
        l = max(l, arr[i] - x);
        r = min(r, x + arr[i]);
        if(l > r){
            c++;
            l = arr[i] - x;
            r = arr[i] + x;
        }
        
 
    }
    cout << c << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}