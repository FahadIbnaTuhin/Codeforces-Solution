#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;

    // Check if first digit is '4'
    if (s[0] == '4') { 
        cout << "NO\n";
        return 0;
    }

    // Check if all digits are '1' or '4'
    for(auto u : s) {
        if (u != '1' && u != '4') {
            cout << "NO\n";
            return 0;
        }
    }

    // Check if '4' appears continuously more than trice 
    if (s.find("444") != s.npos) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    return 0;
}