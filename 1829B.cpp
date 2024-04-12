#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int m_count = 0, count = 0;
        
        for(int i = 0; i < n; i++) {
            int inp; cin >> inp;

            if (inp == 0) {
                ++count;
            } else {
                m_count = max(m_count, count);
                count = 0;
            }
        }
        
        m_count = max(m_count, count);
        cout << m_count << '\n';
    }

    return 0;
}