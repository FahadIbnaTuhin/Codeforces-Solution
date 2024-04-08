#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    cout << n / 2 << endl;
    if (n % 2 == 0) {
        for(int i = 0; i < n / 2; i++) cout << 2 << " ";
        cout << endl;
    } else {
        int div = (n / 2);
        int n_2 = div - 1;
        for(int i = 0; i < n_2; i++) cout << 2 << " ";
        cout << (n - (2 * n_2)) << endl;
    }

    return 0;
}