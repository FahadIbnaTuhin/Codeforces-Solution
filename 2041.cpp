#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool arr[6];

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    for (int i = 1; i <= 4; i++) {
        int a; cin >> a;
        arr[a] = 1;
    }

    for (int i = 1; i <= 5; i++) {
        if (!arr[i]) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}