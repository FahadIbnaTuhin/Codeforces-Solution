#include <iostream>

using namespace std;

int main() {
    int n, count = 1; cin >> n;

    for(int i = 2; i < n; i++) {
        if ((n - i) % i == 0) {
            ++count;
        }
    } 

    cout << count << endl;

    return 0;
}