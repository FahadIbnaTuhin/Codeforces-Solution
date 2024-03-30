#include <iostream>
using namespace std;

int main()
{
    int n, s, count = 0; cin >> n;

    int arr[5] {}; // We will ignore the first index, use the rest
    for(int i = 1; i <= n; i++) {
        cin >> s;
        if (s == 1) {
            arr[1] += 1;
        } else if (s == 2) {
            arr[2] += 1;
        } else if (s == 3) {
            arr[3] += 1;
        } else {
            arr[4] += 1;
        }
    }
    
    // For 4
    count += arr[4];

    // For 3 & 1
    if (arr[3] <= arr[1]) {
        count += arr[3];
        arr[1] = arr[1] - arr[3];
        arr[3] = 0;
    }

    if (arr[3] > arr[1]) {
        count += arr[1];
        arr[3] = arr[3] - arr[1];
        arr[1] = 0;
    }

    if (arr[3] > 0) {
        count += arr[3];
        arr[3] = 0;
    }

    if (arr[2] > 0) {
        count += arr[2] / 2;
        arr[2] %= 2;
    }
    
    int left = arr[1] + (arr[2] * 2);
    if (left <= 4 && left > 0) {
        count += 1;
    } else if (left % 4 != 0) {
        count += (left / 4) + 1;
    } else {
        count += (left / 4);
    }
    
    cout << count << endl;

    return 0;
}

// https://www.youtube.com/watch?v=VvhJ99LRwjc