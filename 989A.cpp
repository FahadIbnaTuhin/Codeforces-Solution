#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    bool found = false;
    for (int i = 0, n = s.size() - 2; i < n; i++) {
        unordered_map<char, int> magic;
        for (int j = 0; j < 3; j++) {
            magic[s[j + i]]++;
        }

        if (magic.size() == 3 && magic.count('.') == 0)  {
            found = true;
            break;
        }
    }

    cout << (found ? "Yes\n" : "No\n");

    return 0;
}