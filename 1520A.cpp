#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<char> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        bool is_suspicious = false;
        vector<char> newarr;
        for(int i = 0; i < arr.size(); i++) {
            if (find(newarr.begin(), newarr.end(), arr[i]) == newarr.end()) {
                newarr.push_back(arr[i]);
            } else {
                if (arr[i - 1] != arr[i]) {
                    is_suspicious = true;
                    break;
                }
            }
        }
        cout << (is_suspicious ? "NO" : "YES") << endl;
    }

    return 0;
}
