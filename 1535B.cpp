#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> arr(n);
        for(auto &u : arr) cin >> u;

        sort(arr.begin(), arr.end(), [] (int x, int y) {
            return x % 2 < y % 2;
        });

        int ans = 0;
        for(int i = 0, lim = n - 1; i < lim; i++) {
            for(int j = i + 1; j < n; j++) {
                int result = __gcd(arr[i], 2 * arr[j]);
                if (result > 1) {
                    ++ans;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}