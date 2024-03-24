#include <iostream>
using namespace std;

bool is_distinct(string y) { // Checking if the year is distinct or not
    bool distict = true;
    for(int i = 0; i < size(y) - 1; i++) {
        for(int j = i + 1; j < size(y); j++) {
            if (y[i] == y[j]) {
                distict = false;
                break;
            }
        }
    }
    return distict;
}

int main() {
    int y; cin >> y;

    while(true) {
        if (is_distinct(to_string(++y))) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}