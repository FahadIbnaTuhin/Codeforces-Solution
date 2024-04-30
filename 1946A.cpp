#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);

        int medi;
        if (n % 2 == 1) medi = n / 2;
        else medi = n / 2 - 1;
        
        cout << count(arr + medi, arr + n, arr[medi]) << '\n';
    }

    return 0;
}