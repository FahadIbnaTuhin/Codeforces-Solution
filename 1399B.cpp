#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> c(n), o(n);

        for(int& it : c) cin >> it;
        for(int& it : o) cin >> it;

        int mnc = *min_element(c.begin(), c.end());
        int mno = *min_element(o.begin(), o.end());

        long long ans = 0;
        for(int i = 0; i < n; i++) {
            ans += max((c[i] - mnc), (o[i] - mno));
        }

        cout << ans << endl;
    }
    
    return 0;
}