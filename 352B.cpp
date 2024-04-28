#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    map<int, vector<int>> count;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        count[a].push_back(i);
    }
    
    map<int, int> ans;
    for(auto u : count) {
        if (u.second.size() > 1) {
            bool pattern = true;
            int diff = u.second[1] - u.second[0];
            for(int i = 1; i < u.second.size() - 1; i++) {
                if (u.second[i + 1] - u.second[i] != diff) {
                    pattern = false;
                    break;
                }
            }
            if (pattern) {
                ans[u.first] = diff;
            } 
        } else {
            ans[u.first] = 0;
        }
    }

    cout << ans.size() << '\n';
    for(auto u : ans) cout << u.first << ' ' << u.second << '\n';

    return 0;
}