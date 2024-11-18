#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    char c; 
    string s; cin >> n >> c >> s;
    if (c == 'g') {cout << 0 << '\n'; return;}
    s = s + s;

    int ans = 0;
    for (int i = 0, limit = 2 * n; i < limit; i++) {
        if (s[i] == c) {
            int j = i + 1;
            for (; j < limit && s[j] != 'g'; j++);
            if (j != limit) ans = max(ans, j - i);
            i = j;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();

    return 0;
}