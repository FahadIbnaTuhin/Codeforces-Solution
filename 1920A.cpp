#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int l = 1, r = 1e9; 
    vector<int> v;

    while (n--) {
        int p, q; cin >> p >> q;

        if (p == 1) l = max(l, q);
        else if (p == 2) r = min(r, q);
        else v.push_back(q);
    }

    int s = 0;
    for (int i : v) {
        if (l <= i && i <= r) {
            ++s;
        }
    }

    cout << max(r - l + 1 - s, 0) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}