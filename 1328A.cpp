#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;

    for(int i = 0; i < t; i++) {
        int a, b; cin >> a >> b;

        long long result = static_cast<long long>(((b * ceil((long double)a / b)) - a));

        cout << result << endl;
    }

    return 0;
}