#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;   

    while (t--) {
        ll a, b; cin >> a >> b;

        if (a == b) {
            cout << "0 0\n";
        } else {
            ll g = abs(a - b);
            ll m = min(a % g, g - a % g);
            cout << g << ' ' << m << '\n';
        }
    }

    return 0;
}