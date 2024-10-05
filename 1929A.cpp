#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 120;
int arr[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        
        for (int i = 1; i <= n; i++) cin >> arr[i];

        sort(arr + 1, arr + 1 + n);

        ll sum = 0;
        for (int i = 2; i <= n; i++) sum += arr[i] - arr[i - 1];

        cout << sum << '\n';
    }
    
    return 0;
}