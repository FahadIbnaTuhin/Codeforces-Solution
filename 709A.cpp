#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, b, d, total = 0, empty_waste = 0;
    cin >> n >> b >> d;

    while(n--) {
        ll a; cin >> a;

        if (a > b) continue;

        total += a;

        if (total > d) {
            ++empty_waste;
            total = 0;
        }
    }

    cout << empty_waste << '\n';

    return 0;
}