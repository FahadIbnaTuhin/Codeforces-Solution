#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int div = n / 6;
        int a = 2 + (div - 1) * 2;
        int b = 3 + (div - 1) * 2;
        int c = 1 + (div - 1) * 2;

        int runLoop = n - 6 * div;
        for (int i = 1; i <= runLoop; i++) {
            if (i == 1 || i == 4) ++b;
            else if (i == 2 || i == 5) ++a;
            else ++c;
        }

        cout << a << ' ' << b << ' ' << c << '\n';
    }
    
    return 0;
}

// "int a = 2 + (div - 1) * 2;" comes from this formula:
// nth element = a + (n - 1)d where a = first element, d = difference between any two element

// n =  6: 2 - 3 - 1
// n = 12: 4 - 5 - 3
// n = 18: 6 - 7 - 5
// n = 24: 8 - 9 - 7
// n =  observe you can find the pattern

