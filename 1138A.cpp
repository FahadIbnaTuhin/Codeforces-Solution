#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int stored, MX = 0, last;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (cnt == 0) {
                stored = arr[j];
                if (j > 0) MX = max(MX, j - i + 1);
            }

            if (stored == arr[j]) ++cnt;
            else {
                if (cnt == ) 
                else --cnt;
            }
        }
    }

    cout << MX << '\n';
    
    return 0;
}