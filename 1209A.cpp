#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) continue;
        ++ans;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] != -1 && arr[j] % arr[i] == 0) {
                arr[j] = -1;
            }
        }
    }

    cout << ans << '\n';
    
    return 0;
}