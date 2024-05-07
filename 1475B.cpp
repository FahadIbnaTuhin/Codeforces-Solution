#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int cnt2021 = n % 2020;
        int cnt2020 = (n - cnt2021) / 2020 - cnt2021;

        if (cnt2020 >= 0 && cnt2020 * 2020 + cnt2021 * 2021 == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}