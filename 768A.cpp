#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    ll min_el = LLONG_MAX, max_el = LLONG_MIN;
    ll min_cnt = 0, max_cnt = 0;
    
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;

        if (a < min_el) {
            min_el = a;
            min_cnt = 1;
        } else if (a == min_el) ++min_cnt;
        
        if (a > max_el) {
            max_el = a;
            max_cnt = 1;
        } else if (a == max_el) ++max_cnt;
    }

    if (n == 1 || min_el == max_el) {
        cout << 0 << '\n';
    } else {
        cout << n - (min_cnt + max_cnt) << '\n';
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n; cin >> n;

//     multiset<ll> ms;

//     for (int i = 0; i < n; i++) {
//         ll a; cin >> a;
//         ms.insert(a);
//     }

//     ll min_el = *ms.begin();
//     ll max_el = *(--ms.end());

//     if (n == 1 || min_el == max_el) {
//         cout << 0 << '\n';
//         return 0; 
//     }
    
//     cout << n - (ms.count(min_el) + ms.count(max_el)) << '\n';

//     return 0;
// }