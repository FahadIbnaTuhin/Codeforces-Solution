#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s1; cin >> s1;
    string s2; cin >> s2;

    if (s1.size() != s2.size()) {
        cout << "NO\n";
        return 0;
    }

    set<char> s;
    int c = 0;
    for(int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            s.insert(s1[i]);
            s.insert(s2[i]);
            c++;
        }
    }

    cout << (s.size() == 2 && c == 2 ? "YES\n" : "NO\n");

    return 0;
}