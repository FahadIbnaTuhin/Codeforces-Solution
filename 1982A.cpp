#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;

    while (t--) {
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        if ((x1 <= y1 && y1 <= x2) && (x1 <= y2 && y2 <= x2) || 
            ((y1 <= x1 && x1 <= y2) && (y1 <= x2 && x2 <= y2))) {
            cout << "NO\n";
        } 
        else {
            cout << "YES\n";
        }
    }
    
    return 0;
}