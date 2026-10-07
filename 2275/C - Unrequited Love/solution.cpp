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
 
 
 
void solve(){
    // Logic
    ll n;
    cin >> n;
    vll v(n);
 
    for(auto & i : v) cin >> i;
 
 
    vll an, bn;
 
    for(int i = 0; i < n; i++){
        if(i & 1) bn.pb(v[i]);
        else an.pb(v[i]);
    }
 
    vll a,b;
    map<ll, ll> x, y;
 
    for(int i = 0;i < an.size() - 2; i++){
        a.pb(an[i] + an[ i + 1] - an[i + 2]);
        x[an[i] + an[ i + 1] - an[i + 2]]++;
    }
 
    for(int i = 0;i < bn.size() - 2; i++){
        b.pb(bn[i] + bn[ i + 1] - bn[i + 2]);
        y[bn[i] + bn[ i + 1] - bn[i + 2]]++;
    }
 
 
    ll res = 0;
 
    for(auto i : x){
        if(y[i.first] >= 1){
            res += i.second * y[i.first];
        }
        // else{
        //     if(i.second >=2) res+= i.second/2;
        // }
    }
 
    map<ll, ll> va, vb;
 
    for(int i = 3; i < a.size(); i++){
        va[a[i - 3]]++;
        res += va[a[i]];
    }
 
for(int i = 3; i < b.size(); i++){
        vb[b[i - 3]]++;
        res += vb[b[i]];
    }
 
    debug(a)
    debug(b)
 
 
    cout << res << endl;
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