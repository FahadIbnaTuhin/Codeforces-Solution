#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, k; cin >> n >> m >> k;

    cout << (n <= m && n <= k ? "YES\n" : "NO\n");

    return 0;
}