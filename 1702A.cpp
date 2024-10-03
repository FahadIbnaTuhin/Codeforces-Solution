#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int numberOfDigits(int x) {
    if (x == 0) return 1;
    int n = 0;

    while (x != 0) {
        ++n;
        x /= 10;
    }

    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int m; cin >> m;
        
        int nOD = numberOfDigits(m);

        int subs = pow(10, nOD - 1);
        cout << (m - subs) << '\n';
        
    }    
    
    return 0;
}

// // can use also built-in function to get the number of digits 
// string s = to_string(m); 
// int nOD = s.size();