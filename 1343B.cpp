#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int a; cin >> a;

        if (a % 4 != 0) {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;

            int e_sum = 0, o_sum = 0;
            for(int i = 2; i <= a; i += 2) {
                cout << i << " ";
                e_sum += i;
            }
            for(int i = 1; i < a - 2; i += 2) {
                cout << i << " ";
                o_sum += i;
            }
            cout << (e_sum - o_sum) << endl;
        }
    }

    return 0;
}

// Sum of an arithmetic sequence: The sum of the first n terms(for evens) of an arithmetic sequence can be calculated using the formula:
// Sum=(n/2)(first term+last term)
// In the case of even numbers starting from 2, you can find the sum of the first half using this formula.(first half = even and second half = odd)