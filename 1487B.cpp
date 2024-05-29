#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n, k; cin >> n >> k;

    ll a[k], b[k];
    ll c1 = n, c2 = 1;
    for (int i = 0; i < k; i++) {
        a[i] = c1;
        --c1;
        if (c1 <= 0) c1 = n;

        if (c2 > n) c2 = 1;
        if (a[i] == c2) {
            if (c2 + 1 > n) c2 = 1;
            else c2++;
            b[i] = c2;
            ++c2;
            continue;
        }
        b[i] = c2;
        ++c2;
    }

    cout << b[k - 1] << '\n';
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