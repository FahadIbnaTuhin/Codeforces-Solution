#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        string s;
        vector<int> boom(n, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 26; j++) {
                if (a[i] == boom[j]) {
                    s += char('a' + j);
                    ++boom[j];
                    break;
                }
            }
        }

        cout << s << '\n';
    }

    return 0;
}