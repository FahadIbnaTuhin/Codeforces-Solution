#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, x; cin >> n >> x;

        int count = 1;
        for(int i = 2; i < n; i += x) {
            ++count;
        }

        cout << count << endl;
    }

    return 0;
}