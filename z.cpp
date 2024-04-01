#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> arr(m);

    for(int i = 0; i < m; i++) cin >> arr[i];

    int index = (m - n) / 2;

    sort(arr.begin(), arr.end());

    int maximum = *max_element(arr.begin() + index, arr.begin() + index + n + 1);
    int minimum = *min_element(arr.begin() + index, arr.begin() + index + n + 1);

    cout << (maximum - minimum) << endl;

    return 0;
}