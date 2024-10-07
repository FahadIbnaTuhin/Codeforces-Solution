#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 123;
int a[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        for (int i = 1; i <= n; i++) cin >> a[i];

        sort(a + 1, a + 1 + n);

        if (a[n] == a[1]) cout << 0 << '\n';
        else {
            int nom = 1;
            for (int i = 2; i <= n; i++) {
                if (a[1] == a[i]) ++nom;
                else break;
            }
            cout << n - nom << '\n';
        }
    }

    return 0;
}

// If the number of digits in a number is equal to the number of occurrences of each digit, and
// all digits are the same, then the average of the digits will always be equal to the value of 
// that digit.
// 2 2 2 : avg= (2+2+2) / 3 = 2
// 8 + 8 + 8 + 8 : avg = (8 + 8 + 8 + 8) / 4 = 32/4=8