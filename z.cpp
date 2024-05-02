#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int n; cin >> n;

    vector<int> v;
    for(int i = 2; i <= 1e7 && v.size() < n; i++) {
        bool divisible = false;
        for(auto u : v) {
            if (i % u == 0) {
                divisible = true;
                break;
            }
        }
        if (!divisible) {
            v.push_back(i);
            cout << i << ' ';
        }
    }
    cout << '\n';

    return 0;
}