#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n, x = 0; 
    cin >> n;
    bool flag = true; // true for S, false for K

    for (int i = 1; abs(x) <= n; i++) {
        int val = 2 * i - 1;

        if (flag) {
            x -= val;
            flag = false;
        } else {
            x += val;
            flag = true;
        }
    }

    cout << (flag ? "Kosuke\n" : "Sakurako\n");
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

// 1
// 2
// Sakurako