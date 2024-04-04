#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    string inp;

    while(t--) {
        cin >> inp;

        cout << inp.substr(0, 2);
        for(int i = 2; i + 1 < size(inp); i += 2) {
            cout << inp[i + 1];
        }
        cout << endl;
    }
    return 0;
}