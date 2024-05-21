#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    char arr[n];
    string s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (s.find(arr[i]) == s.npos) s += arr[i];
    }

    sort(s.rbegin(), s.rend());

    for (const auto &u : arr) {
        int ind = (s.size() - 1 - s.find(u));
        cout << s[ind];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}