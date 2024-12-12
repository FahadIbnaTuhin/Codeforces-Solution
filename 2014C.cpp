#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (int & i : v) {
        cin >> i;
        sum += i;
    }

    if (n <= 2) {
        cout << -1 << '\n';
        return;
    }

    sort(v.begin(), v.end());
    ll uP = v[n / 2];

    ll low = 0, high = 1e18;
    ll ans;

    while (low <= high) {
        ll mid = low + (high - low) / 2;

        double avg = (float)(sum + mid) / n;
        double halfOfAvg = avg / 2;
        // cout << "low: " << low << ", mid: " << mid << ", high: " << high << ", halfOfAVG: " << halfOfAvg << '\n';
        if (uP < halfOfAvg) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while (t--) solve();

    return 0;
}