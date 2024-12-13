#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mx = 50+123;
bool vis[mx];
vector<ll> adj[mx];

void dfs(ll n) {
    vis[n] = 1;

    for (auto u : adj[n]) {
        if (vis[u] == 0) {
            dfs(u);
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, m; cin >> n >> m;
    while (m--) {
        ll x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll cnt = 0; // cnt of number of connected component
    for (ll i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            ++cnt;
            dfs(i);
        }
    }
    cout << (1ULL << (n - cnt)) << '\n'; // x << k means x * (2^k)

    return 0;
}