#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k; cin >> n >> m >> k;
    --m; // 0-indexed

    vector<int> prices(n);
    for (int &i : prices) cin >> i;

    int buyingInd = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (i == m) continue;

        if (prices[i] != 0 && k >= prices[i]) {
            buyingInd = min(buyingInd, abs(m - i));
        }
    }

    cout << buyingInd * 10 << '\n';

    return 0;
}