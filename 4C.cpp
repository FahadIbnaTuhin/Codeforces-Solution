#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<string, int> count;
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        if (count[s]) {
            cout << s << count[s] << '\n';
            ++count[s];
        } else {
            ++count[s];
            cout << "OK\n";
        }
    }

    return 0;
}
