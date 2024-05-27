#include <bits/stdc++.h>

using namespace std;

char magic[4][4];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    for (int i = 0; i < 4; i++) {
        for (int j =0; j < 4; j++) {
            cin >> magic[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            unordered_map<char, int> um;
            um[magic[i][j]]++;
            um[magic[i][j + 1]]++;
            um[magic[i + 1][j]]++;
            um[magic[i + 1][j + 1]]++;
            for (auto &u : um) {
                if (u.second >= 3) {
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }

    cout << "NO\n";

    return 0;
}