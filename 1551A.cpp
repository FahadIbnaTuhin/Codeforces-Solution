#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long int n; cin >> n;

        long double b = n / 3.0;
        long long int a = n - (2 * (int)b);
        int diff = abs(a - (int)b);

        if (trunc(b) != b) {
            int c_b = ceil(b);
            int c_a = n - (2 * c_b);
            int c_diff = abs(c_a - c_b);

            if (diff < c_diff) {
                cout << a << " " << (int)b << endl;
            } else {
                cout << c_a << " " << c_b << endl;
            }
        } else {
            cout << a << " " << (int)b << endl;
        }  
    }

    return 0;
}