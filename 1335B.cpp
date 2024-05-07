#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n, a, b; cin >> n >> a >> b;

        for(int i = 0; i < n; i++) {
            cout << char('a' + (i % b));
        }
        cout << '\n';
    }

    return 0;
}

// There is no substring containing more than b distinct characters and each substring of length a
// contains exactly b distinct characters because of the condition b≤a