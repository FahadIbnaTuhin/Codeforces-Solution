#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;

    ll ans;
    if (n & 1) {
        ans = (n / 2) - n;
    } else {
        ans = n / 2;
    }
    cout << ans << '\n';

    return 0;
}

// observe this:

// when all odd is negative
// for even: f(4) = -1+2 -3+4 = 1 +1 = 2  formula: n / 2
// for odd: f(5) = -1+2-3+4 -5 = 1+1 -5 = 2 -5 = -3 formula: (n / 2) - n

// when all even is negative
// for even: f(4) = 1-2+3-4 = -1 -1 = -2 formula: -n/2
// for odd: f(5) = 1-2+3-4 +5 = -1-1 +5 = -2 +5 = 3 formula: -(n/2) + n


// Not used this, as it is giving tle.
// The sum of the first n odd numbers is simply n^2.
// 1 = 1^2
// 1 + 3 = 4 = 2^2
// 1 + 3 + 5 = 9 = 3^2
// 1 + 3 + 5 + 7 = 16 = 4^2
// 1 + 3 + 5 + 7 + 9 = 25 = 5^2