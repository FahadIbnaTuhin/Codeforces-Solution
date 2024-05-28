#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0, fi, fj;
    for (int i = 0; i < n; i++) {
        int ones = 0, zeros = 0;
        for (int j = i; j < n; j++) {
            if (a[j] == 1) ones++;
            else zeros++;
            if (ans < zeros - ones) {
                ans = zeros - ones;
                fi = i;
                fj = j;
            }
        }
    }

    int fans = 0;
    for (int i = 0; i < n; i++) {
        if (fi <= i && i <= fj) {
            if (a[i] == 0) {
                fans++; 
            }
        }
        else if (a[i] == 1) fans++;
    }

    cout << fans << '\n';

    return 0;
}