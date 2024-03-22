#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inp; cin >> inp;

    if (islower(inp[0])) {
        inp[0] = toupper(inp[0]);
    }

    cout << inp << endl;

    return 0;
}