#include <iostream>
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    cout << 2 * n - 1 << endl;
    cout << 1 << " "<< 1 << " "<< n << endl;
    for(int i = 2; i <=n; i++){
        cout << i << " " << 1 << " "<<  i - 1 << endl;
        cout << i << " " <<i  << " "<< n << endl; 
 
 
    }
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}