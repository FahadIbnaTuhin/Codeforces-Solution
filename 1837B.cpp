#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 1, mcnt = 1;
        for (int i = 1, sz = s.size(); i < sz; i++) {
            if (s[i] != s[i - 1]) cnt = 1;
            else cnt++;
            mcnt = max(mcnt, cnt);
        }

        cout << mcnt + 1 << '\n';
    }

    return 0;
}