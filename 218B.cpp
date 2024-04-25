#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int n, m; cin >> n >> m;

    int arr[m];
    for(int i = 0; i < m; i++) cin >> arr[i];

    sort(arr, arr + m);
    int min_sum = 0, num = arr[0], k = 0;
    for(int i = 0; i < n; i++) {
        min_sum += num;
        --num;

        if (num == 0) {
            num = arr[++k];
        }
    }
    // cout << min_sum << '\n';

    sort(arr, arr + m, greater<int>()); // 2 1 1
    int max_sum = 0;
    while(n--) {
        max_sum += arr[0];
        --arr[0];
        for(int i = 1; i < m; i++) {
            if (arr[i] <= arr[i - 1]) {
                break;
            }
            swap(arr[i], arr[i - 1]);
        }
    }

    cout << max_sum << ' ' << min_sum << '\n';
    
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n, m; cin >> n >> m;

//     vector<int> arr(m);
//     for(int i = 0; i < m; i++) cin >> arr[i];

//     vector<int> temp = arr;

//     int max_sum = 0;
//     for(int i = 0; i < n; i++) {
//         auto it = max_element(temp.begin(), temp.end());
//         if (*it == 1) {
//             max_sum++;
//             temp.erase(it);
//         } else {
//             max_sum += *it;
//             --*it;
//         }
//     }

//     temp = arr;
//     int min_sum = 0;
//     for(int i = 0; i < n; i++) {
//         auto it = min_element(temp.begin(), temp.end());
//         if (*it == 1) {
//             min_sum++;
//             temp.erase(it);
//         } else {
//             min_sum += *it;
//             --*it;
//         }
//     }
    
//     cout << max_sum << ' ' << min_sum << '\n';
    
//     return 0;
// }