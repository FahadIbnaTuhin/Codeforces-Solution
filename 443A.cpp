#include <iostream>
#include <set>
using namespace std;

int main() {    
    string s; 
    getline(cin, s);
    set<char> arr;

    // cout << s[size(s) - 2] << endl;
    for(int i = 1; i < size(s) - 1; i += 3) {
        arr.insert(s[i]);
    }

    cout << arr.size() << endl;

    return 0;
}