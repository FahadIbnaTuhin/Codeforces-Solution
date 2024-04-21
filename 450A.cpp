#include <bits/stdc++.h>

using namespace std;

bool all_elements_zero(vector<int> arr) {
    for(auto u : arr) {
        if (u != 0) {
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= m) arr[i] = 0;
        else arr[i] = arr[i] - m;
    }   

    // here make something which will execute until all the element of arr are 0
    int ans = (all_elements_zero(arr) ? n : 0);
    while(!all_elements_zero(arr)) {
        for(int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                if (arr[i] <= m) {
                    arr[i] = 0;
                    ans = i + 1;
                } else arr[i] = arr[i] - m;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}