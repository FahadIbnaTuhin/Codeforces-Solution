#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        string n; cin >> n;
        int sz = n.size();

        if ((n[sz - 1] - '0') % 2 == 0) {
            cout << 0 << '\n';
        } else if ((n[0] - '0') % 2 == 0) {
            cout << 1 << '\n';
        } else {
            int nn = stoi(n);
            bool evenFound = false;
            while (nn != 0) {
                if ((nn % 10) % 2 == 0) {
                    evenFound = true;
                    break;
                }
                nn /= 10;
            }
            cout << (evenFound ? 2 : -1) << '\n';
        }
    }
    
    return 0;
}

// If the last digit is even then output will be 0. Example: 754 -> 0
// If the first digit is even then output will be 1 as we need to reverse the whole thing
// only once. Ex: 279: 972 so 1
// If any even digit is in the middle, then always 2 because:
// 12759 -> 21759 -> 95712 so 2
// 17529 -> 25719 -> 91752 so 2
// If no even digit exist in the given number then output is -1