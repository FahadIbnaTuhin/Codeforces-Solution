#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    string word = "codeforces";

    while(t--) {
        char c; cin >> c;

        bool is_found = false;
        for(char i: word) {
            if (i == c) {
                is_found = true;
                break;
            }
        }
        cout << (is_found ? "YES" : "NO") << endl;
    }

    return 0;
}