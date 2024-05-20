#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n; cin >> n;

    vector<int> ori(n);
    for (auto &u : ori) cin >> u;

    auto dup = ori;
    sort(dup.begin(), dup.end());
    for (int i = 0; i < n; i++) {
        if ((ori[i] + dup[i]) % 2 == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cout << (solve() ? "YES\n" : "NO\n");
    }
    
    return 0;
}