#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    pair<int, int> p;
    int low = INT_MAX;
    for(int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i] - arr[i + 1]);
        if (low > diff) {
            low = diff;
            p = {i + 1, i + 1 + 1};
        }   
    }
    
    if (low > abs(arr[0] - arr[n - 1])) p = {1, n};

    cout << p.first << ' ' << p.second << '\n';

    return 0;
}