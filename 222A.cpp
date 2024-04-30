#include <bits/stdc++.h>

using namespace std;

bool is_all_same(vector<int> &v) {
    for(auto u : v) {
        if (u != v[0]) {
            return false;
        }
    }
    return true;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int n, k; cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    while(v[v.size() - 1] <= k) {
        if (v[v.size() - 1] == v[n - 1]) {
            v.push_back(v[k]);
        } else {
            cout << 
        }
    }

    cout << - 1 << '\n';

    return 0;
}