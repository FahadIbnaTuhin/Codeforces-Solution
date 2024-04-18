#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n; cin >> n;
    int left_zeros = 0, left_ones = 0, right_zeros = 0, right_ones = 0;

    for(int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;

        if (l == 0) left_zeros += 1;
        else left_ones += 1;

        if (r == 0) right_zeros += 1;
        else right_ones += 1;
    }
        
    cout << (n - max(left_zeros, left_ones)) + (n - max(right_zeros, right_ones)) << '\n';

    return 0;
}