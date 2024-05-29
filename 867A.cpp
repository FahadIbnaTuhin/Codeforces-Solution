#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    string s;
    cin >> n >> s;

    int s_to_f = 0, f_to_s = 0;
    for (int i = 0; i < n - 1; i++) {
        string temp = s.substr(i, 2);
        if (temp == "SF") s_to_f++;
        else if (temp == "FS") f_to_s++;
    }

    cout << (s_to_f > f_to_s ? "YES\n" : "NO\n");

    return 0;
}