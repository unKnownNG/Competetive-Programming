#include<bits/stdc++.h>
using namespace std;
 
 
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 100000000 
#define MOD1 998244353
#define INF 1e18
#define nline "
"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
template<typename T> using v = vector<T>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<ll>>;
 
template<typename T1, typename T2> using pr = pair<T1, T2>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
ll a, b, x, y;
 
 
vector<vector<vector<vector<ll>>>> dp;
 
ll rec(ll i, ll j, ll cur, ll k){
    if(i == a && j ==b) {
        if(cur == 1 && k <= y)return 1;
        if(cur == 0 && k <= x)return 1;
    }
    if(i > a || j > b) return 0;
    if(cur == 0 && k > x) return 0;
    if(cur == 1 && k > y) return 0;
 
 
    if(dp[i][j][cur][k] != -1) return dp[i][j][cur][k];
 
    ll now = 0;
    if(cur == 0) {
        now = (now + rec(i + 1, j, 0, k + 1)) % MOD;
        now = (now + rec(i, j + 1, 1, 1)) % MOD;
    }
    else {
        now = (now + rec(i + 1, j, 0, 1)) % MOD;
        now = (now + rec(i, j + 1, 1, k + 1)) % MOD;
    }
 
 
    return dp[i][j][cur][k] = (now % MOD);
}
 
 
 
void solve(){
    // Logic
 
    cin >> a >> b>> x >> y;
 
 
    dp.assign(
        a + 1,
        vector<vector<vector<ll>>>(
            b + 1,
            vector<vector<ll>>(
                2,
                vector<ll>(max(x, y) + 1, -1)
            )
        )
    );
 
 
    ll ans = 0;
    ans = (ans + rec(1, 0, 0, 1)) % MOD;
    ans = (ans + rec(0, 1, 1, 1)) % MOD;
 
    cout << ans << endl;
 
 
    // dp.clear();
    
    
}
 
 
int main() {
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
    fastio();
 
 
 solve();
 
}