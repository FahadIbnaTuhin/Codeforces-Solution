#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx = 2e5+123; // n≤2×10^5 for each test case. The sum of all n across all test cases 
// is also guaranteed to be at most 2e5. So, it is optimal to use 2e5+123 here.
int a[mx];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];

        map<ll, ll> mp;
        for (int i = 0; i < n; i++) ++mp[a[i]];

        vector<int> cnt(n + 1, 0);
        for (auto u : mp) {
            for (int j = u.first; j <= n; j += u.first) {
                cnt[j] += u.second;
            }
        }
        cout << *max_element(cnt.begin(), cnt.end()) << '\n';
    }
    
    return 0;
}   