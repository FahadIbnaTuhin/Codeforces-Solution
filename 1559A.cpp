#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxx = 1e2+10;
ll a[maxx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        ll res = a[0];
        for(int i = 1; i < n; i++) {
            res &= a[i];
        }

        cout << res << '\n';
    }

    return 0;
}

// a & b == b & a [if a != b]
// a & a = a