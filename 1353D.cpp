#include <bits/stdc++.h>

using namespace std;

const int mx = 2e5+123;
int a[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        priority_queue< pair<int, int> > q;
        q.push({n, -1});

        int count = 1;
        while(!q.empty()) {
            int l = q.top().second * -1;
            int len = q.top().first;
            q.pop();

            int r = len + l - 1;

            int mid;
            if (len % 2 == 1) {
                mid = (l + r) / 2;
            } else {
                mid = (l + r - 1) / 2;
            }

            a[mid] = count;
            ++count;

            int l1, r1, l2, r2;
            l1 = l;
            r1 = mid - 1;
            
            l2 = mid + 1;
            r2 = r;
            
            if (l1 <= r1) {    
                q.push({r1 - l1 + 1, -l1});
            } 

            if (l2 <= r2) {
                q.push({r2 - l2 + 1, -l2});
            }
        }

        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << '\n';
    }

    return 0;
}