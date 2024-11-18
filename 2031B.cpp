#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 2e5+123;
int a[mx];

void solve() {
    // int mx = 6;
    // int a[mx] = {};
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    bool ok = true;
    for (int i = 1; i < n; i++) {
        if (a[i] == i) continue;
        else {
            if (abs(a[i] - a[i + 1]) == 1) {
                swap(a[i], a[i + 1]);
                if (a[i] != i) {
                    ok = false;
                    break;
                }
            } else {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    for (int tc = 1; tc <= t; tc++) solve();

    return 0;
}
// 5
// 4
// 1 2 3 4
// 4
// 1 2 4 3 
// 4
// 1 3 2 4 
// 4
// 2 1 3 4
// 4
// 2 1 4 3

// 19
// 4
// 1 3 4 2
// 4
// 1 4 2 3
// 4
// 1 4 3 2
// 4
// 2 3 1 4
// 4
// 2 3 4 1
// 4
// 2 4 1 3
// 4
// 2 4 3 1
// 4
// 3 1 2 4
// 4
// 3 1 4 2
// 4
// 3 2 1 4
// 4
// 3 2 4 1
// 4
// 3 4 1 2
// 4
// 3 4 2 1 
// 4
// 4 1 2 3
// 4
// 4 1 3 2
// 4
// 4 2 1 3
// 4
// 4 2 3 1
// 4
// 4 3 1 2
// 4
// 4 3 2 1