#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int h, w; cin >> h >> w;

        bool recPos = true;
        if (w & 1 && h & 1) {
            recPos = false;
        } 
        else if (w % 2 == 0) { // If vertically cut possible
            if (2 * h == w && w / 2 == h) {
                recPos = false;
            }
        } 
        else if (h % 2 == 0) {  // If horizontal cut possible
            if (h / 2 == w || 2 * w == h) {
                recPos = false;                
            }
        } 

        cout << (recPos ? "Yes\n" : "No\n");
    }

    return 0;
}
// If you cut equally either in vertically or horizontally then only rectangle possible.
// Otherwise it won't be a rectangle.