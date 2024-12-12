#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int a, b, n; cin >> a >> b >> n;

    if (b == 0) {
        cout << 0 << '\n';
        return 0;
    }

    if (a == 0) {
        cout << "No solution\n";
        return 0;
    }

    int v = b / a, x;
    if (v < 0) {
        v = -v;
        if (n % 2 == 0) {
            cout << "No solution\n";
        }
        x = pow(v, 1. / n) + .5;
        x = -x;
    } else {
        x = pow(v, 1. / n) + .5;
    }
    
    for (int i = 0; i < n; i++) {
        a *= x;
    }

    if (a != b) {
        cout << "No solution\n";
    } else {
        cout << x << '\n';
    }

    return 0;
}