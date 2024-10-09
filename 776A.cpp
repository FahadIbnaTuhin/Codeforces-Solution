#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b; cin >> a >> b;
    int n; cin >> n;

    while (n--) {
        cout << a << ' ' << b << '\n';
        string c, d; cin >> c >> d;
        if (c == a) a = d;
        else b = d;
    }
    cout << a << ' ' << b << '\n';
    
    return 0;
}