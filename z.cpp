#include <iostream>
using namespace std;

int main() {
    string s = "7";

    for(char c: s) {
        if (c == 7) {
            cout << "Y" << endl;
        }
    }

    return 0;
}
