#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 1e8;
bitset<mx> isPrime;
vector<int> primes;

void primeGen(int n) {
    for (int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int limit = 100000;
    primeGen(limit);

    int n; cin >> n;

    if (n <= 2) cout << 1 << '\n';
    else cout << 2 << '\n';

    for (int i = 1; i <= n; i++) {
        if (isPrime[i + 1] == 1) cout << 1 << ' ';
        else cout << 2 << ' ';
    }
    cout << '\n';

    return 0;
}