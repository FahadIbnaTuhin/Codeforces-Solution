#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, d; cin >> n >> m >> d;
    int arr[n * m];

    for (int i = 0; i < n * m; i++) {
        cin >> arr[i];
    }

    if (n * m == 1) {
        cout << 0 << '\n';
        return 0;
    }

    sort(arr, arr + (n * m));
    int target = arr[(n * m) / 2];

    int ans = 0;
    for (int i = 0; i < n * m; i++) {
        if (abs(arr[i] - target) % d != 0) {
            cout << -1 << '\n';
            return 0;
        } 
        ans += abs(arr[i] - target) / d;
    }

    cout << ans << '\n';

    return 0;
}