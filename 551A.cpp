#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
vector<int> arr, cpyArr;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cpyArr = arr;
    sort(cpyArr.rbegin(), cpyArr.rend());

    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        if (cnt.find(cpyArr[i]) == cnt.end()) {
            cnt[cpyArr[i]] = i + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << cnt[arr[i]] << ' ';
    }
    cout << '\n';

    return 0;
}