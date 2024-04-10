#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int prev; cin >> prev;
    
    int m_count = 1, count = 1;
    for(int i = 1; i < n; i++) {
        int current; cin >> current;
        if (prev < current) {
            ++count;
        } else {
            m_count = max(m_count, count);
            count = 1;
        }
        prev = current;
    }

    m_count = max(m_count, count);
    cout << m_count << endl;

    return 0;
}