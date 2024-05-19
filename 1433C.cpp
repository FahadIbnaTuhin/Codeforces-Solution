#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;

    vector<ll> v(n);
    ll maximum = 0;
    
    for (auto &u : v) {
        cin >> u;
        maximum = max(maximum, u);
    }

    if (v[0] == maximum && v[0] > v[1]) {
        cout << 1 << '\n';
        return;
    } 
    else if (v[n - 1] == maximum && v[n - 1] > v[n - 2]) {
        cout << n << '\n';
        return;
    }
    

    for (int i = 1; i < n - 1; i++) {
        if (v[i] == maximum && (v[i - 1] < v[i] || v[i] > v[i + 1])) {
            cout << i + 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
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