#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Question states that, divide given Fibonacci number n by three not necessary "different" 
    // fibonacci numbers or say that it is impossible. Given input n will be a fibonacci number [told in the question]
    int n; cin >> n;

    cout << "0 0 " << n << '\n';
    // 0 0 n will be the required answer, here 0 is a fibonacci number & n is also fibonacci.
    // so their sum will be always equal to n

    return 0;
}