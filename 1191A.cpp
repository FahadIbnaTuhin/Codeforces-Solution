#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x; cin >> x;

    priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> pq;
    map<int, char> mp = {{1, 'A'}, {3, 'B'}, {2, 'C'}, {0, 'D'}};

    for (int i = 0; i < 3; i++, x++) {
        int modd = x % 4;
        pq.push({mp[modd], i});
    }

    cout << pq.top().second << ' ' << pq.top().first << '\n';
    
    return 0;
}