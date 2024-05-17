#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        cout << max(6LL, n + 1) / 2 * 5 << '\n';
    }

    return 0;
}