#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    string word = "codeforces";

    while(t--) {
        string s; cin >> s;
        int count = 0;

        for(int i = 0; i < 10; i++) {
            if (word[i] != s[i]) ++count;
        }

        cout << count << endl;
    }   

    return 0;
}