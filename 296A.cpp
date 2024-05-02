#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    map<int, int> m;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        m[a]++;
    }

    for(auto u : m) {
        if (u.second > (n + 1) / 2) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}

// two neighboring elements would be distinct in a finite time in an array
// only if those numbers which is meeted C times, it must fulfill the condition C <= (n+1) / 2.