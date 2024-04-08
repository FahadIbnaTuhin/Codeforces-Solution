#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int arr[n]; cin >> arr[0];
        int lowest_index = 0;
        for(int i = 1; i < n; i++) {
            cin >> arr[i];
            if (arr[lowest_index] > arr[i]) {
                lowest_index = i;
            }
        }

        ++arr[lowest_index];
 
        long long int product = 1;
        for(const int& i: arr) {
            product *= i;
        }

        cout << product << endl;
    }

    return 0;
}