#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    if (n % 2 == 1) {
        if (n % 2 == 0) {
            cout << "Mahmoud" << endl;
        } else {
            cout << "Ehab" << endl;
        }
    } else {
        if (n % 2 == 1) {
            cout << "Ehab" << endl;
        } else {
            cout << "Mahmoud" << endl;
        }
    }

    return 0;
}