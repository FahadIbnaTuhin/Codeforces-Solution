#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, sum = 0; cin >> t;

    while(t--) {
        int m, c; cin >> m >> c;

        if (m > c) {
            sum -= 1;
        } else if (m < c) {
            sum += 1;
        }
    }

    if (sum < 0) {
        cout << "Mishka" << endl;
    } else if (sum > 0) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}