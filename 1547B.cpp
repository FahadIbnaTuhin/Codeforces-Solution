#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s; cin >> s;
    int aind = s.find("a");

    if (aind == s.npos) {
        cout << "NO\n";
        return;
    }

    int lind = aind - 1, rind = aind + 1;
    char c = 'a';

    bool alphabetical = true;
    for (int i = 1, n = s.size(); i < n; i++) {
        c += 1;
        if (s[lind] == c) {
            --lind;
        } else if (s[rind] == c) {
            ++rind;
        } else {
            alphabetical = false;
            break;
        }
    }

    cout << (alphabetical ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}