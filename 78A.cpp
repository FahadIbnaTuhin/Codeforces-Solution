#include <bits/stdc++.h>

using namespace std;
 
int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<int, int> count;
    for(int i = 0; i < 3; i++) {
        char c; cin >> c;
        string s;
        getline(cin, s);
        s = c + s;

        for(auto u : s) {
            if (u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u') {
                ++count[i];
            }   
        }
    }
 
    cout << (count[0] == 5 && count[1] == 7 && count[2] == 5 ? "YES" : "NO") << '\n';

    return 0;
}
