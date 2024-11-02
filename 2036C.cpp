#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    string s; 
    int q; 
    cin >> s >> q;

    int ind = -1;
    for (int i = 0; i < q; i++) {
        int w, v; cin >> w >> v;
        s[w - 1] = v + '0';

        string temp = "1100";
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            int l = i;
            while (s[l] == temp[j]) {
                l++;
                j++;
            }
            if (j == 4) {
                cout << "YES\n";
                break;
            } else {
                j = 0;
                i = l - 1;
            }
        }
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}