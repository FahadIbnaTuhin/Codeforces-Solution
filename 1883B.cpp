#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    map<char, int> mpp;
    
    for(int i = 0; i < n; i++) {
        char c; cin >> c;
        ++mpp[c];
    }

    int odds = 0;
    for (auto u : mpp) {
        if (u.second % 2 == 1) {
            odds++;
        }
    }

    if (odds - k <= 1) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
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