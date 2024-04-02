#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // using these, how much can we make
    int soda = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;

    int ans = min(min(soda, lime), salt) / n;
    cout << ans << endl;

    return 0;
}

// https://www.youtube.com/watch?v=eutCVptsiLQ