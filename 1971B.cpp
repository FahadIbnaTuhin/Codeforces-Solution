#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        string dup = s;

        int i = 1;
        for( ; i < s.size(); i++) {
            if(dup[i - 1] != dup[i]) {
                swap(dup[i - 1], dup[i]);
                break;
            }
        } 

        if (dup == s) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << dup << '\n';
        }
    }

    return 0;
}