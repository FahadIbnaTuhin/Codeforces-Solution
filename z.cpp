#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n, k, x; cin >> n >> k >> x;

    ll min_sum = (k * (k + 1)) / 2;
    
    if (min_sum < x) {
        cout << "NO\n";
        return;
    }

    ll max_sum = (n * (n + 1)) / 2;

    if (max_sum < x) cout << "NO\n";
    else cout << "YES\n";
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