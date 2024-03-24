#include <iostream>
using namespace std;

int main() {
    int n, h; cin >> n >> h;
    
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for(int i: arr) {
        if (i > h) {
            sum += 2;
        } else {
            ++sum;
        }
    }
    
    cout << sum << endl;

    return 0;
}