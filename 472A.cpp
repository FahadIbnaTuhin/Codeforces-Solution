#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    if (n % 2 != 0) {
        cout << 9 << " " << (n - 9) << endl;
    } else {
        cout << 8 << " " << (n - 8) << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> composite_arr(int num) {
//     vector<int> arr;
//     for(int i = 4; i < num; i++) {
//         for(int j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 arr.push_back(i);
//                 break;
//             }
//         }
//     }
//     return arr;
// }

// int main() {
//     int n; cin >> n; // 12

//     vector<int> comp_arr(composite_arr(n)); // 4 6 8 9 10

//     for(int i = 0; i < size(comp_arr); i++) { 
//         for(int j = i; j < size(comp_arr); j++) { // j = i because for input 1000000, the answer can be also this: 500000 500000
//             if ((comp_arr[i] + comp_arr[j]) == n) {
//                 cout << comp_arr[i] << " " << comp_arr[j] << endl;
//                 return 0;
//             }
//         }
//     }

//     return 0;
// }

// Know about Composite numbers: https://www.youtube.com/watch?v=41eVMYPCWTQ
// Sieve of Eratosthenes: https://www.youtube.com/watch?v=I6HrVRGGYNI

// And another way is try to prove this theorem. The prove is simple: if n is odd number, then 9 and (n-9) is an answer (n-9 is an 
// even number at least 4, so a composite number), and if n is even number, then 8 and (n-8) is an answer (n-8 is an even number at 
// least 4, also must be a composite number).