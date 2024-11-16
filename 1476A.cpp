#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        double n, k; cin >> n >> k;

        double ans;
        if (n <= k) {
            ans = ceil(k / n);
        } else {
            ans = ceil((k * ceil(n / k)) / n);
        }
        cout << fixed << setprecision(0) << ans << '\n';
    }   

    return 0;
}