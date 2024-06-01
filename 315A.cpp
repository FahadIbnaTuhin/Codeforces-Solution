#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    int a[1000], b[1000], z[1001] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        z[b[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        z[b[i]]--;
        if (z[a[i]] == 0) {
            ans++;
        }
        z[b[i]]++;
    }

    cout << ans << '\n';

    return 0;
}