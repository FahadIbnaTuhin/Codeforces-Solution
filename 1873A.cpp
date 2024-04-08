#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        char a, b, c; cin >> a >> b >> c;

        if (a == 'a' || b == 'b' || c == 'c') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}