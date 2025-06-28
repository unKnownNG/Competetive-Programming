#include<iostream>
#include <climits>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
long long ceil_div(long long a, long long b){
    return (a + b - 1) / b;
}
 
void solve(){
    long long x,y,k;
    cin >> x >> y >>k;
    long long first = (k * y) + k - 1;
    long long second = x - 1;
    long long result  = ceil_div(first, second);
    cout << result + k<< endl;
 
}
 
int main(){
    int n;
    cin >> n;
    while(n--) solve();
}
 