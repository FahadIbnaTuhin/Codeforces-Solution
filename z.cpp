#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int countWays(int current, int end) {
//     if (current == end) return 1;
//     if (current > end) return 0;

//     return countWays(current + 1, end) + countWays(current + 2, end) + countWays(current + 3, end);
// }
// // If current == E, you have reached the end, so there's 1 way (doing nothing more).
// // If current > E, you've gone past the end, so there are 0 ways.

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int s, e; cin >> s >> e;

//     cout << countWays(s, e) << '\n';

//     return 0;
// }