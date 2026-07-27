#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
long long calculate1DDistance(const vector<int>& arr) {
    long long total_dist = 0;
    long long n = arr.size();
    
    for (long long i = 0; i < n; ++i) {
 
        long long added_times = i;
        long long subtracted_times = (n - 1 - i);
        
        total_dist += 1LL * arr[i] * added_times - 1LL * arr[i] * subtracted_times;
    }
    return total_dist;
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    const int MAX_COLOR = 100005;
 
    vector<vector<int>> rows(MAX_COLOR);
    vector<vector<int>> cols(MAX_COLOR);
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int color;
            cin >> color;
            rows[color].push_back(i);
            cols[color].push_back(j);
        }
    }
 
    long long total_manhattan = 0;
 
    for (int c = 1; c < MAX_COLOR; ++c) {
        if (rows[c].empty()) continue;
 
        // Rows are inherently sorted because we iterate i from 0 to n-1
        // Columns need to be explicitly sorted
        sort(cols[c].begin(), cols[c].end());
 
        // Calculate independent 1D distances and add to the total
        total_manhattan += calculate1DDistance(rows[c]);
        total_manhattan += calculate1DDistance(cols[c]);
    }
 
    cout << total_manhattan << "
";
 
    return 0;
}