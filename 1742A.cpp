#include <bits/stdc++.h>
using namespace std;

bool is_sum_of_other(int a, int b, int c) {
    bool is_sum = false;

    if (a == (b + c) || b == (a + c) || c == (a + b)) {
        is_sum = true;
    }

    return is_sum;
}

int main() {
    int t, a, b, c; cin >> t;

    while(t--) {
        cin >> a >> b >> c;
        cout << ((is_sum_of_other(a, b, c) ? "YES": "NO")) << endl;
    }

    return 0;
}