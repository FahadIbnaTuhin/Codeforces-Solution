#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;

    int i = 1;
    while(n >= m * i) {
        n++;
        i++;
    }

    cout << n << '\n';

    return 0;
}