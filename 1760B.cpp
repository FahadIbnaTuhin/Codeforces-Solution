#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<char> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        int result = *max_element(arr.begin(), arr.end()) - 97 + 1;

        cout << result << endl;
    }

    return 0;
}