#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t; cin >> t;

    while(t--) {
        long long n; cin >> n;
        
        vector<long long> arr(2 * n);
        for(auto &it : arr) cin >> it; 

        sort(arr.begin(), arr.end());

        long long ans = 0;
        for(long long i = 0; i < 2 * n; i += 2) {
            ans += arr[i];
        }

        cout << ans << '\n';
    }   

    return 0;
}