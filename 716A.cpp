#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, c, prevEl;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> c >> prevEl;

    int ans = 1;
    for (int i = 1; i < n; i++) {
        int t; cin >> t;

        if (t - prevEl > c) {
            ans = 1;
        } else {
            ++ans;
        }
        prevEl = t;
    }

    cout << ans << '\n';

    return 0;
}