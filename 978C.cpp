#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 2e5+123;
ll a[mx], sum[mx];

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, m; cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    sum[n + 1] = 1e18;

    while (m--) {
        ll x; cin >> x;

        ll l = 1, r = n; 
        
        while (l <= r) {
            ll mid = l + (r - l) / 2;

            if (sum[mid - 1] < x && x <= sum[mid]) {
                cout << mid << ' ' << x - sum[mid - 1] << '\n';
                break;
            } else if (sum[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
    }

    return 0;
}