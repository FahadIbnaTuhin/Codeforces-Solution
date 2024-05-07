#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<string, int> m;
    int n; cin >> n;
    string s; cin >> s;

    string max_key; 
    int max_val = 0;
    for(int i = 0; i < n - 1; i++) {
        string key = s.substr(i, 2);
        m[key] += 1;
        
        if (max_val < m[key]) {
            max_key = key;
            max_val = m[key];
        }
    }

    cout << max_key << '\n';

    return 0;
}