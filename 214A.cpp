#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;

    int c = 0;
    for(int a = 0; a * a <= n && a <= m; a++) {
        int b = n - a * a;
        if (a + b * b == m) ++c;
    }

    cout << c << '\n';
    
    return 0;
}