#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) {
        int num = 0;

        for(int i = 0; i < 5; i++) {
            char c; cin >> c;

            if (c == 'A') ++num;
            else --num;
        }

        cout << (num > 0 ? 'A' : 'B') << '\n';
    }
}