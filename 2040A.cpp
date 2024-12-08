#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    int ind = -1;
    for (int i = 0; i < n; i++) {
        bool win = true;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (abs(v[i] - v[j]) % k == 0) {
                win = false;
                break;
            }
        }
        if (win) {
            ind = i;
            break;
        }
    }

    if (ind == -1) cout << "NO\n";
    else cout << "YES\n" << ind + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    for (ll tc = 1; tc <= t; tc++) {
        // cout << "Case " << tc << ": ";
        solve();
    }

    return 0;
}