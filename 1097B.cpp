#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;

    for (int mask = 0, limit = 1 << n; mask < limit; mask++) {
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            if ((mask & (1 << i))) {
                sum -= arr[i];
            } else {
                sum += arr[i];
            }
        }

        if (sum % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}

// If the i-th bit is 0, the i-th rotation is clockwise.
// If the i-th bit is 1, the i-th rotation is counterclockwise.