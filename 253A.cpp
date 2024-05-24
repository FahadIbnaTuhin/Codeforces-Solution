#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ifstream input("input.txt");
    ofstream output("output.txt");

    int n, m; 
    input >> n >> m;    

    char b = 'B';
    char g = 'G';

    if (m > n) {
        swap(b, g);
        swap(n, m);
    }

    while (n > 0 && m > 0) {
        output << b << g;
        --n;
        --m;
    }

    while (n > 0) {
        output << b;
        --n;
    }

    while (m  > 0) {
        output << g;
        --m;
    }

    output << '\n';

    input.close();
    output.close();

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n, m; 
//     cin >> n >> m;    

//     char b = 'B';
//     char g = 'G';

//     if (m > n) {
//         swap(b, g);
//         swap(n, m);
//     }

//     while (n > 0 && m > 0) {
//         cout << b << g;
//         --n;
//         --m;
//     }

//     while (n > 0) {
//         cout << b;
//         --n;
//     }

//     while (m  > 0) {
//         cout << g;
//         --m;
//     }

//     cout << '\n';

//     return 0;
// }