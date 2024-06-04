#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 2e5+5;
int n; 
ll a[N], b[N], c[N];

bool check(int x) {
    int t = 0;

    for (int i = 1; i <= n; i++) {
        if (i == x) continue;
        c[++t] = a[i];
    }

    int last = 1;
    for (int i = 1; i < n - 1; i++) {
        int y = __gcd(c[i], c[i + 1]);
        if (last > y) return false;
        last = y;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // const int N = 200;
    // int n; 
    // vector<ll> a(N, 0), b(N, 0), c(N, 0);
    // // ll a[N] = {}, b[N] = {}, c[N] = {};

    int t; cin >> t;
    
    while (t--) {
        cin >> n;

        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) b[i] = __gcd(a[i], a[i + 1]);

        int x = -1; 
        for (int i = 1; i < n - 1; i++) {
            if (b[i] > b[i + 1]) {
                x = i;
                break;
            }
        }

        if (x == -1) {
            cout << "YES\n";
        } 
        // else if (check(a, c, n, x) || check(a, c, n, x + 1) || check(a, c, n, x + 2)) {
        else if (check(x) || check(x + 1) || check(x + 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}