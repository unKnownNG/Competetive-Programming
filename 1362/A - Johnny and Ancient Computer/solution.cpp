#include <iostream>
#include <cmath>
using namespace std;
 
 
void solve(){
    long long a,b ;
    cin >> a >> b;
    long long rema, remb;
    rema = a;
    remb = b;
    while(rema % 2 ==0){
        rema /=2;
    }
    while(remb % 2 ==0){
        remb /=2;
    }
    if(rema != remb) {cout << -1 << endl; return;};
 
    int pa, pb;
    pa = log2(a);
    pb = log2(b);
    // cout << pa << " "
    // cout << pa << " " << pb << endl;
    cout << ceil(abs(pa - pb) / 3.0) << endl;
 
 
}
 
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}