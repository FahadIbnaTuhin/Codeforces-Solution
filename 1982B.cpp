#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;

    while (t--) {
        ll x, y, k; cin >> x >> y >> k;

        while (k > 0 && x != 1) {
            ll z = min(k, y - x % y);
            x += z;
            k -= z;

            while (x % y == 0) {
                x /= y;
            }
        }

        if (k > 0) {
            k %= y - 1;
            x += k;
        }

        cout << x << '\n';
    }

    return 0;
}