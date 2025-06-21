#include <iostream>
using namespace std;
 
void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    long long ans = 0, c = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] <= q) {
            c++;
        } else {
            if (c >= k) {
                long long diff = c - k + 1;
                ans += (diff * (diff + 1)) / 2;
            }
            c = 0;
        }
    }
 
    if (c >= k) {
        long long diff = c - k + 1;
        ans += (diff * (diff + 1)) / 2;
    }
 
    cout << ans << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}