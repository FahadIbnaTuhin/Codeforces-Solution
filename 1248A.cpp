#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int a_even = 0, a_odd = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a % 2) a_odd++;
            else a_even++;
        }

        int m; cin >> m;
        int b_even = 0, b_odd = 0;
        for (int i = 0; i < m; i++) {
            int b; cin >> b;
            if (b % 2) b_odd++;
            else b_even++;
        }

        cout << (1LL * a_even * b_even) + (1LL * a_odd * b_odd) << '\n';
    }

    return 0;
}

// You only need to check if the sum i+j is even. A sum is even if both
// numbers are either both even or both odd

// 3
// 1 3 2
// 2
// 0 3
// for the first test case, a = [1, 3, 2], b [0, 3] 
// in a, a_even = 1, a_odd = 2 and in b, b_even = 1, b_odd = 1
// a_even * b_even = 1 * 1 = 1
// a_odd * b_odd = 2 * 1 = 2
// so sum = 1 + 2 = 3