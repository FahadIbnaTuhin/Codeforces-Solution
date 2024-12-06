#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    for (int i = 1, sz = s.size(); i < sz; i++) {
        if (i == 0) continue;
        if (s[i - 1] + 1 < s[i]) {
            swap(s[i - 1], s[i]);
            s[i - 1] = s[i - 1] - 1;
            i -= 2;
        }
    }
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    for (ll tc = 1; tc <= t; tc++) {
        // cout << "Case " << tc << ": ";
        solve();
    }

    return 0;
}