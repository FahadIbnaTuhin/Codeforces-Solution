#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;

    char ch = s[0]; 
    int cnt = 1;
    for (int i = 1, sz = s.size(); i < sz; i++) {
        if (ch < s[i]) {
            ch = s[i];
            cnt = 1;
        } else if (ch == s[i]) ++cnt;
    }   

    cout << string(cnt, ch) << '\n';

    return 0;
}