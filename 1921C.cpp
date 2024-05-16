#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n; 
    ll f, a, b;
    cin >> n >> f >> a >> b;

    vector<ll> v(n + 1);
    v[0] = 0;
    for(int i = 1; i <= n; i++) cin >> v[i];

    for(int i = 1; i < n + 1; i++) {
        f -= min(a * (v[i] - v[i - 1]), b);
    }

    cout << (f > 0 ? "YES\n" : "NO\n"); 
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