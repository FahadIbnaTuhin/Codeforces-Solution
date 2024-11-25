#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while (t--) {
        int n; cin >> n;

        cout << 2 << ' ';
        int f = 3;
        int lastMod = 0;
        for (int i = 2; i <= n; i++) {
            while (lastMod >= f % i) {
                ++f;
            }
            cout << f << ' ';
            lastMod = f % i;
            ++f;
        }
        cout << '\n';
    }

    return 0;
}