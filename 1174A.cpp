#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<int> arr(2 * n);
    bool ok = false;
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
        if (i > 0 && arr[i - 1] != arr[i]) ok = true;
    }

    if (!ok) {
        cout << -1 << '\n';
    } else {
        sort(arr.begin(), arr.end());
        for (auto &u : arr) cout << u << ' ';
        cout << '\n';
    }

    return 0;
}