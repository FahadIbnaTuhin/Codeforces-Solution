#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i + 1 < n; i++) {
        if (s[i] == s[i + 1]) {
            cout << s.substr(i, 2) << '\n';
            return;
        }
    }

    for (int i = 0; i + 2 < n; i++) {
        if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
            cout << s.substr(i, 3) << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while (t--) solve();

    return 0;
}