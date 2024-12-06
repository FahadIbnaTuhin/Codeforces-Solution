#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    vector<ll> prefixSum = {1};
    ll val = 1;
    for (ll i = 1; val <= 10000; i += 2) {
        val += (i * 4) + 4;
        prefixSum.push_back(val);
    }

    ll n; cin >> n;
    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        sum += a;
        bool isExist = binary_search(prefixSum.begin(), prefixSum.end(), sum);
        if (isExist) ++ans;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();

    return 0;
}