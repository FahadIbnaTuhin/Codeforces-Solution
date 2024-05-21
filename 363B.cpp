#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    
    vector<int> v(n);
    cin >> v[0];
    for (int i = 1; i < n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    ll minimum = v[k - 1];
    int ind = 0;

    for (int i = k; i < n; i++) {
        ll cs = v[i] - v[i - k];
        if (cs < minimum) {
            minimum = cs;
            ind = i - k + 1;
        }
    }
    
    cout << ind + 1 << '\n';

    return 0;
}