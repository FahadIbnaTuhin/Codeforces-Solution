#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int ones = 0, zeros = 0;
        for (int i = 0, limit = (2 * n); i < limit; i++) {
            int a; cin >> a;
            if (a == 1) ++ones;
            else ++zeros;
        }

        cout << ones % 2 << ' ';
        // cout << min(ones, zeros) << '\n'; // 1st style
        
        int max; // 2nd Style
        if (ones > n) max = zeros;
        else max = ones;
        cout << max << '\n';
    }

    return 0;
}