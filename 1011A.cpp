#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k; 
    string s; 
    cin >> n >> k >> s;

    sort(s.begin(), s.end());

    char last = 'a' - 2;
    int ans = 0;
    int l = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] >= last + 2) {
            last = s[i];
            ans += s[i] - 'a' + 1;
            ++l;
            if (l >= k) {
                cout << ans << '\n';
                return 0;
            }
        }
    }
    
    cout << -1 << '\n';

    return 0;
}