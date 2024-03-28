#include <iostream>
using namespace std;

int main() {
    int a, b, c, max = 0; cin >> a; cin >> b; cin >> c;
    int arr[6];
    arr[0] = a + b + c;
    arr[1] = a * b * c;
    arr[2] = a * (b + c);
    arr[3] = (a + b) * c;
    arr[4] = a + (b * c);
    arr[5] = (a * b) + c;

    for(int i: arr) {
        if (i > max) max = i;
    }

    cout << max << endl;

    return 0;
}