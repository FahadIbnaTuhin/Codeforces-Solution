#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b; cin >> n >> a >> b;

    vector<int> arr(n);
    for (int &u : arr) cin >> u;

    ll total = 0;
    for (int i = 0, lim = n / 2; i < lim; i++) {
        int first = arr[i], last = arr[n - 1 - i];

        if (first == last) {
            if (first == 2) {
                total += (2 * min(a, b));
            }
            else continue;
        }
        else if (first != 2 && last != 2) {
            cout << -1 << '\n';
            return 0;
        } 
        else if (last == 2) {
            total += (arr[i] == 0 ? a : b);
        } 
        else {
            total += (arr[n - 1 - i] == 0 ? a : b);
        }
    }

    if (n % 2 == 1 && arr[n / 2] == 2) {
        total += min(a, b);
    }

    cout << total << '\n';

    return 0;
}