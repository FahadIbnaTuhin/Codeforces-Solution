#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for (ll &i : v) cin >> i;

    ll even_sums = 0, odd_sums = 0;
    for (ll i = 0; i < n; i++) {
        if (i & 1) odd_sums += v[i];
        else even_sums += v[i];
    }

    ll odd_places = n / 2;
    ll even_places = (n + 1) / 2;

    if (even_sums % even_places == 0 && odd_sums % odd_places == 0 && even_sums / even_places == odd_sums / odd_places) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while (t--) solve();

    return 0;
}