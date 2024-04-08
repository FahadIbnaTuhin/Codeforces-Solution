#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> first_arr(n);
        vector<int> second_arr(n);

        for(int i = 0; i < n; i++) cin >> first_arr[i];
        for(int i = 0; i < n; i++) cin >> second_arr[i];

        sort(first_arr.begin(), first_arr.end());
        sort(second_arr.begin(), second_arr.end(), compare);

        for(int i = 0; i < k; i++) {
            if (first_arr[i] < second_arr[i]) {
                first_arr[i] = second_arr[i];
            } else {
                break;
            }
        } 

        int sum = accumulate(first_arr.begin(), first_arr.end(), 0);
        cout << sum << endl;
    }

    return 0;
}