#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    char arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int a, d;
    for(char i: arr) {
        if (i == 'A') {
            ++a;
        } else {
            ++d;
        }
    }

    if (a > d) {
        cout << "Anton" << endl;
    } else if (a < d) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}