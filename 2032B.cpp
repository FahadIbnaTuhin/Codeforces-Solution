#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        if (n == 1) {
            cout << "1\n1\n";
            continue;
        }

        if (k == 1 || k == n) {
            cout << -1 << '\n';
            continue;
        }

        cout << min(k - 1, n - k) * 2 + 1 << '\n';
        for (int i = 1; i <= min(k - 1, n - k); i++) cout << i << ' ';
        cout << k << ' ';
        for (int i = 1; i <= min(k - 1, n - k); i++) cout << k + i << ' '; 
        cout << '\n';
    }

    return 0;
}

// Median of any arr is the middle element