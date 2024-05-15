#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n, a, b, c, d; cin >> n >> a >> b >> c >> d;
    int min_weight = c - d;
    int max_weight = c + d;
    int min_grains_w = n * (a - b);
    int max_grains_w = n * (a + b); 

    if (min_weight <= max_grains_w && max_weight >= min_grains_w) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

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
