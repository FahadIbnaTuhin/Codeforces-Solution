#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    bool right = true;

    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << string(m, '#') << endl;
        } else {
            if (right) {
                cout << string((m - 1), '.') << "#" << endl;
                right = false;
            } else {
                cout << "#" << string((m - 1), '.') << endl;
                right = true;
            }
        }
    }

    return 0;
}