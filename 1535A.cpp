#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int arr[4];
        for(int i = 0; i < 4; i++) cin >> arr[i];

        int arr2[2] = {max(arr[0], arr[1]), max(arr[2], arr[3])};

        sort(arr, arr + 4, greater<int>()); // for reversing
        sort(arr2, arr2 + 2, greater<int>());

        if (arr[0] == arr2[0] && arr[1] == arr2[1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}