#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        int f = a - 1;
        int l = abs(c - b) + (c - 1);

        // cout << (a - 1) << " " << (abs(c - b) + (c - 1)) << '\n';

        if (f < l) cout << 1 << '\n';
        else if (f > l) cout << 2 << '\n';
        else cout << 3 << '\n';
    }   

    return 0;
}