#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        long long int n; cin >> n;

        cout << fixed << setprecision(0) << ceil(n / 2.0) << endl;
    }

    return 0;
}