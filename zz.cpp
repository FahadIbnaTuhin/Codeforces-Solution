#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    vector<int> customers(m);

    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    for (int i = 0; i < m; ++i) {
        cin >> customers[i];
    }

    for (int i = 0; i < m; ++i) {
        auto it = tickets.upper_bound(customers[i]);
        if (it == tickets.begin()) {
            cout << -1 << "\n";
        } else {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }

    return 0;
}
