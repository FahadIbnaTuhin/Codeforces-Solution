#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n, k; cin >> n;
    
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        cin >> k;
        arr.push_back(k);
    }

    sort(arr.begin(), arr.end());

    for(int i: arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}