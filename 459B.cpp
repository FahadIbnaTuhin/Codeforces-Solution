#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n; cin >> n;

    vector<long long> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end());
    long long maximum = b[n - 1];
    long long minimum = b[0];
    long long diff = maximum - minimum;

    if (maximum == minimum) {
        cout << diff << ' ' << n * (n - 1) / 2 << '\n';
        return 0;
    }

    long long count_max = count(b.begin(), b.end(), maximum);
    long long count_min = count(b.begin(), b.end(), minimum);

    cout << diff << ' ' << count_max * count_min << '\n';

    return 0;
}