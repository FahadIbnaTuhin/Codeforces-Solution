#include <iostream>
using namespace std;

int abs(int x) {
    return (x > 0 ? x : -x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)) {
        cout << -1 << '\n';
    } 
    else if (x1 == x2) {
        cout << x1 + abs(y1 - y2) << ' ' << y1 << ' ' << x2 + abs(y1 - y2) << ' ' << y2 << '\n';
    }
    else if (y1 == y2) {
        cout << x1 << ' ' << y1 + abs(x1 - x2) << ' ' << x2 << ' ' << y2 + abs(x1 - x2) << '\n';
    } else {
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << '\n';
    }
    
    return 0;
}