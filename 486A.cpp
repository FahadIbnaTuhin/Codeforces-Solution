#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n; cin >> n;

    if (n % 2 == 0) {
        cout << (n / 2) << endl;
        return 0;
    } else {
        cout << (- ((n + 1) / 2)) << endl;
    }

    return 0;
}

// f(1) = - 1 = -1
// f(2) = - 1 + 2 = 1
// f(3) = - 1 + 2 - 3 = -2
// f(4) = - 1 + 2 - 3 + 4 = 2
// f(5) = - 1 + 2 - 3 + 4 - 5 = -3
// f(6) = - 1 + 2 - 3 + 4 - 5 + 6 = 3
// f(7) = 3 - 7 = -4
// f(8) = -4 + 8 = 4
// f(9) = 4 - 9 = -5
// f(10) = -5 + 10 = 5
// Notice, when it is even, the result is the half of the input

// 1 = -1
// 3 = -2
// 5 = -3
// 7 = -4 
// 9 = -5

// if x = 5, then add 1 and then divide the sum by 2. Add negative for odd numbers
// 5 + 1 = 6 / 2 = 3. Add negative for odd, so -3

// long long a = 234234; & long long int a = 234234; main differnece is:
// In C++, long long and long long int are essentially the same type. The int in long long int is optional and 
// redundant because long long already indicates an integer type