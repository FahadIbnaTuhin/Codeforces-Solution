#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    for(int i = 0, a; i < n; i++) {
        cin >> a;
        if (a == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;

    return 0;
}