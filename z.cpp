#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    while (n--) {
        int n; cin >> n;
        vector<vector<int>> v(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> v[i][j];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int mn = 0;
            for (int j = 0; j < n - i; j++) {
                mn = min(mn, v[i + j][j]);
            }
            ans += max(0, -mn);
        }

        for (int j = 1; j < n; j++) {
            int mn = 0;
            for (int i = 0; i < n - j; i++) {
                mn = min(mn, v[i][j + i]);
            }
            ans += max(0, -mn);
        }

        cout << ans << '\n';
    }

    return 0;
}