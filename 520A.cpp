#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    set<char> arr;

    if (size(s) >= 26) {
        for(int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32; // add 32 with any letter to get the lower character because 'a' - 'A' = 32 / 'A' + 32 = 'a'
            arr.insert(s[i]);            
        }
    } else {
        cout << "NO" << endl;
        return 0;
    }

    if (arr.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// #include <iostream>
// #include <cctype>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n; cin >> n;
//     string s; cin >> s; 
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     string letters {"abcdefghijklmnopqrstuvwxyz"};

//     if (size(s) >= 26) {
//         for(char l: letters) {
//             int count = 0;
//             for(char d: s) {
//                 if (l == d) {
//                     ++count ;
//                     break;
//                 }
//             }
//             if (count == 0) {
//                 cout << "NO" << endl;
//                 return 0;
//             }
//         }

//         cout << "YES" << endl;

//     } else {
//         cout << "NO" << endl;
//         return 0;
//     }

//     return 0;
// }