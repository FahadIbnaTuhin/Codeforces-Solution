#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    int rest = 240 - k;
    int sum = 0, count = 0;

    for(int i = 1; i <= n; i++) {
        sum += (5 * i);

        if (sum > rest) {
            break;
        }
        ++count;
    }

    cout << count << endl;

    return 0;
}