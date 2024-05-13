#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;   

    while(t--) {
        ll s; cin >> s;
        
        if (s < 10) {
            cout << s << '\n';
            continue;
        }

        ll count = 0;
        ll dup = s;
        while(dup >= 10) {
            ll free = floor(dup / 10);
            count += free;
            dup = dup - (free * 10) + free;
        }

        cout << s + count << '\n';
    }

    return 0;
}