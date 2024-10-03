#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, distressed = 0; 
    ll x;
    cin >> n >> x;

    while (n--) {
        char sign;
        int d; 
        cin >> sign >> d;

        if (sign == '+') {
            x += d;
        } else {
            if (d > x) distressed++;
            else x -= d;
        }
    }   
    
    cout << x << ' ' << distressed << '\n';
    
    return 0;
}

// When adding numbers like 10^9 multiple times (e.g., 7 billion), you exceed the upper limit of int,
// which causes integer overflow, leading to incorrect results (like negative numbers or wrapping).
// To handle such larger values, I recommended using long long