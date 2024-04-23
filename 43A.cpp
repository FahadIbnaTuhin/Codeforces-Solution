#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, goal = 0; cin >> t;

    string win, team;
    while(t--) {
        if (goal != 0) {
            cin >> team;
            
            if (team == win) {
                ++goal;
            } else {
                --goal;
            }
        } else {
            cin >> win;
            goal = 1;
        }
    }

    cout << win << '\n';

    return 0;
}

// Easy but not efficient
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     map<string, int> count;
    
//     for(int i = 0; i < t; i++) {
//         string s; cin >> s;
//         ++count[s];
//     }    

//     pair<string, int> p;
//     for(auto u : count) {
//         if (p.second < u.second) {
//             p = u;
//         }
//     }

//     cout << p.first << '\n';

//     return 0;
// }