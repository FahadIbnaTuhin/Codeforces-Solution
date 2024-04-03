#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; cin >> n;
    map<int, vector<int>> count;

    // Insert key with an empty vector -- Must need because sometimes there may be no value inside a key
    count[1] = vector<int>();
    count[2] = vector<int>();
    count[3] = vector<int>();

    for(int i = 1; i <= n; i++) {
        cin >> t;
        count[t].push_back(i);
    }

    // The lowest arr size of a key is: 
    int min_arr_size = 5000;
    for(const auto& pair: count) {
        min_arr_size = min(min_arr_size, (int)pair.second.size());
    }
    cout << min_arr_size << endl;

    if (min_arr_size != 0) {
        for(int i = 0; i < min_arr_size; i++) {
            for(const auto& pair: count) {
                cout << pair.second[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}