#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int check_kth_bit(int x, int k) {
    return (x & (1 << k)) != 0;
}

int countBits(int x) {
    int cnt = 0;
    for (int i = 0; i < 32; i++) {
        if (check_kth_bit(x, i)) ++cnt;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x; cin >> x;
    cout << countBits(x) << '\n';

    return 0;
}