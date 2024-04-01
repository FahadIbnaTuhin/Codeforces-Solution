#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    int arr[m];
    for(int i = 0; i < m; i++) cin >> arr[i];

    sort(arr, arr + m);

    int lowest = 1000;
    for(int i = 0; i <= (m - n); i++) {
        vector<int> subarr(arr + i, arr + i + n);
        int max_e = *max_element(subarr.begin(), subarr.end());
        int min_e = *min_element(subarr.begin(), subarr.end());

        if ((max_e - min_e) < lowest) {
            lowest = max_e - min_e;
        }
    }

    cout << lowest << endl;
    
    return 0;
}