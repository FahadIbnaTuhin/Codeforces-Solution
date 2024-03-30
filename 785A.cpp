#include <iostream> // 234ms
#include <unordered_map>
using namespace std;

int main() {
    int n, total = 0; cin >> n;
    string s;
    unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    for(int i = 0; i < n; i++) {
        cin >> s;
        total += faces[s];
    }

    cout << total << endl;

    return 0;
}

// #include <iostream> // 249ms
// using namespace std;

// int main() {
//     int n, total = 0; cin >> n;
//     string s;

//     for(int i = 0; i < n; i++) {
//         cin >> s;
//         if (s == "Tetrahedron") {
//             total += 4;
//         } else if (s == "Cube") {
//             total += 6;
//         } else if (s == "Octahedron") {
//             total += 8;
//         } else if (s == "Dodecahedron") {
//             total += 12;
//         } else {
//             total += 20;
//         }
//     }

//     cout << total << endl;

//     return 0;
// }