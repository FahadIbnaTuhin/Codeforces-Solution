#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);    
    string a; cin >> a;
    char temp = a[0];

    for (int i = 0, sz = a.size(); i < sz; i++) {
        if (4 < (a[i] - '0')) {
            a[i] = (9 - (a[i] - '0')) + '0';
        }
    }

    if (temp == '9') a[0] = temp;

    cout << a << '\n';

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main() {
//     // ios::sync_with_stdio(false);
//     // cin.tie(0);    
//     string x; cin >> x;
//     int sz = x.size();
//     string ans;

//     for (int i = 1; !x.empty(); i++) {
//         char lastDigit = x.back();
//         if (i == sz && lastDigit == '9') ans += lastDigit;
//         else if (4 < (lastDigit - '0')) ans += to_string(9 - (lastDigit - '0'));
//         else ans += lastDigit;

//         x.pop_back();
//     }
//     reverse(ans.begin(), ans.end());

//     cout << ans << '\n';

//     return 0;
// }
// 0 1 2 3 4 | 5 6 7 8 9
// for the 0th index: 9 - 0 = 9 (getting leftmost & rightmost (increase)), 1: 9 - 1 = 8 (2nd 
// leftmost & 2nd rightmost). Observe, can see that if we invert digits before "|", it will increase
// the digit but, inverting the digits that after "|" is decreasing the digit


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);    
//     ll x; cin >> x;
//     int x_sz = to_string(x).size();
//     string s; 

//     for (int i = 1; x != 0; i++) {
//         int initD = x % 10;
//         int invertDigit = 9 - initD;

//         if (i == x_sz && invertDigit == 0) s += to_string(initD);
//         else if (invertDigit < initD) s += to_string(invertDigit);
//         else s += to_string(initD);

//         x /= 10;
//     }
//     reverse(s.begin(), s.end());

//     cout << s << '\n';

//     return 0;
// }