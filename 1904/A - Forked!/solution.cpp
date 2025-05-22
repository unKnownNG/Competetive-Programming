#include <iostream>
#include <set>
using namespace std;
 
int dx[4] = {1,-1, -1, 1}, dy[4] = {1,1,-1,-1};
 
int main(){
    long t;
    cin >> t;
    while(t--){
        int x,y,x1,x2,y1,y2;
        int count = 0;
        cin >> x >> y;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        set<pair<int, int>> st1, st2;
        for(int i = 0; i <= 3;i++){
            st1.insert({x1 + dx[i] * x, y1 + dy[i]  * y});
            st1.insert({x1 + dx[i] * y, y1 + dy[i]  * x});
            st2.insert({x2 + dx[i] * y, y2 + dy[i]  * x});
            st2.insert({x2 + dx[i] * x, y2 + dy[i]  * y});
        }
        for(auto &a:st1){
            if(st2.count(a))
            count++;
        }
        cout << count << endl;
    }
}