#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        if (n < 3) {
            cout << 0 << endl;
        } else if (n % 2 == 0) {
            cout << n/2 - 1 << endl; // 4 -> 1
        } else {
            cout << n / 2 << endl; // 7 -> 3
        }
    }

    return 0;
}