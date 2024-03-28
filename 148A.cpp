#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) cin >> arr[i];

    int count = 0;
    for(int j = 1; j <= arr[4]; j++) {
        if (j % arr[0] == 0 || j % arr[1] == 0 || j % arr[2] == 0 || j % arr[3] == 0) {
            ++count;
        } 
    }

    cout << count << endl;

    return 0;
}