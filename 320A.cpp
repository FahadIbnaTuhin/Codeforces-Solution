#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    string s; cin >> s;
    vector<string> magic = {"144", "14", "1"};

    while(!s.empty()) {
        if (find(magic.begin(), magic.end(), s.substr(0, 3)) != magic.end()) {
            s.erase(s.begin(), s.begin() + 3);
        } else if (find(magic.begin(), magic.end(), s.substr(0, 2)) != magic.end()) {
            s.erase(s.begin(), s.begin() + 2);
        } else if (find(magic.begin(), magic.end(), s.substr(0, 1)) != magic.end()) {
            s.erase(s.begin(), s.begin() + 1);
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}