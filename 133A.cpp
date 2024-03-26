#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    bool is_hq9 = false;
    for(char c: s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            is_hq9 = true;
            break;
        }
    }

    if (is_hq9) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// Output "YES", if executing the program will produce any output, and "NO" otherwise.
// + will not produce any output, it will just increases the value