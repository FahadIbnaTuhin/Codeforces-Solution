#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n; cin >> n;

    map<int, int> m;
    for(int i = 0; i < n; i++) {
        int inp; cin >> inp;
        ++m[inp];
    }

    vector<int> v;
    for(int i = 0, group = n / 3; i < group; i++) {
        int c = 0;
        for(auto it = m.begin(); it != m.end(); ) {
            if (it->second > group) {
                cout << -1 << '\n';
                return 0;
            }

            v.push_back(it->first);
            --it->second;
            c++;

            if (it->second == 0) {
                auto temp = ++it;
                m.erase(--it);
                it = temp;
            } else {
                it++;
            }
    
            if (c == 3) break;
        }
    }

    int cc = 0;
    for(auto u : v) {
        cout << u << ' ';
        ++cc;
        if (cc == 3) {
            cout << '\n';
            cc = 0;
        }
    }
    
    return 0;
}