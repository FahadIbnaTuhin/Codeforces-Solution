#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[4];
    for (int i = 0; i < 4; i++) cin >> arr[i];
    sort(arr, arr + 3);

    int ans = 0;
    for (int i = 0; i < 2; i++) {
        if (arr[i + 1] - arr[i] < arr[3]) {
            ans += (arr[3] - (arr[i + 1] - arr[i]));
        }
    }

    cout << ans << '\n';
    
    return 0;
}