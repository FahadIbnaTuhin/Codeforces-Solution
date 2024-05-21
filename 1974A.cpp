#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int x, y; cin >> x >> y;
    if (y == 0) {
        cout << ceil(x / 15.0) << '\n';
        return;
    }

    int ans = ceil(y / 2.0);
    int gap = 15 * ans - 4 * y;

    if (gap >= x) {
        cout << ans << '\n';
        return;
    } 

    gap = x - gap;
    gap = ceil(gap / 15.0);

    cout << ans + gap << '\n';
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