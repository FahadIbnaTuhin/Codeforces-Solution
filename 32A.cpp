#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 1023;
ll a[mx];
ll n, d; 

ll calc(ll i) {
    ll (&arrA)[mx] = a; // Create local references for global arrays to see global arr using debugger
    int low = i + 1, high = n - 1;
    ll ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] - a[i] <= d) {
            ans = mid - i;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        cnt += 2 * calc(i);
    }

    cout << cnt << '\n';

    return 0;
}

// 6 10
// 4 6 4 1 9 4