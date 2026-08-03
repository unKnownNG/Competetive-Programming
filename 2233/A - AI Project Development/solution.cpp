#include<bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int int_ceil(int x, int d){
	return (x + d - 1) / d;
}
 
void solve(){
	int n, x, y, t;
	cin >> n >> x >> y >> t;
	int ans = int_ceil(n, x + y);
	if (t * x <= n){
		ans = min(ans, int_ceil(n - t * x, x + 10 * y) + t);
	}
	cout << ans << '
';
}
 
signed main()
{
#ifdef FELIX
	auto _clock_start = chrono::high_resolution_clock::now();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
	int tests = 1;
	cin >> tests;
	while(tests--){
		solve();
	}
 
#ifdef FELIX
	cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(
		chrono::high_resolution_clock::now()
			- _clock_start).count() << "ms." << endl;
#endif
	return 0;
}