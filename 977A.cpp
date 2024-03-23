#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    for(int i = 0; i < k; ++i) {
        if (n % 10 != 0) { // n % 10 = x, here x is the last digit of n
            --n;
        } else {
            n /= 10; // to get the number without the last digit
        }
    }

    cout << n << endl;

    return 0;
}

// To print the last digit of an integer, use number % 10
// 123345 % 10 = 5