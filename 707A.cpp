#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    map<char, int> arr;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char inp; cin >> inp;
            ++arr[inp];
        }
    }

    if (arr['C'] > 0 || arr['M'] > 0 || arr['Y'] > 0) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}