#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    string name = "Timur";

    while(t--) {
        int n; cin >> n;
        string inp; cin >> inp;

        if (size(inp) != 5) {
            cout << "NO" << endl;
            continue;
        }

        bool ok = true;
        for(char i: name) {
            bool found = false;
            for(char j: inp) {
                if (i == j) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}