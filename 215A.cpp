#include <bits/stdc++.h>

using namespace std;

bool is_divisible(int numerator, int denominator) {
    return (numerator % denominator == 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int m; cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++) cin >> arr2[i];

    int max_ratio = 0, max_count = 0;
    for(auto u : arr) {
        for(auto v : arr2) {
            if (is_divisible(v, u)) {
                int ratio = v / u;

                if (ratio > max_ratio) {
                    max_ratio = ratio;
                    max_count = 1;
                } else if (ratio == max_ratio) {
                    ++max_count;
                }
            }
        }
    }

    cout << max_count << '\n';
    
    return 0;
}