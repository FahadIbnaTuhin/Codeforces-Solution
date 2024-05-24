#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int a, b, c; cin >> a >> b >> c;

    map<int, int> data;
    int o = 1;
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                if (!data[i * j * k]) {
                    data[i * j * k] = o;
                    sum += data[i * j * k];
                    o++;
                } else {
                    sum += data[i * j * k];
                }
            }
        }
    }

    cout << sum << '\n';

    return 0;
}