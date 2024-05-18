#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, k; cin >> n >> k;
    ll max_joy = INT_MIN;

    while (n--) {
        ll f, t; cin >> f >> t;

        if (t < k) {
            max_joy = max(max_joy, f);
        } 
        else {
            max_joy = max(max_joy, (f - (t - k)));
        }
    }

    cout << max_joy << '\n';

    return 0;
}