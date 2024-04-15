#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());
        int uniques = unique(arr.begin(), arr.end()) - arr.begin();

        cout << (n - uniques) << '\n';
    }

    return 0;
}