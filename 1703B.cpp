#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, count = 0; cin >> n;
        vector<char> arr;

        for(int i = 0; i < n; i++) {
            char inp; cin >> inp;
            
            if (find(arr.begin(), arr.end(), inp) == arr.end()) {
                arr.push_back(inp);
                count += 2;
            } else {
                ++count;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}