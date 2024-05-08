#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        
        int zeros = count(s.begin(), s.end(), '0');
        int ones = s.size() - zeros;
        int cut_possible = min(zeros, ones);

        cout << (cut_possible % 2 == 1 ? "DA\n" : "NET\n");
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// bool cut_possible(string &s) {
//     if (s.empty()) return false;

//     for(int i = 0; i < s.size() - 1; i++) {
//         if (s[i] != s[i + 1]) {
//             s.erase(s.begin() + i, s.begin() + i + 2);
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;

//     while(t--) {
//         string s; cin >> s;

//         bool alica_won = false;
//         while(cut_possible(s)) {
//             if (alica_won) alica_won = false;
//             else alica_won = true;
//         }

//         cout << (alica_won ? "DA\n" : "NET\n");
//     }

//     return 0;
// }