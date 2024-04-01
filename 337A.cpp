#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, f; cin >> n >> m;
    vector<int> arr;

    for(int i = 0; i < m; i++) {
        cin >> f;
        arr.push_back(f);
    }

    while(arr.size() != 0) {
        int max_pieces = *max_element(arr.begin(), arr.end());
        int min_pieces = *min_element(arr.begin(), arr.end());
        
        auto max_it = find(arr.begin(), arr.end(), max_pieces);
        auto min_it = find(arr.begin(), arr.end(), min_pieces);

        int max_pieces1 = *max_element(arr.begin(), arr.end());
        int min_pieces1 = *min_element(arr.begin(), arr.end());

        if (abs(max_pieces1 - max_pieces) > abs(min_pieces1 - min_pieces)) {
            arr.erase(max_it);
        } else {
            arr.erase(min_it);
        }
    }

    for(int i : arr) {
        cout << i << " ";
    }
    
    return 0;
}
// 4 6
// 10 12 10 7 5 22