#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    ll t; cin >> t;

    while (t--) {
        int n; cin >> n;
        
        vector<ll> arr(n);
        int cnt = 0, el, ind;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (cnt == 0) {
                el = arr[i];
                ind = i;
                cnt++;
            } 
            else if (el == arr[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }

        if (cnt == n) {
            cout << "NO\n";
            continue;
        }

        string ans(n, 'R');
        for (int i = 0; i < n; i++) {
            if (el == arr[i]) {
                ans[i] = 'B';
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}