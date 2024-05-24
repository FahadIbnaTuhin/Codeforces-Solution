#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;
    string a = s.substr(0, n), b = s.substr(n);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int magic = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) magic++;
        else if (a[i] < b[i]) magic--;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    if (n == abs(magic)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

// injective: No two elements of A map to the same element in 𝐵
// surjective: Every element of B is mapped by some element of 𝐴
// In a bijection, there is a perfect pairing between the elements of the two sets,
// meaning each set has the same number of elements, and they can be matched precisely 
// one-to-one without any leftovers.