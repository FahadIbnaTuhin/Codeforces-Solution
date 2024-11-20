#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll &i : a) cin >> i;

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) ++mp[a[i]];

    ll cnt = 0;
    for (auto u : mp) {
        cnt += (u.second / 2);
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    for (ll tc = 1; tc <= t; tc++) solve();
    
    return 0;
}