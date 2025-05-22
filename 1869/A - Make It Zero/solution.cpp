#include <iostream>
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
 
    if(n&1){
        cout << 4 << endl;
        cout << 1 << " " << n -1 << endl;
        cout << 1 << " " << n -1 << endl;
        cout << n-1 << " " << n  << endl;
        cout << n-1 << " " << n << endl;
 
    } else{
        cout << 2 << endl;
        cout << 1 << ' ' << n << endl;
        cout << 1 << ' ' << n << endl;
 
    }
 
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}
 
 
// #include <bits/stdc++.h>
// #define all(s) s.begin(), s.end()
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
 
// const int _N = 1e5 + 5;
 
// int T;
 
// void solve() {
// 	int n; cin >> n;
// 	vector<int> a(n);
// 	for (int i = 0; i < n; i++) cin >> a[i];
// 	if (n & 1) {
// 		cout << "4" << '\n';
// 		cout << "1 " << n - 1 << '\n';
// 		cout << "1 " << n - 1 << '\n';
// 		cout << n - 1 << ' ' << n << '\n';
// 		cout << n - 1 << ' ' << n << '\n';
// 	} else {
// 		cout << "2" << '\n';
// 		cout << "1 " << n << '\n';
// 		cout << "1 " << n << '\n';
// 	}
// 	return;
// }
 
// int main() {
// 	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// 	cin >> T;
// 	while (T--) {
// 		solve();
// 	}
// }