#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int minimum = numeric_limits<int>::max();

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if (minimum > arr[i]) minimum = arr[i];
        }

        int count = 0;
        for(const int& i : arr) {
            count += (i - minimum);
        }

        cout << count << endl;
    }   

    return 0;
}