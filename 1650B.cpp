#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll f(ll x, ll a) {
    return (x / a) + (x % a);
}

void solve() {
    ll l, r, a; cin >> l >> r >> a;

    ll d;
    if ((r % a) + 1 == a) {
        d = r;
    } else {
        d = r - 1 - (r % a);
    }

    if (d < l) {
        d = r;
    }

    // cout << d << '\n';
    cout << f(d, a) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

// 1
// 10 23 2
// e - 12