#include <iostream>
using namespace std;

int main() {
    string s1, s2; cin >> s1; cin >> s2;

    // cout << s1[1] << " " << s2[2] << endl;

    bool is_reverse = true;
    for(int i = 0; i < size(s1); i++) {
        // cout << i << " " << (size(s2) - 1 - i) << endl;
        if (s1[i] != s2[size(s2) - 1 - i]) {
            is_reverse = false;
            break;
        }
    }

    if (is_reverse) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}