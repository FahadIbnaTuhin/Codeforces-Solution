#include <bits/stdc++.h>

using namespace std;

struct cordinate
{
    int x = 0;
    int y = 0;

    bool operator==(const cordinate& other) const {
        return (x == other.x && y == other.y);
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        cordinate a;
        vector<cordinate> arr;

        for(int i = 0; i < n; i++) {
            char c; cin >> c;

            switch (c)
            {
            case 'U':
                ++a.y;
                arr.push_back(a);
                break;
            case 'D':
                --a.y;
                arr.push_back(a);
                break;
            case 'R':
                ++a.x;
                arr.push_back(a);
                break;
            case 'L':
                --a.x;
                arr.push_back(a);
                break;
            default:
                break;
            }
        }

        cordinate candy;
        candy.x = 1;
        candy.y = 1;
        if (find(arr.begin(), arr.end(), candy) != arr.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}