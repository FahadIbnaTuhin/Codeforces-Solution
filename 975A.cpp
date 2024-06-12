#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    set<set<char>> sett;

    while (n--) {
        string s; cin >> s;
        set<char> sett2;

        for (auto &u : s) {
            sett2.insert(u);
        }

        sett.insert(sett2);
    }

    cout << sett.size() << '\n';

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n; cin >> n;
//     set<string> sett;

//     while (n--) {
//         string s; cin >> s;
//         string temp;

//         for (auto &u : s) {
//             if (temp.find(u) == temp.npos) {
//                 temp.push_back(u);
//             }
//         }

//         sort(temp.begin(), temp.end());
//         sett.insert(temp);
//     }

//     cout << sett.size() << '\n';

//     return 0;
// }