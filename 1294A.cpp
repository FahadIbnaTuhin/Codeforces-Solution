#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int arr[4];
        for(int i = 0; i < 4; i++) cin >> arr[i];

        int maximum = max(max(arr[0], arr[1]), arr[2]);

        int sum = 0;
        for(int i = 0; i < 3; i++) {
            sum += (maximum - arr[i]);
        }

        if (sum > arr[3]) {
            cout << "NO" << endl;
        } else {
            int rest = arr[3] - sum;
            if (rest % 3 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }   

    return 0;
}