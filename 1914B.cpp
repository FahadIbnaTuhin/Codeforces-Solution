#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        vector<int> arr(n);
        for (int i = k; i >= 0; i--) {
            arr[i] = n--;
        }       

        for (int i = k + 1; n > 0; i++) {
            arr[i] = n--;
        }

        for (int i : arr) cout << i << ' ';
        cout << '\n';
    }
    
    return 0;
}