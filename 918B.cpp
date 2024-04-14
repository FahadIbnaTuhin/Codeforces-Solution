#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    map<string, string> database;
    
    for(int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        database[b] = a;
    }

    for(int i = 0; i < m; i++) {
        string a, b; cin >> a >> b;

        // cout << a << " " << b << " #" << database[0, b.substr(0, b.size() - 1)] << '\n';

        b.pop_back(); // better approach
        cout << a << " " << b << "; #" << database[b] << '\n';
    }

    return 0;
}