#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    int arr[4];
    for(int i = 0; i < 4; i++) cin >> arr[i];

    unordered_set<int> temp;
    int count = 0;
    for(int i: arr) {
        if (temp.find(i) != temp.end()) { // An iterator to the requested element. If no such element is found, past-the-end (see end()) iterator is returned.
            ++count;
        }
        temp.insert(i);
    }

    cout << count << endl;

    return 0;
}