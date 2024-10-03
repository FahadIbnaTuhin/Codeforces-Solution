#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int &i : arr) cin >> i;

        sort(arr.begin(), arr.end());
        if (arr[0] == arr[n - 1]) {
            cout << -1 << '\n';
            continue;
        }

        int i = n - 1;
        for (; i > 0; i--) {
            if (arr[i] != arr[n - 1]) {
                break;
            }
        }
        cout << i + 1 << ' ' << n - (i + 1) << '\n';

        for (int j = 0; j <= i; j++) cout << arr[j] << ' ';
        cout << '\n';

        for (i = i + 1; i < n; i++) cout << arr[i] << ' ';
        cout << '\n';
    }   
    
    return 0;
}