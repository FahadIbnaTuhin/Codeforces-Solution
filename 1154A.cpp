#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4];
    for(int i = 0; i < 4; i++) cin >> arr[i];

    sort(arr, arr + 4);

    cout << (arr[3] - arr[0]) << " " << (arr[3] - arr[1]) << " " << (arr[3] - arr[2]) << endl;

    return 0;
}

// x1, x2, x3, x4 are a+b, a+c, b+c respectively. by sorting, we can get the beggiest value which is 
// d  = a+b+c. Now if we substrct d - x1 = a + b + c - (a + b) = c will get c. Same way
// we will get others value if we d-x2, d-x3