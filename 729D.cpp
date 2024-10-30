#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b, k;
    string s; 
    cin >> n >> a >> b >> k >> s;
    string match(b, '0');

    vector<int> placeBoat;
    for (int i = 0; i < n; i++) {
        if (s.substr(i, b) == match) {
            i = i + b - 1;
            placeBoat.push_back(i + 1);  // output is in 1-indexed
        }
    }

    int num_of_shot = placeBoat.size() - a + 1; // It is guaranteed that there is at least one valid ships placement.
    cout << num_of_shot << '\n';
    for (int i = 0; i < num_of_shot; i++) {
        cout << placeBoat[i] << ' ';
    }
    cout << '\n';

    return 0;
}