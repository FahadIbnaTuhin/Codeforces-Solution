#include <bits/stdc++.h>
using namespace std;

int picker(vector<int>& arr) {
    int pick = 0;
    if (arr.size() == 1) {
        pick = arr[0];
        arr.pop_back();
    } else if (arr[0] > arr[size(arr) - 1]) {
        pick = arr[0];
        arr.erase(arr.begin());
    } else {
        pick = arr[size(arr) - 1];
        arr.pop_back();
    }
    return pick;
}

int main() {
    int n;  cin >> n;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) cin >> cards[i];

    int seraja = 0, dima = 0, pick, i = 1; // for even value of i, will be for seraja, the opposite will be for dima
    while(cards.size() != 0) {
        if (i % 2 != 0) {
            pick = picker(cards);
            seraja += pick;
        } else {
            pick = picker(cards);
            dima += pick;
        }
        ++i;
    }

    cout << seraja << " " << dima << endl;

    // int pick = picker(cards);
    // cout << pick << endl;

    // for(int i: cards) {
    //     cout << i << " ";
    // }

    return 0;
}