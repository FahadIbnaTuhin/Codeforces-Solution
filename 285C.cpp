#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<ll> v(n);
    for (auto &u : v) cin >> u;

    sort(v.begin(), v.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(i + 1 - v[i]);
    }

    cout << ans << '\n';

    return 0;
}