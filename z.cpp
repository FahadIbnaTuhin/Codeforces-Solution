#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s = ".l......";

    s.erase(remove(s.begin(), s.end(), '.'), s.end());
    cout << s << endl;

    return 0;
}

// find . -type f -executable -delete