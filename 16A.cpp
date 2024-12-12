#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n, m; cin >> n >> m;

    vector<string> v(n);
    for (string &s : v) cin >> s;

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (v[i] != string(m, v[i][0])) {
            ok = false;
            break;
        }
        if (i == 0) {
            if (v[i] == v[i + 1]) {
                ok = false;
                break;
            }
        } else if (i == n - 1) {
            if (v[i - 1] == v[i]) {
                ok = false;
                break;
            }
        } else if (v[i - 1] == v[i] || v[i] == v[i + 1]) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");

    return 0;
}