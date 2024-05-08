#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x; cin >> x;
    vector<int> ans;
    int sum = 0, last = 9;

    while(sum < x && last > 0) {
        ans.push_back(min(x - sum, last));
        sum += last;
        --last;
    }

    if (sum < x) {
        cout << -1 << '\n';
        return;
    }

    reverse(ans.begin(), ans.end());
    for(auto u : ans) {
        cout << u;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}