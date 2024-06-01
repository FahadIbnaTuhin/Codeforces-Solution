#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, n; 
    cin >> a >> b >> n;
    
    if (a % b == 0) {
        cout << a;
        for (int i = 0; i < n; i++) {
            cout << 0;
        }
        cout << '\n';
        return 0;
    }

    int x = a * 10;
    int increment = b - (x % b);
    if (increment == b) increment = 0;

    int new_a = x + increment;

    if (new_a < x || x + 9 < new_a) {
        cout << -1 << '\n';
        return 0;
    }

    cout << new_a;
    for (int i = 1; i < n; i++) {
        cout << 0;
    }
    cout << '\n';

    return 0;
}