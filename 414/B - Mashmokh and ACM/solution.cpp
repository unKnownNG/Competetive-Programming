#include <iostream>
 
using namespace std;
 
const int MOD = 1000000007;
 
// We use 2005 to safely cover the maximum constraints (n, k <= 2000)
// dp[i][j] = number of sequences of length i ending with number j
int dp[2005][2005]; 
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;
    
    // 1. BASE CASE: Fill the first row
    // Sequences of length 1 ending in 'j' have exactly 1 way.
    for (int j = 1; j <= n; j++) {
        dp[1][j] = 1;
    }
    
    // 2. DP TRANSITIONS: Build row by row
    // i represents our current length
    for (int i = 1; i < k; i++) {
        
        // j represents the number our sequence currently ends with
        for (int j = 1; j <= n; j++) {
            
            // If there are no sequences here, no need to process
            if (dp[i][j] == 0) continue;
            
            // m represents the next valid number we can pick (multiples of j)
            // Notice how m starts at j, and increments by j (j, 2j, 3j...)
            for (int m = j; m <= n; m += j) {
                
                // Add the ways from dp[i][j] to the next length dp[i+1][m]
                dp[i+1][m] = (dp[i+1][m] + dp[i][j]) % MOD;
            }
        }
    }
    
    // 3. FINAL ANSWER: Sum up the entire last row (length k)
    int total_sequences = 0;
    for (int j = 1; j <= n; j++) {
        total_sequences = (total_sequences + dp[k][j]) % MOD;
    }
    
    cout << total_sequences << "
";
    
    return 0;
}