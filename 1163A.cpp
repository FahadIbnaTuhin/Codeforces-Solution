#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;

    if (m <= 1) {
        cout << 1 << '\n';
        return 0;
    }

    if (m - 1 < n / 2) {
        cout << m << '\n';
    } else {
        cout << n - m << '\n';
    }

    return 0;
}

// Eating Soup / Round Table
// We can prove that the first one to leave the circle does not make any difference to our answer. So after trying some tests, you will 
// probably come up with an idea of selecting the cats that are sitting right between the other two to be the prior ones to leave because, 
// in this way, those vacancies will definitely be useful for creating more separate groups.

// Therefore, if m−1<⌊n/2⌋, the answer is m since each cat to leave (after the first cat) increases the number of groups. 
// Otherwise, if m+1≥⌊n/2⌋ , each independent cat to leave decreases the number of groups so the answer is n−m
// Summarily, the answer is min(m,n−m) Be careful with m=0