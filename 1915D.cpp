#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isVowel(char c) {
    return (c == 'a' || c == 'e');
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    cout << s.substr(0, 2);

    int i = 2;
    for( ; i + 1 < n; ) {
        if (isVowel(s[i]) != isVowel(s[i + 1])) {
            cout << '.' << s[i] << s[i + 1];
            i += 2;
        } else {
            cout << s[i] << '.' << s[i + 1] << s[i + 2];
            i += 3;
        }
    }
    if (i < n) {
        cout << s.substr(i) << '\n';
    } else cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}