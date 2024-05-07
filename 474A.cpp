#include <bits/stdc++.h>

using namespace std;

string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

void result(string &s, char c) {
    for(auto &u : s) {
        int index = keyboard.find(u);

        if (c == 'R') {
            u = keyboard[index - 1];
        } else {
            u = keyboard[index + 1];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    char c; cin  >> c;
    string s; cin >> s;

    result(s, c);

    cout << s << '\n';

    return 0;
}