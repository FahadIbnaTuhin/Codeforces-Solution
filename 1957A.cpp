#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        map<int, int> m;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            ++m[a];
        }

        int count = 0;
        for(auto u : m) {
            count += (u.second / 3);
        }

        cout << count << '\n';
    }

    return 0;
}

// 1
// 9
// 4 2 2 2 2 4 2 4 4

//  Polygons are which have 3, 4, 5... 10 sides and we are asked to maximize the number of 
// polygons. We can do this by make as many 3 side polygon

// Yes, polygons can have more than 10 sides. In fact, polygons 
// can have any number of sides, theoretically ranging from 3 
// sides (a triangle) to infinity. 