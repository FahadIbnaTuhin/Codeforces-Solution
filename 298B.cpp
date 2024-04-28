#include <bits/stdc++.h>

using namespace std;

bool is_all_values_zero(map<char, int> count) {
    for(auto u : count) {
        if (u.second > 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, sx, sy, ex, ey; cin >> t >> sx >> sy >> ex >> ey;
    map<char, int> count;

    if (sx < ex) {
        count['E'] = ex - sx;
    } else {
        count['W'] = sx - ex;
    }

    if (sy < ey) {
        count['N'] = ey - sy;
    } else {
        count['S'] = sy - ey;
    }

    for(int i = 1; i <= t; i++) {
        char inp; cin >> inp;

        if (count[inp]) {
            --count[inp];
        }

        if (is_all_values_zero(count)) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}