#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    
    ll sum = a + b + c;
    ll k = sum / 9;

    if (sum % 9 == 0 && a >= k && b >= k && c >= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();

    return 0;
}