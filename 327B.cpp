#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, count = 0; cin >> n;

    for(int i = 1; count < n; i++) {
        cout << n + i << ' ';
        ++count;
    }
    cout << '\n';

    return 0;
}