#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    
    string inp;
    vector<string> arr;
    int groups = 1;

    cin >> inp; // Read the first input separately
    arr.push_back(inp);

    for(int i = 1; i < n; i++) {
        cin >> inp;

        // cout << arr.back() << endl;
        if (arr.back() != inp) {
            ++groups;
        }
        arr.push_back(inp);
    }

    cout << groups << endl;

    return 0;
}