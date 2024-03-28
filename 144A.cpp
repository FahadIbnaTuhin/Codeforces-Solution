#include <iostream>
using namespace std;

int main() {
    int n, a; cin >> n >> a;
    int maxv = a, minv = a, maxi = 1, mini = 1;

    for(int i = 2; i <= n; i++) {
        int a;
        cin >> a;

        if (a > maxv) { // To get the lowest index highest value
            maxv = a;
            maxi = i;
        } 
        if (a <= minv) { // To get the highest index highest value
            minv = a;
            mini = i;
        }
    }

    cout << maxv << " " << maxi << endl;
    cout << minv << " " << mini << endl;

    if (maxi > mini) {
        cout << ((maxi - 1) + (n - mini) - 1) << endl;
    } else {
        cout << ((maxi - 1) + (n - mini)) << endl;
    }

    return 0;
}

// https://www.youtube.com/watch?v=i9i04TDApj8