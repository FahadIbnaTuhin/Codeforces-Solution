#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n, cnt = 0; cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        bool found = true;
        for (int i = 1; i < n; i++) {
            int dd = abs(nums[i - 1] - nums[i]);
            if (dd != 5 && dd != 7) {
                found = false;
                break;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }
    
    return 0;
}