#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
void solve(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    int ans = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int i = -1, j = n-1;
    int c = 1;
    sort(arr, arr + n);
    while(i < j){
        int a = arr[j];
        int f = 0;
        if(a * c <= x && i < j){
            c++;
            i++;
        }
        else{
            j--;
            ans++;
            c = 1;
        }
        
    }
    cout << ans << endl;
}
 
 
int main(){
    // int t;
    // cin >> t;
    // while (1--)
    // {
    // }    
    solve();
}