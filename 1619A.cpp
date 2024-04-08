#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        string inp; cin >> inp;

        bool ok = false;
        if (size(inp) % 2 == 0) {
            if (inp.substr(0, size(inp) / 2) == inp.substr(size(inp) / 2)) {
                ok = true;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}