#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int result(const auto &a, const auto &b) {
    if ((get<0>(a) != get<0>(b)) && (get<1>(a) == get<1>(b)) && (get<2>(a) == get<2>(b))) return 1;
    if ((get<0>(a) == get<0>(b)) && (get<1>(a) != get<1>(b)) && (get<2>(a) == get<2>(b))) return 1;
    if ((get<0>(a) == get<0>(b)) && (get<1>(a) == get<1>(b)) && (get<2>(a) != get<2>(b))) return 1;
    return 0;
}

void solve() {
    int n; cin >> n; 
    int arr[n]; 
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<tuple<int, int, int>> data;
    for (int i = 0; i < n - 2; i++) {
        data.push_back(make_tuple(arr[i], arr[i + 1], arr[i + 2]));
    }

    int cnt = 0;
    for (int i = 0, sz = data.size(); i < sz - 1; i++) {
        for (int j = i + 1; j < sz; j++) {
            cnt += result(data[i], data[j]);
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while (t--) {
        solve();
    }   

    return 0;
}