#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;

    int count {};
    for(int i = 0; i < (size(s) - 1); ++i) {
        // cout << s[i] << endl;
        if (s[i] == s[i + 1]) {
            count += 1;
        } else {
            count = 0;
        }

        if (count == 6) { // As we are comparing two at the same time, it will be 6. DEBUG to really understand
            break;
        }
    }

    if (count == 6) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}