#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int a, b, n; cin >> a >> b >> n;

        int i = n % 3;
        
        if (i == 0) cout << a << '\n';
        else if (i == 1) cout << b << '\n';
        else cout << (a ^ b) << '\n';
    }
    
    return 0;
}