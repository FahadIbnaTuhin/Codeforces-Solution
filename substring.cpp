#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);   
    string word = "Fahad";
    int n = word.size();

    for(int i = 0; i < n; i++) {
        for(int len = 1; i + len <= n; len++) {
            cout << word.substr(i, len) << '\n';
        }
    }

    return 0;
}