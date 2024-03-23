#include <iostream>

using namespace std;

int main() {
    int k, n, w; cin >> k >> n >> w;
    int total{};

    for(int i = 1; i < (w + 1); ++i) {
        total += (i * k);
    }

    if (total > n) {
        cout << (total - n) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}