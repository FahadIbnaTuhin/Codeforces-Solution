#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n]; 
    int prev, current; cin >> prev;

    int count = 1, max_count = count;

    for(int i = 1; i < n; i++) {
        cin >> current;
        if (prev <= current) {
            ++count;
        } else {
            max_count = max(max_count, count);
            count = 1;
        }
        prev = current;
    }
    
    max_count = max(max_count, count);
    
    cout << max_count << endl;

    return 0;
}

// Increasing: 1, 3, 5, 7, 9
// Non-increasing: 5, 4, 4, 2, 0
// Decreasing: 10, 8, 6, 4, 2
// Non-decreasing: 2, 2, 4, 4, 6, 8