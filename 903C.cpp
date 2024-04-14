#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    map<int, int> count;

    int m_count = 0;
     for(int i = 0; i < n; i++) {
        int a; cin >> a;

        ++count[a];
        m_count = max(m_count, count[a]);
    }

    cout << m_count << '\n';

    return 0;
}