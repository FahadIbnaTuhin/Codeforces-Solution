#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int l, r, k; cin >> l >> r >> k;
        int copy_r = r, copy_l = l;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (copy_r / mid >= k) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << (r - copy_l + 1) << '\n';
    }

    return 0;
}