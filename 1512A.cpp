#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, inp; cin >> n;
        map<int, vector<int>> count;

        for(int i = 0; i < n; i++) {
            cin >> inp;
            count[inp].push_back(i + 1);
        }

        for(const auto& pair: count) {
            // cout << pair.second.size() << endl;
            if (pair.second.size() == 1) {
                cout << pair.second[0] << endl;
                break;
            }   
        }
    }

    return 0;
}