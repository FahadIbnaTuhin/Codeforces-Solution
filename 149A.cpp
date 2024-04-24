#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k; cin >> k;
    vector<int> arr(12);

    for(int i = 0; i < 12; i++) cin >> arr[i];

    sort(arr.rbegin(), arr.rend());

    int c = 0; 
    for(int i = 0; i < 12; i++) {
        if (k > 0) {
            k -= arr[i];
            ++c;
        } else {
            break;
        }
    }

    cout << (k > 0 ? -1 : c) << '\n';
    
    return 0;
}