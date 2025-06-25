#include<iostream>
#include <vector>
using namespace std;
 
void solve(){
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<int> pref(n + 1, 0);
    int c = 0;
    for(int i = 0; i< n ; i++){
        if(s[i] == 'W'){
            c++;
        }
        pref[i+ 1] = c;
    }
 
    int m = k;
    for(int i = 0; i<= n - k ; i++){
        int temp = pref[i + k ] - pref[i];
        // cout << pref[i +k - 1] << " " << pref[i] << endl;
        m = min(temp, m);
    }
 
 
    cout << m  << endl;
 
 
    
}
 
int main(){
    int n;
    cin >> n;
    while(n--) solve();
}
 