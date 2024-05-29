#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    string s; cin >> s;

    int ones = 0, zeros = 0;
    for (auto &u : s) {
        if (u == 'n') ones++;
        else if (u == 'z') zeros++;
    }

    for (int i = 0; i < ones; i++) cout << 1 << ' ';
    for (int i = 0; i < zeros; i++) cout << 0 << '\n';
    
    return 0;
}