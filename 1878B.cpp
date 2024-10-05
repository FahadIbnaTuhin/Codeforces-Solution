#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int a; cin >> a;

        for (int i = 0; i < a; i++) {
            cout << 2 * i + 1 << ' ';
        }
        cout << '\n';
    }   
    
    return 0;
}