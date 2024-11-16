#include <bits/stdc++.h>  // 1203C cf
using namespace std;

typedef long long ll;

ll countDivisors(ll x) {
    ll cnt = 0;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            ++cnt;

            if (x / i != i) {
                ++cnt;
            }
        }
    }   
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);  
    int n; cin >> n;
    vector<ll> nums(n);
    for (ll &i : nums) cin >> i;

    ll gcd = nums[0];
    for (int i = 1; i < n; i++) {
        gcd = __gcd(gcd, nums[i]);
    }

    cout << countDivisors(gcd) << '\n';

    return 0;
}
// Generating prime number and then generating factors of all, then for each number their factors 
// and from there, the number of common divisors, will this work ?
// The problem requires finding the number of divisors that can divide each element in the 
// array. A good approach is to leverage the greatest common divisor (GCD). Here's the reasoning 
// and a solution approach:

// Key Insight
// For a divisor x to divide each element in the array, it must be a divisor of the GCD of 
// the array. This is because if x divides the GCD of all numbers, then it must also divide 
// each number in the array.

// So the task reduces to:
// Compute the GCD of all elements in the array.
// Count the divisors of this GCD.