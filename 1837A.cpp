#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getRA(int x, int k) {
    while (x % k == 0) {
        x--;
    }      
    return x; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int x, k; cin >> x >> k;

        vector<int> v; 
        int sum = 0;
        while (x != 0) {
            int a = getRA(x, k);
            v.push_back(a);
            sum += a;
            x -= a;
        }

        cout << v.size() << '\n';
        for (int i : v) cout << i << ' ';
        cout << '\n';
    }   
    
    return 0;
}