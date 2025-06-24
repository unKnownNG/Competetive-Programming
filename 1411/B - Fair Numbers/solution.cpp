#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
#define ll long long
 
bool good(ll n){
    ll c, temp;
    c = n;
    while(c != 0){
        temp = c %10;
        if (temp != 0 && n % temp != 0) return false;
        // n /= 10;
        c = c /10;
    }
    return true;
}
 
void solve(){
    ll n; 
    cin >> n;
    while(!good(n)) n++;
    cout << n <<  endl;
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}