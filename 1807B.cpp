#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n, evens = 0, odds = 0; cin >> n;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            
            if (x % 2 == 0) {
                evens += x;
            } else {
                odds += x;
            }
        }

        cout << (evens > odds ? "YES\n" : "NO\n");
    }

    return 0;
}