#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; // assuming n is in this range: 12 ≤ n ≤ 106

    if (n % 2 != 0) {
        cout << 9 << " " << (n - 9) << endl;
    } else {
        cout << 8 << " " << (n - 8) << endl;
    }

    return 0;
}

// Know about Composite numbers: https://www.youtube.com/watch?v=41eVMYPCWTQ
// Sieve of Eratosthenes: https://www.youtube.com/watch?v=I6HrVRGGYNI

// And another way is try to prove this theorem. The prove is simple: if n is odd number, then 9 and (n-9) is an answer (n-9 is an 
// even number at least 4, so a composite number), and if n is even number, then 8 and (n-8) is an answer (n-8 is an even number at 
// least 4, also must be a composite number).