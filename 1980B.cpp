#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    
    while (t--) {
        int n, f, k; cin >> n >> f >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        if (n == k) {
            cout << "YES\n";
            continue;
        }

        int fav = arr[f - 1];

        sort(arr.rbegin(), arr.rend());

        if (fav > arr[k - 1]) {
            cout << "YES\n";
        } else if (arr[k - 1] > fav) {
            cout << "NO\n";
        } else {
            if (arr[k - 1] != arr[k]) {
                cout << "YES\n";
            } else {
                cout << "MAYBE\n";
            }
        }
    }

    return 0;
}