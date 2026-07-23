#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x1, y1, x2, y2;
    if (cin >> x1 >> y1 >> x2 >> y2) {
        // Case 1: The two points form a vertical side
        if (x1 == x2) {
            int distance = abs(y1 - y2);
            cout << x1 + distance << " " << y1 << " " << x2 + distance << " " << y2 << "
";
        } 
        // Case 2: The two points form a horizontal side
        else if (y1 == y2) {
            int distance = abs(x1 - x2);
            cout << x1 << " " << y1 + distance << " " << x2 << " " << y2 + distance << "
";
        } 
        // Case 3: The two points form a diagonal
        else if (abs(x1 - x2) == abs(y1 - y2)) {
            // The other two corners just swap the x and y pairings
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << "
";
        } 
        // Case 4: Impossible to form an axis-parallel square
        else {
            cout << -1 << "
";
        }
    }
    return 0;
}