#include <bits/stdc++.h>

using namespace std; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> a(n);
        for (auto &u : a) cin >> u;

        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (is_sorted(a.begin(), a.end())) {
                ok = true;
                break;
            }
            rotate(a.begin(), a.begin() + 1, a.end());
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}

// bool ok = false;
// for (int it = 0; it < n; it++) {
//     ok |= is_sorted(a.begin(), a.end());
//     rotate(a.begin(), a.begin() + 1, a.end());
// }
// cout << (ok ? "YES" : "NO") << '\n';
// If is_sorted(a.begin(), a.end()) returns true, then ok will be set to true.
// If is_sorted(a.begin(), a.end()) returns false, then ok will remain unchanged if it was already true.


// #include<bits/stdc++.h>
// using namespace std;

// const int mx = 1e5+10;
// int a[mx];

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t; cin >> t;

//     while (t--) {
//         int n; cin >> n;
//         cin >> a[0];

//         int pos = 0;
//         for (int i = 1; i < n; i++) {
//             cin >> a[i];
//             if (pos == 0 && a[i - 1] > a[i]) {
//                 pos = i;
//             }
//         }

//         if (pos == 0) {
//             cout << "YES\n";
//             continue;
//         }

//         bool ok = true;
//         for (int i = pos; i < n - 1; i++) {
//             if (a[i] > a[i + 1]) {
//                 ok = false;
//                 break;
//             }
//         }

//         if (!ok || a[n - 1] > a[0]) {
//             cout << "NO\n";
//         } else {
//             cout << "YES\n";
//         }
//     }

//     return 0;
// }