#include <iostream>
#include <map>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        map<int, int> arr;

        for(int i = 0; i < 3; i++) {
            int n; cin >> n;
            ++arr[n];
        }

        for(const auto& pair: arr) {
            if (pair.second == 1) {
                cout << pair.first << endl;
                break;
            }
        }
    }   

    return 0;
}