#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll k; cin >> k;
    vector<ll> v(k);
    for (ll &i : v) cin >> i;

    sort(v.begin(), v.end());

    // ll target = k - 2;
    ll i = 0, j = k - 1;

    while (i <= j) {
        if (v[i] * v[j] == k - 2) {
            break;
        } else if (v[i] * v[j] > k - 2) {
            --j;
        } else {
            ++i;
        }
    }

    cout << v[i] << ' ' << v[j] << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    for (ll tc = 1; tc <= t; tc++) solve();
    
    return 0;
}

// ll r = 0;
    // for (ll y = 0; y < k; y++) {
    //     if (y == i || y == j) continue;
    //     cout << v[y] << ' ';
    //     r++;
    //     if (r % v[j] == 0) cout << '\n';
    // }
    // if (r % v[j]) cout << '\n';