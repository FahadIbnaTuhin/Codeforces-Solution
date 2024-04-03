#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, joined, count; cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> joined;

        if (5 - joined >= k) {
            ++count;
        }
    }

    cout << (count / 3) << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k; cin >> n >> k;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     sort(arr, arr + n); // 0 0 0 0 0 0 

//     int maximum, count = 0, i = 0;
//     while(i + 3 <= n) {
//         maximum = *max_element(arr + i, arr + i + 3);
//         if (5 - maximum >= k) {
//             ++count;
//             i += 3;
//         } else {
//             break;
//         }
//     }

//     cout << count << endl;

//     return 0;
// }

// 6 2
// 0 1 2 3 4 5