#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    int arr[3];

    while (t--) {
        cin >> arr[0] >> arr[1] >> arr[2];

        if ((arr[0] + arr[1] + arr[2]) % 2) {
            cout << -1 << '\n';
            continue;
        }

        int cnt = 0;
        while(arr[1]) {
            cnt++;
            arr[1]--;
            arr[2]--;
            sort(arr, arr + 3);
        }

        cout << cnt << '\n';
    }

    return 0;
}