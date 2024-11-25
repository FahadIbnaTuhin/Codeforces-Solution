#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calc(ll n) {
    return (n * (n + 1)) / 2;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;

    while (t--) {
        ll w, b; cin >> w >> b;
        ll low = 0, high = max(w, b);
        ll ans = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (calc(mid) <= w + b) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << '\n';
    }   

    return 0;
}