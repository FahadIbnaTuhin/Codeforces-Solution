#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n]; // 2 1 2
    int total_sum = 0, c_sum = 0, count = 0; // c_sum -> The sum of clever twin

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        total_sum += arr[i];
    }

    int half = total_sum / 2;
    sort(arr, arr + n); // 1 2 2
    
    for(int i = n - 1; i >= 0; i--) {
        c_sum += arr[i];
        ++count;
        if (c_sum > half) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}