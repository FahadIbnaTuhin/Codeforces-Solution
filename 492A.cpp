#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    int cubes = 0, i = 1;
    while ((cubes + (i * (i + 1)) / 2) <= n) {
        cubes += ((i * (i + 1)) / 2);
        i++;
    }

    cout << i - 1 << endl;

    return 0;
}

// 1 + 2 + 3 + ... + n. This formula is: "(n * (n + 1)) / 2"