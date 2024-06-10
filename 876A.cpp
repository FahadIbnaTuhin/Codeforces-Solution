#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b, c; 
    cin >> n >> a >> b >> c;

    int minimum = min({a, b, c});

    if (minimum == a || minimum == b || n == 1) {
        cout << min(a, b) * (n - 1) << '\n';
    } else {
        cout << min(a, b) + c * (n - 2) << '\n';
    }

    return 0;
}