#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string inp; cin >> inp;
    transform(inp.begin(), inp.end(), inp.begin(), ::tolower);

    for(char c: inp) {
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        }
        else {
            cout << "." << c;
        }
    }
    cout << endl;
    
    return 0;
}