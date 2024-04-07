#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int x; cin >> x;
        int digits = to_string(x).length();

        int first = ((x % 10) - 1) * 10;
        int second = (digits * (digits + 1)) / 2;
        cout << (first + second) << endl;
    }   

    return 0;
}