#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        ll minimum = LONG_MAX, maximum = LONG_MIN;
        
        if (i == 0) {
            minimum = abs(arr[i] - arr[i + 1]);
            maximum = abs(arr[i] - arr[n - 1]);
        } else if (i == n - 1) {
            minimum = abs(arr[i] - arr[i - 1]);
            maximum = abs(arr[i] - arr[0]);
        } else {
            minimum = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            maximum = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        }

        cout << minimum << ' ' << maximum << '\n';
    }

    return 0;
}