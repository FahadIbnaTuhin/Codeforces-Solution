#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> generate_primes(ll n) {
    vector<bool> is_prime(n + 1, true);
    vector<ll> primes;

    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);

            if (i <= sqrt(n)) {
                for (ll j = i * i; j <= n; j += i) {
                    is_prime[j] = false;
                }
            }
        }
    }

    return primes;
}

bool is_t_prime(ll a, const vector<ll> &t_primes) {
    return binary_search(t_primes.begin(), t_primes.end(), a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll limits = 1e6+10;
    vector<ll> primes = generate_primes(limits);

    // Generate T-primes (squares of primes)
    vector<ll> t_primes;
    for (auto &u : primes) {
        t_primes.push_back(u * u);
    }

    int t; cin >> t;   

    while (t--) {
        ll a; cin >> a; 

        cout << (is_t_prime(a, t_primes) ? "YES\n" : "NO\n");
    }

    return 0;
}

// A number is a T-prime if and only if it is a perfect square of a prime number. 