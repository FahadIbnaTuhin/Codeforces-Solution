#include <bits/stdc++.h>

using namespace std;

const int mx = 1e6+10;
int a[mx], b[mx];
bool v[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 

    int n, m; cin >> n >>m;

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = n; i >= 0; i--) {
        if (!v[a[i]]) {
            b[i]++;
        }
        v[a[i]] = true;
    }

    for (int i = n; i >= 0; i--) {
        b[i] += b[i + 1];
    }

    while (m--) {
        int l; cin >> l;

        cout << b[l] << '\n';
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// const int mx = 1e6+10;
// int a[mx];

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0); 

//     int n, m; cin >> n >> m;

//     for (int i = 1; i <= n; i++) cin >> a[i];

//     int cnt = 0;
//     set<int> se;
//     map<int, int> mp;

//     for (int i = n; i >= 1; i--) {
//         if (se.count(a[i])) {
//             mp[i] = cnt;
//             continue;
//         }
//         cnt++;
//         mp[i] = cnt;
//         se.insert(a[i]);
//     }

//     while (m--) {
//         int l; cin >> l;

//         cout << mp[l] << '\n';
//     }

//     return 0;
// }