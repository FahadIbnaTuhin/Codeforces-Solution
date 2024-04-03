#include <bits/stdc++.h>
using namespace std;

int sum(string num) {
    int total = 0;
    for(int i = 0; i < size(num); i++) {
        total += (num[i] - '0'); // num[i] is char and it's value is in ascii, so we are subtracting from '0'(zero character)
    }
    return total;
}

int main() {
    int t; cin >> t;

    while(t--) {
        string inp; cin >> inp;

        if (sum(inp.substr(0, 3)) == sum(inp.substr(3))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}