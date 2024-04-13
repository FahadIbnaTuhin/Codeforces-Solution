#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        unordered_map<int, int> count;
        int ans = -1;
        
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            ++count[a];

            if (ans == -1 && count[a] >= 3) {
                ans = a;
            }
        }

        cout << ans << '\n';
    }   

    return 0;
}