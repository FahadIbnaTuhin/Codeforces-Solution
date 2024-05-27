#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n, m; cin >> n >> m;

        cout << (n >= m && (n - m) % 2 == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}