#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int a, b; cin >> a >> b;
    cout << "3\n" << b << ' ' << b << ' ' << 3 * a - 2 * b << '\n';
    return 0;
}

// For the mean to equal a, the equation becomes: sum of elements = a * n
// Let the array be 
// Let the array be [b, b, x] where x is calculated to satisfy the mean: a * n = b + b + x
//                                                                      x = 3a - 2b