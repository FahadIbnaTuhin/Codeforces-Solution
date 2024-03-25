// Petya calls a number almost lucky if it could be evenly divided by some lucky number.
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int arr[] {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 774, 747, 744};

    bool nearly_lucky = false;
    for(int i: arr) {
        if (n % i == 0) {
            nearly_lucky = true;
            break;
        }
    }

    if (nearly_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}