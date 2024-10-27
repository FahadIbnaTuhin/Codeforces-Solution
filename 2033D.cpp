#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<ll> arr(n + 1), prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    set<ll> seen;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        if (seen.count(prefixSum[i])) {
            ans++;
            seen.clear();
        }
        seen.insert(prefixSum[i]);
    }
    cout << ans << '\n';
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