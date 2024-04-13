#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> b_index;

        for(int i = 1; i <= n; i++) {
            char c; cin >> c;

            if (c == 'B') {
                b_index.push_back(i);
            }
        }

        sort(b_index.begin(), b_index.end());

        cout << (b_index[b_index.size() - 1] - b_index[0] + 1)<< '\n';
    }

    return 0;
}