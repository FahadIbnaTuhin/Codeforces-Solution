#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int w, h, n; cin >> w >> h >> n;
        int total_page = 1;

        while(w % 2 == 0) {
            w /= 2;
            total_page *= 2;
        }

        while(h % 2 == 0) {
            h /= 2;
            total_page *= 2;
        }

        cout << (total_page >= n ? "YES" : "NO") << '\n';
    }

    return 0;
}