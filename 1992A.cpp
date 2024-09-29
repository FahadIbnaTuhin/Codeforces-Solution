#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        vector<int> arr(3);
        for (int &i : arr) cin >> i;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < 5; i++) {
            arr[0]++;
            sort(arr.begin(), arr.end());
        }

        cout << arr[0] * arr[1] * arr[2] << '\n';
    }
    
    return 0;
}

// Priority queue style
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;

//     while (t--) {
//         priority_queue<int, vector<int>, greater<int>> pq;
//         for (int i = 0; i < 3; i++) {
//             int a; cin >> a;
//             pq.push(a);
//         }

//         for (int i = 0; i < 5; i++) {
//             int temp = pq.top();
//             pq.pop();
//             pq.push(temp + 1);
//         }

//         int mult = 1;
//         while (!pq.empty()) {
//             mult *= pq.top();
//             pq.pop();
//         }   

//         cout << mult << '\n';
//     }
    
//     return 0;
// }