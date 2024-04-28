#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(int i, string s) {
    if (i > s.size() / 2) return true;
    if (s[i] != s[s.size() - 1 - i]) return false;
    return is_palindrome(i + 1, s);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << is_palindrome(0, "") << '\n';
    string s; cin >> s;

    if (!is_palindrome(0, s)) {
        cout << "Second" << '\n';
        return 0;
    }

    short c = 1;
    while(!s.empty()) {
        int di = s.size() / 2;
        s.erase(s.begin() + di, s.begin() + di + 1);
        if (is_palindrome(0, s)) {
            if (c == 0) c = 1;
            else c = 0;
        } else {
            break;
        }
    }

    cout << (c == 0 ? "First\n" : "Second\n");

    return 0;
}

// aabb
// Output
// Second
// Answer
// First