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
 
vll ans, path, dd;
vvll adj;
ll tar;
 
 
 
bool dfs(ll node, ll head, ll d){
    ans.pb(node);
    dd[node] = d;
 
    // if(node == tar) return 1;
 
    for(auto i : adj[node]){
        if(i != head && i != 1)
        dfs(i, node, d + 1);
    }
    ans.pop_back();
    return false;
}
 
 
ll depth(ll node, ll head){
    ll d = 0;
 
    for(auto i : adj[node]){
        if(i != head && !path[i]){
            d = max(d, 1 + depth(i , node));
        }
 
    }
 
    return d;
}
 
void solve(){
    // Logic
    ll n, m;
    cin >> n >> m;
    ans.clear();
    adj.clear();
    path.clear();
    
    path.assign(n + 1, 0);
    dd.assign(n + 1, - 1);
    adj.resize(n + 1);
 
    tar = n;
 
    for(int i = 0; i < n  - 1; i++){
        ll u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
 
    }
 
    vll k(m);
    for(auto &i : k)cin >> i;
 
    
    dfs(n, -1, 0);
    
    for(auto i : ans) path[i] = 1;
 
 
 
    ll mans = 0;
 
    for(auto i : adj[1]){
        if(dd[i] != -1) mans = max(mans, 1 + dd[i]);
    }
    
 
    for(auto i : k){
        if(dd[i] != -1) mans = max(mans, 1 + dd[i]);
    }
 
    cout << mans<< endl;
 
 
    debug(ans)
 
 
    
 
}
 
 
int main() {
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
    fastio();
 
    int t;
    cin >> t;
 
    while(t--) solve();
 
}