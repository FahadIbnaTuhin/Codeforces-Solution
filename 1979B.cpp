#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;

    for (int bit = 0; bit <= 30; bit++) {
        if (((a >> bit) & 1) != ((b >> bit) & 1)) {
            cout << (1LL << bit) << '\n';
            return;
        }
    }
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