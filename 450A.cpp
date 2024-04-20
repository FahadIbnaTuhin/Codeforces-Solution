#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] <= m) arr[i] = 0;
    }

    double high = 0; int ind = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] / m >= high) {
            high = arr[i] / (float)m;
            ind = i;
        }
    }

    cout << ind << '\n';

    return 0;
}