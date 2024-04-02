#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    for(int i = 0; i < 3; i++) cin >> arr[i];

    sort(arr, arr + 3);

    cout << ((arr[1] - arr[0]) + (arr[2] - arr[1])) << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[3];
//     for(int i = 0; i < 3; i++) cin >> arr[i];

//     sort(arr, arr + 3);

//     int middle = arr[1];

//     int min_distance = 0;
//     for(int i: arr) {
//         min_distance += abs(i - middle);
//     }

//     cout << min_distance << endl;

//     return 0;
// }