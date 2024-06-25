#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int n, v; cin >> n >> v;

    int tot = 0, tk = 0, need = n - 1;

    for (int i = 1; i <= n; i++) {
        if (need - tot >= 2) {
            tk += (i * v);
            tot += v;
        } 
        else {
            tk += (i * (need - tot));
            tot += (need - tot);
            cout << tk << '\n';
            break;
        }
    }

    return 0;
}

// 10 3
// ans 30