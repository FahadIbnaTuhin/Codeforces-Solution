#include <bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, pile; cin >> guest >> host >> pile;

    string combined_names = guest + host;

    sort(combined_names.begin(), combined_names.end());
    sort(pile.begin(), pile.end());

    if (combined_names == pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}