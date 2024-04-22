#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;

    int prev; cin >> prev;
    long long int c = prev - 1; 

    for(int i = 1; i < m; i++) {
        int current; cin >> current;

        if (prev <= current) {
            c += (current - prev);
        } else if (prev > current) {
            c += (n - prev) + current;
        }

        prev = current;
    }

    cout << c << '\n';

    return 0;
}