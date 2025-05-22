#include <iostream>
using namespace std;
 
void solve(){
    long long a,b, sum;
    int n;
    cin >> a >> b >> n;
    sum = b;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
 
    for(int i =0; i <n ; i++){
        if(arr[i] < a) sum += arr[i];
        else sum+= a - 1;
    }
    cout << sum << endl;
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}