#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a, b;

bool check(ll mid) {
    ll ma = 1 * mid, mb = 3 * mid;
    if (ma + mb <= a + b && ma <= a) {
        return true;
    }
    return false;
}

void solve() {
    cin >> a >> b;
    if (a > b) swap(a, b);
    
    ll low = 0, high = 1e9+123;
    ll ans = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;

        if (check(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    for (ll tc = 1; tc <= t; tc++) {
        solve();
    }

    return 0;
}