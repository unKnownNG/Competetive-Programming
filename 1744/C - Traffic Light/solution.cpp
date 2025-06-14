#include <iostream>
#include <vector>
using namespace std;
 
 
void solve(){
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    // vector<int> v;
    s += s;
    int i = 2 * n - 1;
    int g = -1;
    int ans = -1;
    while(i >= 0){
        if(s[i] == 'g'){
            g = i;
        }
        if(g == -1) {
            i -= 1;
            continue;
        }
        if(c == s[i] && (g != -1)){
            ans = max(ans,g - i);
            // cout << ans;
            // v.push_back(ans);
        }
        i -= 1;
 
    }
 
    cout << ans  << endl;
}
 
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}