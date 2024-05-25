#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream input("input.txt");
    ofstream output("output.txt");

    ll n; input >> n;

    vector<pair<int, ll>> v;
    for (ll i = 0; i < 2 * n; i++) {
        int a; 
        input >> a;
        v.push_back({a, i + 1});
    }
    
    sort(v.begin(), v.end());

    bool ok = true;
    for (ll i = 0, end = 2 * n - 1; i < end; i += 2) {
        if (v[i].first != v[i + 1].first) {
            ok = false;
            break;
        } 
    }

    if (!ok) {
        output << -1 << '\n';
        return 0;
    }

    for (ll i = 0, end = 2 * n - 1; i < end; i += 2) {
        output << v[i].second << ' ' << v[i + 1].second << '\n';
    }

    input.close();
    output.close();

    return 0;
}