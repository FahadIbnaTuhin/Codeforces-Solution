#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        if (n & (n - 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}

// If the number x has an odd divisor, then it has an odd prime divisor
// even ∗ even = even;
// even ∗ odd = even;
// odd ∗ even = even;
// odd ∗  odd = odd.

// There is only one even prime number —  2