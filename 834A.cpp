#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s = "<^>v<^>v<^"; // 3 to 7
    string ss = "v<^>";

    char a, b;
    ll n; 
    cin >> a >> b >> n;

    n %= 4;
    int ind = ss.find(a) + 3;

    char clockwise  = s[ind + n], counterclockwise  = s[ind - n];
    // cout << clockwise << ' ' << counterclockwise << '\n';

    if (clockwise == counterclockwise) {
        cout << "undefined\n";
    }
    else if (clockwise == b) {
        cout << "cw\n";
    } 
    else {
        cout << "ccw\n";
    }

    return 0;
}