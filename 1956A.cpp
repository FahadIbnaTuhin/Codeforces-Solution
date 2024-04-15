#include <bits/stdc++.h>

using namespace std;

string generateString(int n) {
    string word;
    char current_char = 'A';

    for(int i = 0; i < n; i++) {
        word += current_char;
        ++current_char;
    }

    return word;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int k, q; cin >> k >> q;
        int a[k]; // 3 5
        
        for(int i = 0; i < k; i++) cin >> a[i];

        for(int i = 0; i < q; i++) {
            int n; cin >> n; // 5

            string word = generateString(n); // ABCDE

            for(int j = 0; a[j] <= word.size(); j++) {
                word.erase(word.begin() + a[j] - 1, word.begin() + a[j]);
                j -= 1;
            }

            cout << word.size() << ' ';
        }
        cout << '\n';
    }

    return 0;
}