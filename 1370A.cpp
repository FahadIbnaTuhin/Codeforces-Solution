#include <iostream>
#include <limits>

using namespace std;

int gcd(int n, int m) {
    return m == 0 ? n : gcd(m, n % m);
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        cout << n / 2 << endl;
    }

    return 0;
}

// #include <iostream>
// #include <limits>

// using namespace std;

// int gcd(int n, int m) {
//     return m == 0 ? n : gcd(m, n % m);
// }

// int main() {
//     int t; cin >> t;

//     while(t--) {
//         int n; cin >> n;

//         int max_gcd = numeric_limits<int>::min();
//         for(int i = 0; i < n - 1; i++) {
//             for(int j = i + 1; j < n; j++) {
//                 int c_gcd = gcd(i + 1, j + 1);
//                 if (max_gcd < c_gcd) {
//                     max_gcd = c_gcd;
//                 }
//             }
//         }
//         cout << max_gcd << endl;
//     }

//     return 0;
// }