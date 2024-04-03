#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    string s;
    while(t--) {
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::toupper);

        cout << ((s == "YES" ? "YES" : "NO")) << endl;
    }

    return 0;
}