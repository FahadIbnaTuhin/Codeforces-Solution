#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    int div = (n + 2 - 1) / 2; // ceil

    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a > 0) ++pos;
        else if (a < 0) ++neg;
    }

    if (div <= pos) {
        cout << 1 << '\n';
    } 
    else if (div <= neg) {
        cout << -1 << '\n';
    } 
    else {
        cout << 0 << '\n';
    }

    return 0;
}