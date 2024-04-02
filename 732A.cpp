#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r; cin >> k >> r;

    int i = 0; 
    while(((i + 1) * k) % 10 != r) {
        if (((i + 1) * k) % 10 == 0) {
            break;
        }
        ++i;
    }
    cout << ++i << endl;

    return 0;
}