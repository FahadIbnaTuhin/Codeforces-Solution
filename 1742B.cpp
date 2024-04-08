#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> arr;

        bool duplicate_found = false;
        for(int i = 0; i < n; i++) {
            int inp; cin >> inp;
            if (!duplicate_found) {
                if (find(arr.begin(), arr.end(), inp) == arr.end()) {
                    arr.push_back(inp);
                } else {
                    duplicate_found = true;
                }
            }
        }
        
        cout << (duplicate_found ? "NO" : "YES") << endl;
    }

    return 0;
}