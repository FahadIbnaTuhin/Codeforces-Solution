#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, h, m; cin >> n >> h >> m;

    int time = 60 * h + m;
    int ans = 24 * 60;
    
    for(int i = 0; i < n; i++) {
        cin >> h >> m;

        int t = 60 * h + m - time;
        if (t < 0) t += 24 * 60;

        ans = min(ans, t);
    }
    
    cout << ans / 60 << ' ' << ans % 60 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// pair<int, int> duration(pair<int, int> a, pair<int, int> b) {
//     int total_min = 0;
//     if (a <= b) {
//         int hour = b.first - a.first;
//         total_min = (hour * 60) + b.second - a.second;
//     } 
//     else {
//         int hour = 24 - (a.first - b.first);
//         total_min = (hour * 60) + b.second - a.second;
//     }

//     return {total_min / 60, total_min % 60};
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;

//     while(t--) {
//         int n;
//         pair<int, int> init_time;
//         cin >> n >> init_time.first >> init_time.second;

//         pair<int, int> temp; cin >> temp.first >> temp.second;
//         pair<int, int> diff_time = duration(init_time, temp);

//         for(int i = 1; i < n; i++) {
//             cin >> temp.first >> temp.second;
//             pair<int, int> new_diff = duration(init_time, temp);
//             diff_time = min(diff_time, new_diff);
//         }

//         cout << diff_time.first << ' ' << diff_time.second << '\n';
//     }

//     return 0;
// }