#include <bits/stdc++.h>
 
using namespace std;
 
int a[128];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    char c1; cin >> c1;
    string s1;
    getline(cin, s1);
    s1 = c1 + s1;

    char c2; cin >> c2;
    string s2;
    getline(cin, s2);
    s2 = c2 + s2;

    for(int u : s1) {
        if (65 <= u && u <= 122) {
            a[u]++;
        }
    }

    for(int u : s2) {
        if (65 <= u && u <= 122) {
            if (a[u] > 0) {
                --a[u];
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    return 0;
}