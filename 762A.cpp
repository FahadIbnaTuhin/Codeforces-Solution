// https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> generateDivisors(ll n) {
    vector<ll> ans;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);

            if (n / i != i) {
                ans.push_back(n / i);
            }
        } 
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    ll n, k; cin >> n >> k;

    vector<ll> divisors = generateDivisors(n);
    if (divisors.size() < k) cout << -1 << '\n';
    else {
        cout << divisors[k - 1] << '\n';
    }

    return 0;
}