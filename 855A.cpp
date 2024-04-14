#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    map<string, int> database;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if (database[s]) cout << "YES\n";
        else cout << "NO\n";

        ++database[s];
    }
    
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main() {        
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n; cin >> n;
//     vector<string> database;

//     for(int i = 0; i < n; i++) {
//         string s; cin >> s;

//         if(find(database.begin(), database.end(), s) == database.end()) {
//             cout << "NO\n";
//             database.push_back(s);
//         } else {
//             cout << "YES\n";
//         }
//     }

//     return 0;
// }