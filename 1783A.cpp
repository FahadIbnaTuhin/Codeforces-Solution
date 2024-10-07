#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 60;
int a[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);      
    
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        for (int i = 1; i <= n; i++) cin >> a[i];

        sort(a + 1, a + 1 + n);

        if (a[n] == a[1]) cout << "NO\n";
        else {
            cout << "YES\n";
            cout << a[n] << ' ';
            for (int i = 1; i < n; i++) cout << a[i] << ' ';
            cout << '\n';
        }
    }
    
    return 0;
}