#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, temp; cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);

        bool flag = true;
        for(int i = 0; i < n - 1; i++) {
            if ((arr[i + 1] - arr[i]) > 1) {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            continue;
        }
    }

    return 0;
}