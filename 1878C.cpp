#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n, k, x; cin >> n >> k >> x;

    if (2 * x >= k * (k + 1) && 2 * x <= (n * (n + 1)) - ((n - k) * (n - k + 1))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

// 1 2 3 4 5
// (n * (n + 1)) / 2 summation of 1 to n
    // (if x = 3, then first 3 ans = 6)
// summation of first last n digits: (n * (n + 1) - (n - k) * (n - k + 1)) / 2 
    // if (n = 3, then last 3 ans = 12)