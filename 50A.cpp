#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    if (1 <= m && m <= n && n <= 16) {
        cout << ((m * n) / 2) << endl;
    }

    return 0;
}

// When m = n = 3, 3*3 = 9 / 2 = 4.5, so for .5 you cann't keep 
// another domino on the board as there are no space available