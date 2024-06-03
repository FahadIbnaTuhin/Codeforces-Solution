#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int R, C; cin >> R >> C;

    vector<string> pasture(R);
    for (int i = 0; i < R; i++) cin >> pasture[i];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (pasture[i][j] == 'W') {
                if ((j > 0 && pasture[i][j - 1] == 'S') || 
                    (j < C-1 && pasture[i][j + 1] == 'S') ||
                    (i > 0 && pasture[i - 1][j] == 'S') ||
                    (i < R-1 && pasture[i + 1][j] == 'S')) {
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (pasture[i][j] == 'W') {
                if (j > 0 && pasture[i][j - 1] == '.') pasture[i][j - 1] = 'D';
                if (j < C-1 && pasture[i][j + 1] == '.') pasture[i][j + 1] = 'D';
                if (i > 0 && pasture[i - 1][j] == '.') pasture[i - 1][j] = 'D';
                if (i < R-1 && pasture[i + 1][j] == '.') pasture[i + 1][j] = 'D';
            }
        }
    }

    cout << "Yes\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << pasture[i][j];
        }
        cout << '\n';
    }

    return 0;
}