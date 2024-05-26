#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 1e5+10;
int a[mx];

void solve() {
    int n; cin >> n;
    
    int fl = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            fl = 1;
        }
    }

    if (fl) {
        cout << "YES\n";
    } else {
        sort(a + 1, a + 1 + n);
        
        vector<ll> b;
        for (int i = 2; i <= n; i++) {
            if (a[i] % a[1]) {
                b.push_back(a[i]);
            }
        }
        
        sort(b.begin(), b.end());
        for (int i = 1, sz = b.size(); i < sz; i++) {
            if (b[i] % b[0]) {
                fl = 1;
                break;
            }
        }

        cout << (!fl ? "YES\n" : "NO\n");
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