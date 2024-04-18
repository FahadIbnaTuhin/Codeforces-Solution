#include <bits/stdc++.h>

using namespace std;

const int mx = 2e5+123;
int p[mx];
int a[mx];
int b[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    priority_queue<int, vector<int>, greater<int> > q[5][5];

    for(int i = 1; i <= n; i++) {
        q[a[i]][b[i]].push(p[i]);
    }

    int m; cin >> m;

    while(m--) {
        int c; cin >> c;
        
        int ans = INT_MAX;
        int f, ba;

        for(int i = 1; i <= 3; i++) {
            if (!q[c][i].empty() && q[c][i].top() < ans) {
                ans = q[c][i].top();
                f = c, ba = i;
            }
        }

        for(int i = 1; i <= 3; i++) {
            if (!q[i][c].empty() && q[i][c].top() < ans) {
                ans = q[i][c].top();
                f = i, ba = c;
            }
        }

        if (ans == INT_MAX) ans = -1;
        else {
            q[f][ba].pop();
        }

        cout << ans << ' ';
    }
    cout << '\n';

    return 0;
}