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
 
vll ve;
 
 
bool check(ll x){
    ll c =0;
    vll idx;
    for(int i = 0 ; i < ve.size() - 1; i++){
        if(abs(ve[i] - ve[i+ 1]) > x){
            c++;
            idx.pb(i);
        }
    }
 
 
    if(c == 0) return 1;
    else if(c >= 3) return 0;
    else if(c == 2){
        ll p1 = idx[0], p2 = idx[1];
 
        p1++;
 
 
        for(int i = p1; i < p2; i++){
            if(abs(ve[i] - ve[i + 1]) > x/2 ) return false;
        }
 
        ll nl = abs(ve[p1-1] - 2 *ve[p2]);
        ll nr = abs(ve[p2 + 1] - 2 * ve[p1]);
        if(nl > x || nr > x) return false;
        return true;
    }
    else if(c == 1){
        int p = idx[0];
        ll n = ve.size();
        
        // Option A: Left boundary destroys the gap (l = p + 1)
        int l = p + 1;
        for(int r = l; r < ve.size(); r++){
            // If the internal gap we just added is too big, stop expanding r
            if(r > l && abs(ve[r-1] - ve[r]) * 2 > x) break;
            
            ll left_bound = abs(ve[l-1] - 2 * ve[r]);
            // (r == n - 1) means we hit the edge of the array, so there is no right boundary to check
            ll right_bound = (r < n - 1) ? abs(ve[r+1] - 2 * ve[l]) : 0; 
            
            if(left_bound <= x && right_bound <= x) return true;
        }
        
        // Option B: Right boundary destroys the gap (r = p)
        int r = p;
        for(int l = r; l >= 0; l--){
            // If the internal gap we just added is too big, stop expanding l
            if(l < r && abs(ve[l] - ve[l+1]) * 2 > x) break;
            
            // (l == 0) means no left boundary to check
            ll left_bound = (l > 0) ? abs(ve[l-1] - 2 * ve[r]) : 0;
            ll right_bound = abs(ve[r+1] - 2 * ve[l]);
            
            if(left_bound <= x && right_bound <= x) return true;
        }
        
        return false;
    }
 
 
}
 
 
void solve(){
    // Logic
 
    ll n;
    cin>> n;
 
    vll arr(n);
 
    for(auto &i : arr) cin >> i;
 
    ve = arr;
    ll ans;
 
    ll l = 0,  r= 2e6;
 
    ans = r ;
    while(l< r){
        ll m = l + (r - l) / 2;
 
        if(check(m)){
            r = m ;
            ans = m;
        }
        else l = m + 1;
    }
 
 
    cout << l << endl;
 
 
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