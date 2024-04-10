#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n, odds = 0; cin >> n;

        for(int i = 0; i < 2 * n; i++) {
            int a; cin >> a; 
            
            if (a % 2 == 1) {
                ++odds;
            }
        }

        cout << (odds == n ? "YES" : "NO") << '\n';
    }   

    return 0;
}