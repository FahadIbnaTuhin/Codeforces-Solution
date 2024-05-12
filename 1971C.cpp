#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        if (a > b) swap(a, b);

        unordered_set<int> s1;
        for(int i = a; i <= b; i++) s1.insert(i);

        unordered_set<int> s2;
        for(int i = 1; i <= 12; i++) {
            if(s1.find(i) == s1.end()) {
                s2.insert(i);
            }
        }   

        if((s1.count(c) && s2.count(d)) || (s1.count(d) && s2.count(c))) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

// // for better understanding, also think for this case
// 1
// 9 3 3 9