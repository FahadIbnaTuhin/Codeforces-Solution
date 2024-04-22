#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s1, s2, s3; cin >> s1 >> s2 >> s3;

    int a = sqrt((s1 * s3) / s2);
    int b = sqrt((s1 * s2) / s3);
    int c = sqrt((s2 * s3) / s1);

    cout << 4 * (a + b + c) << '\n';

    return 0;
}