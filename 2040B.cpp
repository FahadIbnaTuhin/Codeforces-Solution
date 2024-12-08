#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    if (n <= 2) {
        cout << n << '\n';
        return;
    }
    
    ll x = 1;
    ll ans = 1;
    while (x < n) {
        x = (x + 1) * 2;
        ++ans;
    }
    cout << ans << '\n';
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