// As soon as it gets the unique, it will return the output [no need to loop through all]
#include <iostream> 
#include <vector>
using namespace std;

int main() {    
    int n, inp, last_even = 0, last_odd = 0, even_count = 0, odd_count = 0; cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> inp;
        if (inp % 2 == 0) {
            ++even_count;
            last_even = i + 1; // adding one because for output the index i will be start from 1

        } else {
            ++odd_count;
            last_odd = i + 1;
        }

        if (even_count > 1 && odd_count == 1) {
            cout << last_odd << endl;
            break;
        } else if (odd_count > 1 && even_count == 1) {
            cout << last_even << endl;
            break;
        }
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {    
//     int n, inp; cin >> n;
//     vector<int> even;
//     vector<int> odd;
    
    
//     for(int i = 0; i < n; i++) {
//         cin >> inp;
//         if (inp % 2 == 0) {
//             even.push_back(i + 1);
//         } else {
//             odd.push_back(i + 1);
//         }
//     }

//     if (even.size() == 1) {
//         cout << even[0] << endl;
//     } else {
//         cout << odd[0] << endl;
//     }

//     return 0;
// }