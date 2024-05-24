#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> a(2), b(2), f(2);
    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];
    cin >> f[0] >> f[1];

    int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);

    if ((a[0] == b[0] && a[0] == f[0] && ((min(a[1], b[1]) < f[1]) && (max(a[1], b[1]) > f[1]))) 
        || (a[1] == b[1] && a[1] == f[1] && ((min(a[0], b[0]) < f[0]) && (max(a[0], b[0]) > f[0])))) {
        ans += 2;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}