#include<bits/stdc++.h>
using namespace std;
int main() {
    int init[5] {10, 10, 58, 31, 63, 40, 76};

    cout << max(init) << ", and his position: " << index(init) << endl;
    cout << min(init) << ", and his position: " << index(init) << endl;

    return 0;
}