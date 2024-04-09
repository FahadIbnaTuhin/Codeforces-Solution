#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, odds = 0; cin >> n;

        for(int i = 0; i < n; i++) {
            int inp; cin >> inp;

            if (inp % 2 == 1) { // if even
                ++odds;
            }
        }

        cout << (odds % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}

// Let's analyze the impact of adding odd or even numbers to a set with sum S

// If you add an even element to the set, the parity of S
//  remains unchanged.
// If you add an odd element to the set, the parity of S - REMEMBER ODD MUST (HAVE REASON)
//  changes.
// To achieve the same parity for both blue and red odd elements, the total number of odd elements in the array must be even.