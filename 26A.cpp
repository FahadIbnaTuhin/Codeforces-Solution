#include <bits/stdc++.h>

using namespace std;

vector<int> divisors(int n) {
    vector<int> ans;

    for(int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);

            if ((n / i) != i) {
                ans.push_back(n / i);
            }
        }
    }

    return ans;
}

bool is_prime(int n) {
    vector<int> v = divisors(n);
    return v.size() == 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;   

    int count = 0;
    for(int i = 6; i <= n; i++) { // from 6, almost prime divisors starts
        vector<int> v = divisors(i);
        int sz = v.size();

        if (sz < 4) continue;

        int cnt = 0;
        for(int i = 2; i < sz; i++) {
            if (is_prime(v[i])) {
                cnt++;
            }
        }

        if (cnt == 2) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}
// for: 21 as n answer will be 8

// 6 
// Divisor: 2 3
// Prime Divisor: 2 3

// 10
// Divisor: 2, 5
// Prime Divisor: 2 5

// 12
// Divisor: 2, 3, 4, 6
// Prime Divisor: 2, 3

// 14
// Divisor: 1, 14, 2, 7
// Prime Divisor: 2, 7

// 15
// Divisor: 1, 15, 3, 5
// Prime Divisor: 3, 5

// 18
// Divisor: 2 3 6 9 
// Prime Divisor: 2 3

// 20
// Divisor: 2 10 4 5
// Prime Divisor: 2 5

// 21
// Divisor: 3 7 9
// Prime Divisor: 3 7