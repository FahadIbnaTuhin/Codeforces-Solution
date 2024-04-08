#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> arr(n);
        for(int& x: arr) cin >> x;
        sort(arr.begin(), arr.end());


        int lowest = arr[n - 1] - arr[0];
        for(int i = 0; i < n - 1; i++) {
            int diff = (arr[i + 1] - arr[i]);
            if (lowest > diff) {
                lowest = diff;
            }
        }

        cout << lowest << endl;
    }

    return 0;
}