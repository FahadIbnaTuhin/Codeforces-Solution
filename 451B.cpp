#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<int> v(n);
    for (auto &u : v) cin >> u;

    if (is_sorted(v.begin(), v.end())) {
        cout << "yes\n1 1\n";
        return 0;
    }

    int fi, fj;
    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
            fi = i - 1;
            i++;
            
            while (v[i - 1] > v[i] && i < n) {
                i++;
            }
            fj = i - 1;
            break;
        }
    }
    
    if ((fj + 1 >= n || v[fi] < v[fj + 1]) && (fi - 1 < 0 || v[fi - 1] < v[fj])) {
        reverse(v.begin() + fi, v.begin() + fj + 1);
        if (is_sorted(v.begin(), v.end())) {
            cout << "yes\n" << fi + 1 << ' ' << fj + 1 << '\n';
            return 0;
        } 
    } 
    
    cout << "no\n";

    return 0;
}