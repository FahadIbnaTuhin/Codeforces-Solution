#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int w, h, u1, d1, u2, d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;

    int ans = w;
    for (int i = h; i > 0; i--) {
        ans += i;
        if (i == d1) {
            ans -= u1;
            if (ans < 0) ans = 0;
        } 
        if (i == d2) {
            ans -= u2;
            if (ans < 0) ans = 0;
        }
    }

    cout << ans << '\n';

    return 0;
}