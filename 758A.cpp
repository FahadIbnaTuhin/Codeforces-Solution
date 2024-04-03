#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    int maximum = *max_element(arr.begin(), arr.end());

    int minimum_burles = 0;
    for(int i : arr) {
        if (i != maximum) {
            minimum_burles += (maximum - i);
        }
    }

    cout << minimum_burles << endl;

    return 0;
}