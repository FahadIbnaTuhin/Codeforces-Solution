#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int t; cin >> t;
 
    while(t--) {
        int n, count = 0, evens = 0, odds= 0; cin >> n;
 
        for(int i = 0, inp; i < n; i++) {
            cin >> inp;
 
            if (i % 2 != inp % 2) {
                if (i % 2) odds++; // i % 2 == 1, then it will be true, 0 for false
                else evens++;
            }
        }
 
        if (evens != odds) {
            cout << -1 << endl;
        } else {
            cout << evens << endl; // print odd also
        }
    }
 
    return 0;
}