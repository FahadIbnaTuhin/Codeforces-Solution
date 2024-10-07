#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int lim = 1e5+123;
int partialXor[lim];

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    
    // partialXor[1]++;
    partialXor[0] = 3;
    partialXor[1] = 4;

    int n = 100;

    cout << partialXor[0] << ' ' << partialXor[1] << ' ';
    for (int i = 2; i <= n; i++) {
        partialXor[i] = partialXor[i - 2] ^ partialXor[i - 1];
        cout << partialXor[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}