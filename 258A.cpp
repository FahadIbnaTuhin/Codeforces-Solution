#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    int c = s.find('0');

    if (c == -1) {
        cout << s.substr(1) << '\n';
    } else {
        cout << s.substr(0, c) << s.substr(c + 1) << '\n';
    }

    return 0;
}