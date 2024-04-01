#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int free_polices = 0, count = 0, inp;

    for(int i = 0; i < n; i++) {
        cin >> inp;

        if (inp == -1) {
            if ((free_polices + inp) > -1) {
                --free_polices;
            } else {
                ++count;
            }
        } else {
            free_polices += inp;
        }
    }

    cout << count << endl;

    return 0;
}