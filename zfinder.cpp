#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll need; cin >> need;
    ll t; cin >> t;

    for (ll i = 1; i <= t; i++) {
        ll a; cin >> a;
        if (need == t) {
            cout << a << '\n';
            break;
        }
    }
    
    return 0;
}