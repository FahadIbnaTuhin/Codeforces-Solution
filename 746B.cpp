#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    deque<char> data;

    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        if ((n - i) % 2 == 1) {
            data.push_back(c);
        } else {
            data.push_front(c);
        }
    }

    while (!data.empty()) {
        cout << data.front();
        data.pop_front();
    }
    cout << '\n';

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n; cin >> n;
//     deque<char> data;

//     bool flag;
//     char c; cin >> c;
//     if (n % 2 == 1) {
//         data.push_back(c);
//         flag = true;
//     }
//     else {
//         data.push_front(c);
//         flag = false;
//     }

//     for (int i = 1; i < n; i++) {
//         cin >> c;
//         if (flag) {
//             data.push_front(c);
//             flag = false;
//         } else {
//             data.push_back(c);
//             flag = true;
//         }
//     }

//     while (!data.empty()) {
//         cout << data.front();
//         data.pop_front();
//     }
//     cout << '\n';

//     return 0;
// }