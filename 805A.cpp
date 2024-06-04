#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll l, r; cin >> l >> r;
    
    cout << (l == r ? l : 2) << '\n';

    return 0;
}

// TLE, right but can't handle big input
// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// vector<ll> generate_divisors(ll n) {
//     vector<ll> ans;

//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             ans.push_back(i);

//             if (n / i != i) {
//                 ans.push_back(n / i);
//             }
//         }
//     }

//     return ans;
// }

// int main() {
//     ll l, r; cin >> l >> r;
//     unordered_map<ll, ll> mp;

//     for (ll i = l; i <= r; i++) {
//         vector<ll> divisors = generate_divisors(i);
//         for (auto &u : divisors) mp[u]++;
//     }

//     priority_queue<pair<ll, ll>> pq;
//     for (auto &u : mp) {
//         pq.push({u.second, u.first});
//     }

//     pq.pop();
//     cout << pq.top().second << '\n';

//     return 0;
// }