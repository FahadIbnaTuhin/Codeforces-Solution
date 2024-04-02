#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count = 0; cin >> n;
    int arr[n]; cin >> arr[0];
    int h = arr[0], l = arr[0];
 
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        if (h < arr[i]) {
            h = arr[i];
            ++count;
        } else if (l > arr[i]) {
            l = arr[i];
            ++count;
        }
    }
 
    cout << count << endl;
 
    return 0;
}