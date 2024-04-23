#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;

    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;

        if (a < 0) arr.push_back(a * - 1);
    }
    
    sort(arr.rbegin(), arr.rend());

    int sum = 0;
    int sz = arr.size();
    for(int i = 0; i < min(m, sz); i++) {
        sum += arr[i];
    }

    cout << sum << '\n';
    
    return 0;
}