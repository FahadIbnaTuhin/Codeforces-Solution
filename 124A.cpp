#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b; cin >> n >> a >> b;

    if (n - a <= b) {
        cout << (n - a) << '\n';
    } else {
        cout << b + 1 << '\n';
    }
    
    return 0;
}

// no less than a = must a people will be in the front 
// no more than b = zero people can be in the behind

// gap between a & b - if gap > 0 then b + 1 because highest b people can be in the behind