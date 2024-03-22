#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    char arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count {};
    for(int i = 0; i < (n - 1); ++i) {
        if (arr[i] == arr[i + 1]) {
            ++count;
        }
    }
    cout << count << endl;

    return 0;
}

// Stones in a row are considered neighboring if there are no other stones between them. 
// RR, GG, BB - neighboring 