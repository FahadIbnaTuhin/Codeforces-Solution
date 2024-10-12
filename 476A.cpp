#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, res = 0; cin >> n >> m;

    if (n < m) {
        res = -1;
    } else {
        if (n % 2) {
            res = n / 2 + 1;
        } else {
            res = n / 2;
        }

        while (res % m > 0) {
            ++res;
        }
    }

    cout << res << '\n';

    return 0;
}

// https://www.youtube.com/watch?v=9ZCSXao7CkM