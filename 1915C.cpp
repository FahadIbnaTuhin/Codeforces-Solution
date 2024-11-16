#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        
        double sum = 0;
        for (int i = 1; i <= n; i++) {
            int a; cin >> a;
            sum += a;
        }

        sum = sqrt(sum);
        if (sum == (int)sum) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}