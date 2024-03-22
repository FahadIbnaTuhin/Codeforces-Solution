#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

vector<string> generate_string(int counts[3]) {
    vector<string> arr;

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < counts[i]; j++) {
            if (arr.empty()) {
                arr.push_back(to_string(i + 1));
            } else {
                arr.push_back("+" + to_string(i + 1));
            }
        }
    }
    return arr;
}

int main() {
    string inp; cin >> inp;
    int counts[3] {};

    for(char i : inp) {
        if (isdigit(i)) {
            // cout << i << endl;
            counts[i - '1']++; // In C++, when you subtract two characters, the result is the difference in their ASCII 
            // values. Since the character '1' has an ASCII value of 49 and the character '0' has an ASCII value of 48, 
            // '1' - '1' will result in 49 - 49, which equals 0.
        }
    }

    // cout << "number of 1: " << counts[0] << ", number of 2: " << counts[1] << ", number of 3: " << counts[2] << endl;

    vector<string> arr = generate_string(counts);

    // vector<string> arr;
    // for(int i = 0; i < counts[0]; i++) {
    //     if (arr.empty()) {
    //         arr.push_back("1");
    //     } else {
    //         arr.push_back("+1");
    //     }
    // }

    // for(int i = 0; i < counts[1]; i++) {
    //     if (arr.empty()) {
    //         arr.push_back("2");
    //     } else {
    //         arr.push_back("+2");
    //     }
    // }

    // for(int i = 0; i < counts[2]; i++) {
    //     if (arr.empty()) {
    //         arr.push_back("3");
    //     } else {
    //         arr.push_back("+3");
    //     }
    // }

    for(int i = 0; i < size(arr); ++i) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
