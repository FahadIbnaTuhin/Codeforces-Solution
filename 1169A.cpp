#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a, x, b, y; 
    cin >> n >> a >> x >> b >> y;

    if (a == b) {
        cout << "YES\n";
        return 0;
    }

    while (true) {   
        ++a, --b;
        if (a > n) a = 1;
        if (b <= 0) b = n;

        if (a == b) {
            cout << "YES\n";
            return 0;
        }

        if (a == x || b == y) break;
    }

    cout << "NO\n";

    return 0;
}