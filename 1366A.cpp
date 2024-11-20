#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;
        cout << min({a, b, (a + b) / 3}) << '\n';
    }

    return 0;
}