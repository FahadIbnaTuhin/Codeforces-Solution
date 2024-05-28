#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 1e5+10;
ll a[mx];
ll b[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b + 1, b + 1 + n);

    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }

    int m; cin >> m;
    while (m--) {
        int type, l, r; cin >> type >> l >> r;
        if (type == 1) {
            cout << a[r] - a[l - 1] << '\n';
        } else {
            cout << b[r] - b[l - 1] << '\n';
        } 
    }

    return 0;
}