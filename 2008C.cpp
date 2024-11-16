#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int l = 1, r = 10;

    
    for (int q = l; q <= 10; q++) {
        int tot = 0;
        for (int i = q, m = 0; i <= r; i += m) {
            cout << i << ' ';
            ++m;
            ++tot;
        }
        cout << "  : Total: " << tot << '\n';
    }

    return 0;
}