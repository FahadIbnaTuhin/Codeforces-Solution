#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, alice = 0, bob = 0; cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.rbegin(), arr.rend()); // for reversing

        for(const int& i: arr) {
            if (alice <= bob) {
                alice += i;
            } else {
                bob += i;
            }
        }

        cout << (alice == bob ? "YES" : "NO") << endl;
    }   

    return 0;
}

// If arr[5] not found inside the map, then for arr[5] you will get the value 0

// 3
// 2 1 1
// Expected yes