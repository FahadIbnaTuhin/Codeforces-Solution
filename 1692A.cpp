#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int timur, others, count = 0; cin >> timur;

        for(int i = 1; i < 4; i++) {
            cin >> others;

            if (timur < others) ++count;
        }
        cout << count << endl;
    }

    return 0;
}