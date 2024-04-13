#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        if (n % 2 == 0) {
            for(int i = n; i > n / 2; i--) cout << i << " ";
        } else {
            for(int i = n; i > n / 2 + 1; i--) cout << i << " ";
        }

        for(int i = 1; i <= n / 2; i++) { 
            cout << i << " ";
        }

        if (n % 2 == 1) cout << (n / 2 + 1) << " ";

        cout << '\n';
    }

    return 0;
}
// odd 
// 5 / 2 = 2 (end to n/2) + (0 to n/2)
// 1 2 3 4 5
// 5 4 1 2 3

// even
// 6 / 2 = 3 (end to n/2) + (0 to n/2) 
// 1 2 3 4 5 6
// 6 5 4 1 2 3

// 1 2 3 4 5 6 7 8 8 10
// 10 9 8 7 6 1 2 3 4 5
