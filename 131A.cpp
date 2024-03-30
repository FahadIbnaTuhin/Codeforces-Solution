#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string word; cin >> word;

    bool allupper = !word.empty() && all_of(word.begin(), word.end(), ::isupper);
    bool exceptFirstOne = !word.empty() && islower(word[0]) && all_of(word.begin() + 1, word.end(), ::isupper);

    if (allupper || exceptFirstOne) {
        for(char c: word) {
            if (islower(c)) {
                cout << (char)toupper(c); // Explicit cast to char
            } else {
                cout << (char)tolower(c);
            }
        }
        cout << endl;
    } else {
        cout << word << endl;
    }

    return 0;
}