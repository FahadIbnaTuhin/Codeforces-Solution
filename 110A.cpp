#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;

    bool is_lucky = true;
    if (size(s) % 4 == 0 || size(s) % 7 == 0) {
        for(char c: s) {
            if (c != '4' && c != '7') {
                is_lucky = false;
                break;
            }
        }
    } else {
        is_lucky = false;
    }
    

    if (is_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}