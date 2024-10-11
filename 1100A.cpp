#include <bits/stdc++.h>
using namespace std;

int n, k; 
vector<int> tabs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> k;
    tabs.resize(n);
    
    for (int &i : tabs) cin >> i;

    int most = 0;
    for (int b = 0; b < n; b++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (i % k != b % k) {
                sum += tabs[i];
            }
        }

        most = max(most, abs(sum));
    }

    cout << most << '\n';

    return 0;
}

// When Roman selects a starting tab b, all tabs whose index gives the same remainder when divided by k (i.e., i % k == b % k) will be closed.
// The condition i % k != b % k ensures that the loop only counts the tabs that remain open after closing the specified ones.