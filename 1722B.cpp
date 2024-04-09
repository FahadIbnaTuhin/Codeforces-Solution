#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        char arr[2][n + 1];

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < n; j++) {
                char inp; cin >> inp;
                if (inp == 'G') {
                    arr[i][j] = 'B';
                } else {
                    arr[i][j] = inp;
                }
            }
            arr[i][n] = '\0'; // Adding null terminator to make it a C-style string
        }

        string str1(arr[0]);
        string str2(arr[1]);

        cout << (str1 == str2 ? "YES" : "NO") << endl;
    }   

    return 0;
}