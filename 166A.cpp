// #include <bits/stdc++.h>

// using namespace std;

// bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
//     if (a.first > b.first) return 1;
//     else if (a.first == b.first) return (a.second < b.second);
//     else return 0; 
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n, k; cin >> n >> k;
//     vector<pair<int, int>> teams(n);

//     for(int i = 0; i < n; i++) {
//         cin >> teams[i].first >> teams[i].second;
//     }

//     sort(teams.begin(), teams.end(), cmp);

//     // for(auto u : teams) cout << u.first << " " << u.second << '\n';
//     short count = 0;
//     for(auto u : teams) {
//         if (u == teams[k - 1]) ++count;
//     }
//     cout << count << '\n';

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<pair<int, int>> teams(n);

    for(int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second;
        teams[i].first *= -1;
    }

    // while sorting, if i need to keep one big and one small, then, the one(big/small) that make problems,
    // i will change the sign of that by multipying it with -1. Then while using sorting, the smallest value will come first(-4)
    // but we are getting the highest (4)
    sort(teams.begin(), teams.end());

    short count = 0;
    for(auto u : teams) {
        if (u == teams[k - 1]) ++count;
    }
    cout << count << '\n';

    return 0;
}