#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n][3];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }

    int arr0 {}, arr1 {}, arr2 {};
    for(int i = 0; i < n; ++i) {
        arr0 += arr[i][0];
        arr1 += arr[i][1];
        arr2 += arr[i][2];
    }

    if (arr0 == 0 && arr1 == 0 && arr2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
// if vector addition. For 0i+0j+oz / (0, 0, 0) you will get YES, otherwise NO