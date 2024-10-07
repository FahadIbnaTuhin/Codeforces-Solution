#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, d; cin >> n >> d;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll ans = 2;
    for (int i = 0; i < n - 1; i++) {   
        int diff = arr[i + 1] - arr[i];
        if (diff == 2 * d) ans++;
        else if (diff > 2 * d) ans += 2;
    }   

    cout << ans << '\n';
    
    return 0;
}