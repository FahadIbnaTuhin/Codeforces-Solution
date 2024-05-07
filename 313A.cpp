#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n; cin >> n;

    if (n >= 0) {
        cout << n << '\n';
    } else {
        ll a = n / 10;
        ll b = (n / 100 * 10) + (n % 10);

        cout << max(a, b) << '\n';
    }
    
    return 0;
}
// -297534606
// -29753460
// -29753466
// ll b = (n / 100 * 10) + (n % 10);
// n / 100 - will delete last two digit, 
// then * 10 for adding one digit at the end
// then add n % 10 to get the last digit at the end position



// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n; cin >> n;

//     if (n >= 0) {
//         cout << n << '\n';
//     } else {
//         string s = to_string(abs(n));
//         char highest = *max_element(s.end() - 2, s.end());

//         size_t pos = s.rfind(highest); // find the last occurence
//         s.erase(pos, 1);

//         cout << (s == "0" ? "0" : '-' + s) << '\n';
//     }
    
//     return 0;
// }