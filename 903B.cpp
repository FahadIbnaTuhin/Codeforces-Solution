#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h1, a1, c1; cin >> h1 >> a1 >> c1;
    int h2, a2; cin >> h2 >> a2;

    vector<string> v;
    while(h2 > 0) {
        if (h2 - a1 <= 0) {
            h2 -= a1;
            v.push_back("STRIKE");
        } else if (h1 - a2 > 0) {
            h2 -= a1;
            v.push_back("STRIKE");
        } else {
            h1 += c1;
            v.push_back("HEAL");
        }
        h1 -= a2;
    }

    cout << v.size() << '\n';
    for(auto u : v) cout << u << '\n';

    return 0;
}