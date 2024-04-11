#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        string result = "";
        for(int i = 0; i < 8; i++) {
            string inp; cin >> inp;
            if (inp != "........") {
                inp.erase(remove(inp.begin(), inp.end(), '.'), inp.end());
                result += inp;
            }
        }

        cout << result << '\n';
    }

    return 0;
}