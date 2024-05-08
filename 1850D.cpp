#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;

        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);

        int maximum = 0, conse = 1;
        for(int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] <= k) {
                conse++;
            } else {
                if (maximum < conse) maximum = conse;
                conse = 1;
            }
        }

        if (maximum < conse) maximum = conse;

        cout << n - maximum << '\n';
    }
    
    return 0;
}