#include <iostream>

using namespace std;

int main() {
    int a, b, count {}; cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        count += 1;
    }

    cout << count << endl;

    return 0;
}