#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n, m, k, H; cin >> n >> m >> k >> H;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0;
    for(auto &u : arr) {
        if (u == H || m < 2) continue;

        float diff = abs(H - u);

        double x = diff / k;
        if (x != (int)x) {
            continue;
        } 

        if (x <= (m - 1)) {
            cnt++;
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}