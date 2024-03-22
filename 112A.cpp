#include <iostream>
#include <string>
#include <cctype> // for toupper & tolower
#include <cstring> // for strcmp

using namespace std;

int main() {        
    string s1, s2;
    
    cin >> s1 >> s2;
    // cout << s1 << " " << s2 << endl;

    for(char &c: s1) {
        c = tolower(c);
    }
    for(char &c: s2) {
        c = tolower(c);
    }
    // cout << s1 << " " << s2 << endl;

    cout << strcmp(s1.c_str(), s2.c_str()) << endl;

    return 0;
}

// lexicographical order (also known as the "dictionary order" or "alphabetical order")