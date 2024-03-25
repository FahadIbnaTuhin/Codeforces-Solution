#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n;
    int arr[n + 1];
    for(int i = 1; i < n + 1; i++) {
        cin >> k; 
        arr[k] = i;
    }

    for(int i = 1; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// User's 2nd line input indicates: in ith position the values are pi.
// pi means the number of a friend who gave a gift to friend number i.
// so the user 2nd line input indicates,
// value 4 has given the gift to 3(index), 1 has given the gift to 4, [indexing starts from 1]
// value 2 has gives the gift to 1(index), 3 has given the gift to 2,