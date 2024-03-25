#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k; cin >> n >> k;

    if (k <= (n + 1) / 2) {
        cout << (k * 2 - 1) << endl;
    } else {
        cout << ((k - (n + 1) / 2) * 2) << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// int main() {
//     int n, k; cin >> n >> k;

//     vector<int> arr;
//     vector<int> temp;
//     for(int i = 1; i <= n; i++) {
//         if (i % 2 != 0) {
//             arr.push_back(i);
//         } else {
//             temp.push_back(i);
//         }
//     }

//     arr.insert(arr.end(), temp.begin(), temp.end());
    
//     cout << arr[k - 1] << endl;

//     return 0;
// }