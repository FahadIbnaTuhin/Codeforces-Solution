#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    vector<int> v(n);
    for (auto &u : v) cin >> u;

    bool ok = true;
    map<int, int> store;
    for (auto &u : v) {
        if (u == 25) {
            store[25]++;
        } 
        else if (u == 50) {
            if (store[25] >= 1) {
                store[25]--;
                store[50]++;
            }  else {
                ok = false;
                break;
            }
        }
        else {
            if (store[50] >= 1 && store[25] >= 1) {
                store[50]--;
                store[25]--;
            } else if (store[25] >= 3) {
                store[25] -= 3;
            } else {
                ok = false;
                break;
            }
        }    
    }

    cout << (ok ? "YES\n" : "NO\n");

    return 0;
}

// for 100, i haven't put this inside map as all the customers have 50 or 75 or 100. So, no need to consider 