#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll lcm(ll a, ll b) {
    return a * (b / __gcd(a, b));
}

void solve() {
    ll a, b; cin >> a >> b;
    ll ans = lcm(a, b);
    if (ans == b) ans *= (b / a);
    cout << ans << '\n';
}
// remember question says, b is always strictly greater than a[a < b]
// if (ans == b) ans *= 2; it is wrong because suppose for input (3, 9). LCM(3, 9) = 9
// and 9 * 2 = 18 which is divisible by 3 and 9 but 3, 9 is not the largest divisor. 
// 18: 2, 3, 6, 9 [6 and 9 is the largest divisor]. So, ans *= (b / a), then, ans = 9 * (9 / 3) = 27
// 27: 3, 9

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);  
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++) solve();

    return 0;
}