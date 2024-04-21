#include <bits/stdc++.h>

using namespace std;

set<pair<int, int>> sp;

bool is_supercentral(pair<int, int> &p) {
    bool upper = 0, lower = 0, right = 0, left = 0;
    for(auto u : sp) {
        if (u.first > p.first && u.second == p.second) right = 1;
        else if (u.first > p.first && u.second == p.second) right = 1;
        else if (u.first < p.first && u.second == p.second) left = 1;
        else if (u.first == p.first && u.second < p.second) lower = 1;
        else if (u.first == p.first && u.second > p.second) upper = 1;
    }
    return upper && lower && right && left;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        sp.insert({x, y});
    }

    // int r, t; cin >> r >> t; // for checking just
    // pair<int, int> p = {r, t};
    // if (is_supercentral(p)) cout << "YES\n";
    // else cout << "NO\n";

    int count = 0;
    for(auto u : sp) {
        if (is_supercentral(u)) ++count;
    }
    cout << count << '\n';

    return 0;
}