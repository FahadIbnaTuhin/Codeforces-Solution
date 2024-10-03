#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int b, p, f, h, c; cin >> b >> p >> f >> h >> c;
        if (h < c) {
            swap(p, f);
            swap(h, c);
        }
        int tot_food = min(b / 2, p + f); // Total burgers that can be made

        int maxProfit = 0;

        int useP = min(tot_food, p);
        maxProfit += useP * h;
        tot_food -= useP;

        int useF = min(tot_food, f);
        maxProfit += useF * c;

        cout << maxProfit << '\n';
    }

    return 0;
}