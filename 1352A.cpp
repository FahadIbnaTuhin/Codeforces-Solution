#include <bits/stdc++.h>
using namespace std;

bool is_round(string n) {
    bool round = (n[0] != 0) && all_of(n.begin() + 1, n.end(), [] (char c) { return c == '0'; });
    return round;
}

int main() {
    int t; cin >> t;
    string n;

    while(t--) {
        cin >> n;

        if (is_round(n)) {
            cout << "1\n" << n << endl;
        } else {
            vector<string> round_pieces;
            int count = 0;
            for(int i = 0; i < size(n); i++) {
                if (n[i] != '0') {
                    int required_zeros = size(n) - (i + 1);
                    round_pieces.push_back(n[i] + string(required_zeros, '0') + ' ');
                    ++count;
                }
            }
            cout << count << endl;
            for(string s: round_pieces) {
                cout << s;
            }
            cout << endl;
        }
    }
    return 0;
}

// first, we will check if it is a round number or not, if yes, then count++ and print that
// if not: 