#include <iostream>
using namespace std;
#include <vector>
#define ll long long 
 
 
void solve(){
    int n;
    cin >> n;
    int arr[n];
    int c = 0;
    for(int i = 0 ; i <n ; i++) cin >> arr[i];
 
    for(int i = n - 2; i >= 0 ; i--){
        int curr = arr[i];
        int prev = arr[i + 1];
        while(curr >= prev && curr != 0){
            curr /= 2;
            c++;
        }
        if(curr == prev) {
            cout << -1 << endl;
            return ;
        }
        arr[i] = curr;
    }
    cout << c << endl;
}
 
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}