#include <iostream>
using namespace std;
 
 
void solve(){
    int a, q;
    cin >> a >> q;
    int arr[a];
    int even = 0;
    int max = INT8_MAX;
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
        // int curr = 0;
        if(arr[i] %2 == 0) even += 1;
        if(arr[i]%q == 0) max = 0;
 
        max = min(max, q - (arr[i] % q));
    }
    if(q == 4){
        if(even >= 2) max = min(max,0);
        else if (even == 1) max = min(max , 1);
        else if (even == 0) max = min(max, 2);
    }
    cout<< max << endl;
}
 
 
int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}