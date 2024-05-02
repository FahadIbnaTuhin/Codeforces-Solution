#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, number = 1; 
    ll l, r;
    cin >> n >> l >> r;
    ll minl = l, maxl = r;

    for(int i = 2; i <= n; i++) {
        cin >> l >> r;

        if (l <= minl && r >= maxl) {
            number = i;
        } else if (l < minl || r > maxl) {
            number = -1;
        }

        minl = min(minl, l);
        maxl = max(maxl, r);
    }

    cout << number << '\n';

    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n; cin >> n;

//     pair<ll, ll> big_segment;
//     cin >> big_segment.first >> big_segment.second;
//     int bsi = 0; // bsi: big segment's index

//     int highest_r = big_segment.second;
//     for(int i = 1; i < n; i++) {
//         ll l, r; cin >> l >> r;

//         if (big_segment.first > l) {
//             big_segment.first = l;
//             big_segment.second = r;
//             bsi = i;
//         } else if (big_segment.first >= l && big_segment.second < r) {
//             big_segment.first = l;
//             big_segment.second = r;
//             bsi = i;
//         }

//         if (highest_r < r) highest_r = r;
//     }

//     if (big_segment.second < highest_r) {
//         cout << -1 << '\n';
//         return 0;
//     }

//     cout << bsi + 1 << '\n';

//     return 0;
// }

// l -> lowest, h -> highest
// ans will be who's l is the lowest and r is the highest