#include<iostream>
using namespace std  ;
 
void solve(){
    long long a,b,c;
    cin >> a >> b >> c;
    long long min = b*(b+1)/2, max = (a*(a + 1)/2) - (a-b)*(a-b +1)/2;
    
    // cout << min << " " << max << endl;
    if(min <= c && c <= max) cout << "YES" << endl;
    else cout << "NO" << endl;
 
}
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    solve();
}