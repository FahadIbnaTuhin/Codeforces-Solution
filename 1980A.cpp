#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    
    while (t--) {
        int n, m; 
        string s; 
        cin >> n >> m >> s;

        map<char, int> mp = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0}};
        for (auto &u : s) ++mp[u];

        int need = 0;
        for (auto &u : mp) {
            u.second -= m;
            if (u.second < 0) need += (u.second * -1);
        }

        cout << need << '\n';
    }

    return 0;
}