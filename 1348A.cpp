#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            arr[i] = pow(2, i + 1);
        }

        if (n == 2) {
            cout << arr[1] - arr[0] << '\n';
            continue;
        }

        int f = 0, l = 0;
        for(int i = 0; i < n / 2; i++) {
            if (i % 2 == 0) {
                f += (arr[i] + arr[n - i - 1]);
            } else {
                l += (arr[i] + arr[n - i - 1]);
            }
        }

        cout << (f - l) << '\n';
    }   
    

    return 0;
}