#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;

    if (n < 5) {
        cout << -1 << '\n';
        return;
    }

    for (int i = 1; i <= n; i += 2) { // printing all odds except 5
        if (i == 5) continue;
        cout << i << ' ';
    }
    cout << "5 4 "; // setting 5 4 at the middle because 5 + 4 = 9 which is a composite number
    for (int i = 2; i <= n; i += 2) {  // printing all evens except 4
        if (i == 4) continue;
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    for (ll tc = 1; tc <= t; tc++) solve();
    
    return 0;
}