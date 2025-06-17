#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
void solve(){
    int n, count = 0, lb = 0, rb = 0, m = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0 ; i < n; i++){
        if(s[i] == '('){
            lb++;
        }
        else rb++;
        count = max(count, rb - lb);
    }
    cout << count << endl;
 
 
        
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}