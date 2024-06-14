#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        ll prev; cin >> prev;
        ll maxi;
        ll mini = INT_MAX;
        for (int i = 1; i < n; i++) {
            ll a; cin >> a;
            maxi = max(prev, a);
            mini = min(mini, maxi);
            prev = a;
        }

        cout << mini - 1 << '\n';
    }

    return 0;
}