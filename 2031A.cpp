#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        map<int, int> mp;
        
        int mxOcc = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a]++;
            mxOcc = max(mxOcc, mp[a]);
        }

        if (mxOcc == 1) cout << n - 1 << '\n';
        else cout << n - mxOcc << '\n';
    }
    
    return 0;
}