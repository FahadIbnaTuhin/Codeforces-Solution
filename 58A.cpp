#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    string letter = "hello";
 
    for(char c: letter) {    
        int count = 0;
        for(int i = 0, length = size(s); i < length; i++) {
            if (c == s[i]) {
                s = s.substr(i + 1);
                ++count;
                break;
            }
        }
        if (count == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}