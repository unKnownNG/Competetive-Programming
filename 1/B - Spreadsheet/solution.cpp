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
 
 
string rconv(ll s){
    string ans = "";
 
    while(s){
        s--;
        ll div = s%26;
 
        // if(div >= 26) ans += "Z";
        // else{
            char a = 'A' + div;
            ans += a;
        // }
 
 
        s/= 26;
    }
 
    reverse(all(ans));
 
    return ans;
 
}
 
 
string conv(string s){
    ll now = 0;
 
    for(char c : s){
        now = now * 26 + (c - 'A' + 1);
    }
 
    return to_string(now);
}
 
 
void solve(){
    // Logic
    string s;
    cin >> s;
 
 
    bool an = true;
    for(int i = 0; i < s.size() - 1; i++){
        if(('0'<= s[i] && '9' >=s[i]) && ('A'<= s[i + 1] && 'Z' >= s[i + 1] )){
            an = false;
            break;
        }
    }
 
 
    if(an){
        int idx;
        string x = "", no = "";
            for(int i = 0; i < s.size() - 1; i++){
            if(('0'<= s[i + 1] && '9' >=s[i + 1]) && ('A'<= s[i ] && 'Z' >= s[i] )){
                idx = i;
                an = false;
                x += s[i];
                break;
            }
            x += s[i];
        }
 
        for(int i = idx + 1; i < s.size(); i++  ) no += s[i];
 
 
        cout << "R" << no << "C" << conv(x)  << endl;
 
    }
    else{
        string r = "", c = "";
        int idx = 0;
 
        for(int i = 1; i < s.size(); i++){
            if(s[i] == 'C') {
                idx = i;
                break;
            }
            r+= s[i];
        }
 
        
        for(int i = idx + 1; i < s.size(); i++  ) c += s[i];
 
 
        cout <<  rconv(stoll(c)) << r << endl;
 
 
    }
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