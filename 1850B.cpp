#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> arr;

        for(int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;

            if (a <= 10) arr.push_back(b); 
            else arr.push_back(0);
        }

        vector<int>::iterator it = max_element(arr.begin(), arr.end());
        cout << distance(arr.begin(), it) + 1 << endl;
    }

    return 0;
}