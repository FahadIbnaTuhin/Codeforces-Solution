#include <bits/stdc++.h>

using namespace std;

const int mx = 1e5+123;
int arr[mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        arr[a] = i + 1;
    }

    int m; cin >> m;
    long long int vasya = 0, petya = 0;
    while(m--) {
        int b; cin >> b;

        vasya += arr[b];
        petya += n - arr[b] + 1;
    }

    cout << vasya << " " << petya << '\n';

    return 0;
}