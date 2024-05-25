#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> first_halve(n), second_halve(n);
    int fhs = 0, shs = 0;

    for (int i = 0; i < n; i++) {
       cin >> first_halve[i] >> second_halve[i];
       fhs += first_halve[i];
       shs += second_halve[i];
    }

    if (fhs % 2 == 0 && shs % 2 == 0) {
        cout << 0 << '\n';
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if ((first_halve[i] + second_halve[i]) % 2 == 1) {
            fhs -= first_halve[i] + second_halve[i];
            shs -= second_halve[i] + first_halve[i];
            if (fhs % 2 == 0 && shs % 2 == 0) {
                cout << 1 << '\n';
                return 0;
            }
        }
    }

    cout << -1 << '\n';

    return 0;
}