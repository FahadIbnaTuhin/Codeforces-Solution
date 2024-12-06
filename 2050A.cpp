#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, m; cin >> n >> m;
    vector<string> v(n);
    for (string &i : v) cin >> i;

    ll cnt = 0;
    ll sum = 0;
    for (string s : v) {
        if (sum + s.size() <= m) {
            cnt++;
            sum += s.size();
        } else break;
    }

    cout << cnt << '\n';
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