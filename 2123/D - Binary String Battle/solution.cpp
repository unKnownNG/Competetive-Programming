#include<iostream>
#include <climits>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
 
void solve(){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int c = 0;
    for(auto i: s)if(i == '1')c++;
    if(c <=k || n < 2* k){
        cout << "alice";
    }
    else cout << "bob";
    cout << endl;
}
 
int main(){
    int n;
    cin >> n;
    while(n--) solve();
}