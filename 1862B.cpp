#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> arr(n), ans;
        for (int i = 0; i < n; i++) cin >> arr[i];
        ans.push_back(arr[0]);

        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                ans.push_back(1); // pushing 1 or arr[i] doesn't matter
                ans.push_back(arr[i]);
            } else {
                ans.push_back(arr[i]);
            }
        }

        cout << ans.size() << '\n';
        for (int i : ans) cout << i << ' ';
        cout << '\n';
    }
    
    return 0;
}