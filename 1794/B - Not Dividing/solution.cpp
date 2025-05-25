#include <iostream>
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++) cin >> arr[i];
    for(int i = 0; i < n ; i++){
        if(arr[i] == 1) arr[i]++;
    }
    for(int i = 0; i < n - 1; i++){
        // if(arr[i] == 1) arr[i]++;
        if(arr[i + 1] % arr[i] == 0) arr[i + 1]++;
    }
    for(int ch:arr) cout << ch << " ";
    cout << endl; 
 
}
 
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}