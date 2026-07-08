#include<bits/stdc++.h>
using namespace std;
 
 
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
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
 
 
void solve() {
    ll n, k;
    cin >> n >> k;
 
    vll a, b, both;
 
    ll time, alice_likes, bob_likes;
    while (n--) {
        cin >> time >> alice_likes >> bob_likes;
 
        if (alice_likes == 1 && bob_likes == 1) {
            both.push_back(time);
        } else if (alice_likes == 1) {
            a.push_back(time);
        } else if (bob_likes == 1) {
            b.push_back(time);
        }
    }
 
    sort(all(a));
    sort(all(b));
    sort(all(both));
 
 
    if (both.size() + min(a.size(), b.size()) < k) {
        cout << "-1
";
        return;
    }
 
    int aliceIn = 0, bobIn = 0, bothIn = 0;
    ll ans = 0;
 
 
    for (int i = 0; i < k; i++) {
        ll valBoth = (bothIn < both.size()) ? both[bothIn] : 1e15;
        ll valSplit = (aliceIn < a.size() && bobIn < b.size()) ? (a[aliceIn] + b[bobIn]) : 1e15;
 
 
        if (valBoth <= valSplit) {
            ans += valBoth;
            bothIn++;
        } else {
            ans += valSplit;
            aliceIn++;
            bobIn++;
        }
    }
 
    cout << ans << "
";
}
 
int main() {
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
    fastio();
 
    solve();
 
}