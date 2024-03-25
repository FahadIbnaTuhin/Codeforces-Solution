#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sum = 0; cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> k;
        sum += k;
    }

    double result = (sum / (100.0 * n)) * 100;
    cout << fixed << result << endl;

    return 0;
}