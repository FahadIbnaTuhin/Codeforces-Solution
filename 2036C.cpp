#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        int n = s.size();

        int cnt = 0;
        for (int i = 0; i < n - 3; i++) {
            if (s.substr(i, 4) == "1100") {
                ++cnt;
            }
        }

        int q; cin >> q;
        while (q--) {
            int i, v; cin >> i >> v;
            --i; // am calculating in 0-indexed

            for (int j = i - 3; j <= i; j++) {
                if (j < 0 || j + 3 > n) continue;
                if (s.substr(j, 4) == "1100") {
                    --cnt;
                }
            }

            s[i] = v + '0';
            for (int j = i - 3; j <= i; j++) {
                if (j < 0 || j + 3 > n) continue;
                if (s.substr(j, 4) == "1100") {
                    ++cnt;
                }
            }

            cout << (cnt > 0 ? "YES\n" : "NO\n");
        }
    }

    return 0;
}