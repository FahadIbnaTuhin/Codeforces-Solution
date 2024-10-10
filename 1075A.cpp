#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, x, y; cin >> n >> x >> y;


    ll wx = 1, wy = 1;
    ll cW = max(x - wx, y - wy);

    ll bx = n, by = n;
    ll cB = max(bx - x, by - y);

    if (cW <= cB) cout << "White\n";
    else cout << "Black\n";

    return 0;
}


// Brute Force - tle
// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// int cntWhite(int x, int y) {
//     int wx = 1, wy = 1;
//     int cnt = 0;
//     while (wx < x || wy < y) {
//         if (wx < x) ++wx;
//         if (wy < y) ++wy;
//         ++cnt;
//     }
//     return cnt;
// }

// int cntBlack(int x, int y, int n) {
//     int bx = n, by = n;
//     int cnt = 0;
//     while (bx > x || by > y) {
//         if (bx > x) --bx;
//         if (by > y) --by;
//         ++cnt;
//     }
//     return cnt;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n, x, y; cin >> n >> x >> y;

//     int cW = cntWhite(x, y);
//     int cB = cntBlack(x, y, n);

//     if (cW <= cB) cout << "White\n";
//     else cout << "Black\n";

//     return 0;
// }