#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    int hundred = 0, dhundred = 0;
    for(int i = 0; i < n; i++) {
        int w; cin >> w;
        if (w == 100) hundred++;
        else dhundred++;
    }

    cout << ((float)hundred / 2 == dhundred || hundred % 2 == 0 || dhundred % 2 == 0 ? "YES\n" : "NO\n");

    return 0;
}