#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int max = arr[0], min = arr[0], count = 0, i = 1, changed = 0;
    // cout << *max_element(arr, arr + n) << endl;
    while (arr[0] != *max_element(arr, arr + n)) {
        if (i == 1) {
            if (arr[i] > max) {
                max = arr[i];
            } 
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        if (changed == 0) {
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
            ++changed;
        }
        if (i == (n - 1)) changed = 0;
        ++i;
    }

    cout << max << " " << min << endl;

    for(int i: arr) {
        cout << i << " ";
    } 

    cout << endl << count << endl;

    return 0;
}