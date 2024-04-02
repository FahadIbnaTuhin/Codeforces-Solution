#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ds = 0, ss = 0; cin >> a >> b; // ds: different socks, ss: same socks

    while (a > 0 && b > 0) {
        ++ds;
        --a;
        --b;
    } 
    
    if (a > 0) {
        ss += (a / 2);
    } else {
        ss += (b / 2);
    }

    cout << ds << " " << ss << endl;

    return 0;
}