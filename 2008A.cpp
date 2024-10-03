#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;
        
        if (a == 0 && b % 2 == 1) {
            cout << "NO\n";
        }
        else if (((a + 2 * b) % 2) == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}