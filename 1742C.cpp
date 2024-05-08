#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        bool found = false;
        char c;

        for(int i = 0; i < 8; i++) {
            string s; cin >> s;

            if (!found && s == "RRRRRRRR") {
                found = true;
                c = 'R';
            }
        }

        if (!found) c = 'B';

        cout << c << '\n';
    }

    return 0;
}