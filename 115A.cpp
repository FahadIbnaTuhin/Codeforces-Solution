#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 2000+123;
vector<int> adj[mx];
int lev[mx];
int highestLev = 0; // level can't be negative so atleast 0

void bfs(int s) {
    memset(lev, -1, sizeof(lev));

    lev[s] = 0;

    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (lev[v] == -1) {
                lev[v] = lev[u] + 1;
                highestLev = max(highestLev, lev[v]);
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<int> roots;
    for (int i = 1; i <= n; i++) {
        int p; cin >> p;
        adj[i].push_back(p);
        adj[p].push_back(i);
        if (p == -1) roots.push_back(i);
    }

    for (int i : roots) {
        bfs(i);
    }

    cout << highestLev + 1 << '\n'; // if for 1th it is -1, then 0 level, so 1 group can be made. so highestLev + 1

    return 0;
}