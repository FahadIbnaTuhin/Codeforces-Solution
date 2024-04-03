#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long int a, b; cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
        } else {
            long long int diff = abs(a - b);
            long double result = diff / 10.0;

            cout.precision(0);
            cout << fixed << ceil(result) << endl;
        }
    }

    return 0;
}