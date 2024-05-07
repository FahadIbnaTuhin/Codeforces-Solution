#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;

    int zeros = count(s.begin(), s.end(), '0');

    int minimum = min(zeros, n - zeros);

    cout << n - 2 * minimum << '\n';

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n; cin >> n;
//     string s; cin >> s;

//     for(int i = 0; i < s.size() - 1; ) {
//         if (s.size() < 2) break;
//         else if (s[i] != s[i + 1]) {
//             s.erase(s.begin() + i, s.begin() + i + 2);
//             if (i == 0) i = 0;
//             else i -= 1;
//         } else {
//             i++;
//         }
//     }

//     cout << s.size() << '\n';

//     return 0;
// }