#include <iostream>
#include <vector>
using namespace std;

int main() {
    string a; cin >> a;
    // string a = "WUBWUBABCWUB";
    // string a = "WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
    vector<char> arr;

    int i = 0;
    while(size(a) != 0) {
        // cout << a.substr(i, i + 3) << endl;
        if (a.substr(i, i + 3) == "WUB") {
            a = a.substr(i + 3);
            if (!arr.empty() && arr.back() != ' ') {
                arr.push_back(' ');
            } 
        } else {    
            arr.push_back(a[i]);
            a = a.substr(i + 1);
        }
    }

    for(char c: arr) {
        cout << c;
    }
    cout << endl;

    return 0;
}