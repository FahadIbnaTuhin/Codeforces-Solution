#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, r, a; cin >> l >> r >> a;

    while (a) {
        if (l <= r) {
            ++l;
        } else {
            ++r;
        }
        --a;
    }

    int ans = min(l, r) * 2;

    cout << ans << '\n';

    return 0;
}