#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n; cin >> s >> n;
    multimap<int, int> levels; // using multimap instead of map for storing also non unique values
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        levels.emplace(x, y); 
    }

    for(const auto& pair: levels) {
        if (s > pair.first) {
            s += pair.second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}