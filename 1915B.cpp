#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        char ans = 'A' ^ 'B' ^ 'C';

        for (int i = 0; i < 9; i++) {
            char ch; cin >> ch;
            if (ch != '?') ans ^= ch;
        }

        cout << ans << '\n';
    }

    return 0;
}