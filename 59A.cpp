#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

struct Count
{
    int uppercase {};
    int lowercase {};
};

int main() {
    string s; cin >> s;
    Count x; 

    for(char c: s) {
        if (isupper(c)) {
            x.uppercase += 1;
        } else {
            x.lowercase += 1;
        }
    }

    // cout << x.uppercase << " " <<  x.lowercase << endl;

    if (x.lowercase >= x.uppercase) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s << endl;

    return 0;
}