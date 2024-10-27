#include <bits/stdc++.h> // 598A cf
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;

    while (t--) {
        ll n; cin >> n; 

        ll total_sum = (n * (n + 1)) / 2;

        ll sum_powers_of_two = 0;
        for (ll i = 1; i <= n; i *= 2) {
            sum_powers_of_two += i;
        }
        cout << total_sum - 2 * sum_powers_of_two << '\n';
    }

    return 0;
}