#include <bits/stdc++.h>

using namespace std;

bool is_all_values_zero(map<int, int> count) {
    for(auto u : count) {
        if (u.second > 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    map<int, int> count = {{2, -5}, {5, 0}};

    cout << is_all_values_zero(count) << '\n';

    return 0;
}