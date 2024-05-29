#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    string s; cin >> s;
    
    while (m--) {
        int l, r; 
        char c1, c2;
        cin >> l >> r >> c1 >> c2;

        for (int i = l - 1; i < r; i++) {
            if (s[i] == c1) s[i] = c2;
        }
    }

    cout << s << '\n';

    return 0;
}