#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mx = 1e5+123;
ll arr[mx], preSum[mx];

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        preSum[i] = preSum[i - 1] + arr[i];
    }

    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i];
    }

    int q; cin >> q;
    while (q--) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) cout << preSum[r] - preSum[l - 1] << '\n';
        else cout << arr[r] - arr[l - 1] << '\n';
    }

    return 0;
}