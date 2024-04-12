#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> inp(n);
        for(int& i : inp) cin >> i;

        vector<int> first = {inp.begin(), inp.begin() + ceil(n / 2.0)};
        vector<int> second = {inp.begin() + ceil(n / 2.0), inp.end()};
        reverse(second.begin(), second.end());

        vector<int> ans;
        for(int i = 0, limit = ceil(n / 2.0); i < limit; i++) {
            if (i < first.size()) {
                ans.push_back(first[i]);
            }
            if (i < second.size()) {
                ans.push_back(second[i]);
            }
        }
        for(int& i : ans) cout << i << " ";
        cout << '\n';
    }

    return 0;
}