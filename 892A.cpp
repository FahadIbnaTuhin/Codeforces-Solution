#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    ll total_volumes = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        total_volumes += a;
    }

    int maximum = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        int b; cin >> b; // 6 5 
        if (maximum < b) {
            secondMax = maximum;
            maximum = b;
        } else if (maximum >= b && b > secondMax) {
            secondMax = b;
        }
    }

    ll ans = (ll)maximum + (ll)secondMax;
    if (ans >= total_volumes) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}