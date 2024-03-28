#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int notes[5] {100, 20, 10, 5, 1};

    int count = 0;
    for(int i: notes) {
        count += (n / i);
        n %= i;

        if (n == 0) break;
    }

    cout << count << endl;

    return 0;
}