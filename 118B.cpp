#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    int spaces = n;
    int digits = 1;
    for(int i = 0; i < 2 * n + 1; i++) {
        // spaces
        for(int j = 0; j < spaces; j++) {
            cout << ' ' << ' ';
        }

        // digits
        int starts = 0;
        for(int j = 0; j < digits; j++) {
            if (j != digits - 1) cout << starts << ' ';
            else cout << starts;
            
            if (j < digits / 2) {
                starts++;
            } else {
                --starts;
            }
        }

        cout << '\n';
        if (i < n) {
            --spaces;
            digits += 2;
        }
        else {
            ++spaces;
            digits -= 2;
        }
    }    
    
    return 0;
}