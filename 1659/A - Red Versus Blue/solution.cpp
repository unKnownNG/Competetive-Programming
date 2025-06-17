#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve(){
    int m,r,b;
    cin >> m >> r >> b;
    int mod= r %(b +  1);
    int div =  r / (b +1);
    for(int i = 0; i<= b ; i++){
        for(int j = 0; j < div; j++){
            cout << "R";
        }
        if(mod > 0){
            cout << "R";
            mod--;
        }
        if(i != b ){
            cout << 'B';
        }
    }
    cout << endl;
 
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}