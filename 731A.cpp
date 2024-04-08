#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int rotations = 0;

    for(int i = 0; i < size(s); i++) {
        int diff;
        if (i == 0) {
            diff = abs(s[i] - 'a');
        } else {
            diff = abs(s[i] - s[i - 1]);
        }
        rotations += min(diff, 26 - diff);
    }

    cout << rotations << endl;

    return 0;
}