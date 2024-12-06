#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> a(n + 1), prefixSum(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    ll ansPos = 1;
    ll sum = LLONG_MAX;
    for (ll i = k; i <= n; i++) {
        ll currSum = prefixSum[i] - prefixSum[i - k];
        if (sum > currSum) {
            sum = currSum;
            ansPos = i - k + 1;
        }
    }
    cout << ansPos << '\n';

    return 0;
}