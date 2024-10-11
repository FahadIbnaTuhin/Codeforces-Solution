#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;

    double tot_mm = 0;
    int prevX, prevY; cin >> prevX >> prevY;

    for (int i = 1; i < n; i++) {
        int x, y; cin >> x >> y;
        tot_mm += sqrt((x - prevX) * (x - prevX) + (y - prevY) * (y - prevY));
        prevX = x, prevY = y;
    }

    cout << fixed << setprecision(9) << k * (tot_mm / 50.0) << '\n';

    return 0;
}

// s = vt => t = s / v
// time taken for one signature: t = s / v
//                                 = total_mm / 50