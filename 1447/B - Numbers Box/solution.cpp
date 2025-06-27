#include<iostream>
#include <climits>
#include <vector>
using namespace std;
 
void solve(){
    int n, m;
    cin >> n >> m;
    long long c = 0;
    int nig = 0;
    long long small = INT_MAX;
    for(int i = 0; i < n * m; i++){
        long long d;
        cin >> d;
        if(d <=0)nig++;
        c += abs(d);
        small = min(small, abs(d));
    }
    if(nig&1) c -= (2 * small);
    cout << c << endl;
}
 
int main(){
    int n;
    cin >> n;
    while(n--) solve();
}
 