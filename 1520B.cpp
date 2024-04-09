#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, count = 0; cin >> n;

        for(int d = 1, k = 0; d * ((pow(10, k + 1) - 1) / 9) <= n; d++) {
            if (d > 9) {
                ++k;
                d = 0;
            } else {
                ++count;
            }
        }

        cout << count << endl;
    }

    return 0;
}

// geometric series, Sn = (a(r^n - 1)) / (r - 1); when r > 1