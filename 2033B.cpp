#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int mn = 0;
            for (int j = 0; j < n - i; j++) {
                mn = min(mn, a[i + j][j]);
            }
            ans += max(0, -mn);
        }
        
        for (int j = 1; j < n; j++) {
            int mn = 0;
            for (int i = 0; i < n - j; i++) {
                mn = min(mn, a[i][j + i]);
            }
            ans += max(0, -mn);
        }
        cout << ans << '\n';
    }

    return 0;
}
// 4
// 1
// 1
// 2
// -1 2
// 3 0
// 3
// 1 2 3
// -2 1 -1
// 0 0 -1
// 5
// 1 1 -1 -1 3
// -3 1 4 4 -4
// -1 -1 3 0 -5
// 4 5 3 -3 -1
// 3 1 -3 -1 5
