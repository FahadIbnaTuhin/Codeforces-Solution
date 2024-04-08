#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int h, k; cin >> h >> k;

        cout << ((23 - h) * 60 + (60 - k)) << endl;
    }

    return 0;
}
