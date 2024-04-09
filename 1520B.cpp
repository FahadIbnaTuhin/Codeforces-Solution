#include <iostream>

using namespace std;

int main() {
    string inp = "ABC";
    int inp_size = size(inp);

    string first = inp.substr(0, (inp_size / 2));
    if (inp_size % 2 == 0) {
        string second = inp.substr((inp_size / 2));

        if (first == second) {
            
        }
    } else {
        string second = inp.substr((inp_size / 2), (inp_size - 2));


    }
    cout << first << " " <<  second << endl;

    return 0;
}