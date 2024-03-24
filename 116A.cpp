#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0, max = 0;

    while(n--) {
        int a, b; cin >> a >> b;

        int diff = count - a + b;
        count = diff;
        if (max < diff) {
            max = diff;
        }
    }

    cout << max << endl;
    
    return 0;
}