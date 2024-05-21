#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;

    vector<int> correct(n);
    for(auto &u : correct) cin >> u;

    vector<int> incorrect(m);
    for(auto &u : incorrect) cin >> u;

    int min1 = *min_element(correct.begin(), correct.end());
    int max1 = *max_element(correct.begin(), correct.end());
    int min2 = *min_element(incorrect.begin(), incorrect.end());

    int v = max(max1, 2 * min1);

    if (min2 > v) {
        cout << v << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}