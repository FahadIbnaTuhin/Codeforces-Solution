#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        int diff = b - a;
        if (diff >= 2) {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}