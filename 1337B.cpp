#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int x, n, m; cin >> x >> n >> m;

        while(x > 0 && n > 0 && x / 2 + 10 < x) {
            x = (x / 2) + 10;
            --n;
        }

        if (x <= m * 10) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}