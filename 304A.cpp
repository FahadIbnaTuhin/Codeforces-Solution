#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;    
    double c;
    ll cnt = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            c = a * a + b * b;
            c = sqrt(c);

            if (floor(c) == c && c <= n) {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}