#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        if (n < 3) {
            cout << 0 << '\n';
            continue;
        }

        int cnt = 0;
        for(int i = 0; i < s.size(); ) {
            string sub_s = s.substr(i, 3);
            if (sub_s == "map" || sub_s == "pie") {
                cnt++;
                i += 3;
            } else {
                i++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}