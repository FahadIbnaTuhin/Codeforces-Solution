#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    string letters {"abcdefghijklmnopqrstuvwxyz"};

    if (size(s) >= 26) {
        for(char c: letters) {
            int count = 0;
            for(char d: s) {
                if (c == d) {
                    ++count ;
                    break;
                }
            }
            if (count == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }

        cout << "YES" << endl;

    } else {
        cout << "NO" << endl;
        return 0;
    }

    return 0;
}