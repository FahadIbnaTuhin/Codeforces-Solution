#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    int lowest = INT_MAX, c = 0, p = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        
        if (lowest > a) {
            lowest = a;
            p = i + 1;;
            c = 1;
        } else if (lowest == a) {
            ++c;
        }
    }   

    if (c > 1) cout << "Still Rozdil\n";
    else cout << p << '\n';

    return 0;
}