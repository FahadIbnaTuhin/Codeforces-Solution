#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;

    while(t--) {
        ll n, q; cin >> n >> q;
        ll hash[n + 30] = {};

        ll sum = 0;
        for(ll i = 1; i <= n; i++) {
            ll a; cin >> a;
            sum += a;
            hash[i] = sum;
        }

        while(q--) {
            ll l, r, k; cin >> l >> r >> k;

            ll sub_sum = hash[n] - (hash[r] - hash[l - 1]);

            ll add_sum = sub_sum + (r - l + 1) * k;

            if (add_sum % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}
// Time complexity : O(n + q)