#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    map<pair<int, int>, int> mp;

    while (n--) {
        int h, m; cin >> h >> m;
        mp[{h, m}]++;
    }

    int ans = 0;
    for (auto &u : mp) {
        ans = max(ans, u.second);
    }

    cout << ans << '\n';

    return 0;
}