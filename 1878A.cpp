#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int n, k; cin >> n >> k;

        bool found = false;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;

            if (!found && a == k) {
                found = true;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}