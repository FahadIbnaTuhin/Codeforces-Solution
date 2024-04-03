#include <bits/stdc++.h>
using namespace std;

int main() {
    string inp; cin >> inp;

    for(int i = 0; i < size(inp); i++) {
        if (inp[i] == '.') {
            cout << 0;
        } else if (inp[i] == '-' && inp[i + 1] == '.') {
            cout << 1;
            i++;
        } else {
            cout << 2;
            i++;
        } 
    }
    cout << endl;

    return 0;
}