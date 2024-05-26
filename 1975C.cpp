#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 1e5+10;
int a[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;

        for (int i = 0; i < n; i++) cin >> a[i];

        ll ans = min(a[0], a[1]);

        if (n == 2) {
            cout << ans << '\n';
        } else {
            // instead of sorting later, if you sort the whole arr input here, it will change the original 
            // order which will affect the right answer. 
            for (int i = 0; i < n - 2; i++) {
                vector<ll> temp;
                for (int j = 0; j < 3; j++) {
                    temp.push_back(a[j + i]);
                }
                sort(temp.begin(), temp.end());
                ans = max(ans, temp[1]);
            }

            cout << ans << '\n';
        }
    }

    return 0;
}