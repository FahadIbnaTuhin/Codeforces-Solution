#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    string s = "<^>v<^>v<^"; // 3 to 7
    string ss = "v<^>";

    int ind = ss.find('<') + 3;
    int n = 3;

    char a1, a2;
    a1 = s[ind + 3];
    a2 = s[ind - 3];

    cout << a1 << ' ' << a2 << '\n';

    return 0;
}