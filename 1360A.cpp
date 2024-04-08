#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;
        
        int min, max;
        if (a < b) {
            min = a;
            max = b;
        } else {
            min = b;
            max = a;
        }

        for(int i = min * 2; ; i++) {
            if (max <= i) {
                cout << i * i << endl;
                break;
            }
        }
    }

    return 0;
}